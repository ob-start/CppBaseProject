/*
https://acm.hdu.edu.cn/showproblem.php?pid=2037
*/

#include <iostream>
#include <vector>
#include <algorithm>

struct Show {
    int start, end;
};

int main() {
    while (true) {
        int n;
        std::cin >> n;
        if (n == 0) break;

        std::vector<Show> shows(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> shows[i].start >> shows[i].end;
        }

        // 按结束时间升序排序
        std::sort(shows.begin(), shows.end(), [](const Show& a, const Show& b) {
            return a.end < b.end;
            });

        int count = 0, last_end = 0;
        for (const auto& show : shows) {
            if (show.start >= last_end) {
                ++count;
                last_end = show.end;
            }
        }
        std::cout << count << std::endl;
    }
    return 0;
}