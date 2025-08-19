/*
https://acm.hdu.edu.cn/showproblem.php?pid=2056
*/
// 方法一；
/* 

#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4) {
        // 第一个矩形的左下和右上
        double rx1 = min(x1, x2), ry1 = min(y1, y2);
        double rx2 = max(x1, x2), ry2 = max(y1, y2);
        // 第二个矩形的左下和右上
        double sx1 = min(x3, x4), sy1 = min(y3, y4);
        double sx2 = max(x3, x4), sy2 = max(y3, y4);

        // 求交集的左下和右上
        double ix1 = max(rx1, sx1), iy1 = max(ry1, sy1);
        double ix2 = min(rx2, sx2), iy2 = min(ry2, sy2);

        double area = 0.0;
        if (ix1 < ix2 && iy1 < iy2) {
            area = (ix2 - ix1) * (iy2 - iy1);
        }
        cout << fixed << setprecision(2) << area << endl;
    }
    return 0;
}
*/

//方法二：

#include <iostream>
using namespace std;

struct Point {
    double x, y;
};

struct Rect {
    Point lt;
    Point rd;
};

Rect tmp1, tmp2;
Rect r1, r2;

double Max(double a, double b) {
    return a > b ? a : b;
}
double Min(double a, double b) {
    return a < b ? a : b;
}

int main() {
    while (cin >> tmp1.lt.x >> tmp1.lt.y >> tmp1.rd.x >> tmp1.rd.y) {
        cin >> tmp2.lt.x >> tmp2.lt.y >> tmp2.rd.x >> tmp2.rd.y;

        r1.lt.x = Min(tmp1.lt.x, tmp1.rd.x);
        r1.lt.y = Min(tmp1.lt.y, tmp1.rd.y);
        r1.rd.x = Max(tmp1.lt.x, tmp1.rd.x);
        r1.rd.y = Max(tmp1.lt.y, tmp1.rd.y);

        r2.lt.x = Min(tmp2.lt.x, tmp2.rd.x);
        r2.lt.y = Min(tmp2.lt.y, tmp2.rd.y);
        r2.rd.x = Max(tmp2.lt.x, tmp2.rd.x);
        r2.rd.y = Max(tmp2.lt.y, tmp2.rd.y);

        double maxx = Max(r1.lt.x, r2.lt.x);
        double minx = Min(r1.rd.x, r2.rd.x);
        double maxy = Max(r1.lt.y, r2.lt.y);
        double miny = Min(r1.rd.y, r2.rd.y);
        double ans = (minx - maxx) * (miny - maxy);
        if (minx < maxx) ans = 0;
        if (miny < maxy) ans = 0;
        printf("%.2lf\n", ans);
    }
    return 0;
}