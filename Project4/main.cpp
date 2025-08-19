#include <iostream>
#include <conio.h>
#include <windows.h>
#include <vector>
#include <cstdlib>
using namespace std;

const int width = 20;
const int height = 20;

enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
Direction dir;

int x, y, fruitX, fruitY, score;
vector<pair<int, int>> snake;

// 光标移动函数
void gotoXY(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void Setup() {
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
    snake.clear();
    snake.push_back({ x, y });
}

void Draw() {
    gotoXY(0, 0); // 移动光标到左上角
    for (int i = 0; i < width + 2; i++) cout << "#";
    cout << endl;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0) cout << "#";
            bool printed = false;
            if (i == y && j == x) {
                cout << "O";
                printed = true;
            }
            else if (i == fruitY && j == fruitX) {
                cout << "F";
                printed = true;
            }
            else {
                for (size_t k = 1; k < snake.size(); k++) {
                    if (snake[k].first == j && snake[k].second == i) {
                        cout << "o";
                        printed = true;
                    }
                }
            }
            if (!printed) cout << " ";
            if (j == width - 1) cout << "#";
        }
        cout << endl;
    }
    for (int i = 0; i < width + 2; i++) cout << "#";
    cout << endl;
    cout << "Score: " << score << endl;
}

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
        case 'a': dir = LEFT; break;
        case 'd': dir = RIGHT; break;
        case 'w': dir = UP; break;
        case 's': dir = DOWN; break;
        case 'x': exit(0);
        }
    }
}

void Logic() {
    int prevX = snake[0].first;
    int prevY = snake[0].second;
    int prev2X, prev2Y;
    switch (dir) {
    case LEFT: x--; break;
    case RIGHT: x++; break;
    case UP: y--; break;
    case DOWN: y++; break;
    default: break;
    }
    if (x < 0) x = width - 1;
    if (x >= width) x = 0;
    if (y < 0) y = height - 1;
    if (y >= height) y = 0;

    for (size_t i = snake.size() - 1; i > 0; i--) {
        snake[i] = snake[i - 1];
    }
    snake[0] = { x, y };

    for (size_t i = 1; i < snake.size(); i++) {
        if (snake[i].first == x && snake[i].second == y) {
            gotoXY(0, height + 3);
            cout << "游戏结束！得分: " << score << endl;
            exit(0);
        }
    }

    if (x == fruitX && y == fruitY) {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        snake.push_back({ -1, -1 });
    }
}

int main() {
    Setup();
    // 隐藏光标
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;
    GetConsoleCursorInfo(hOut, &cci);
    cci.bVisible = FALSE;
    SetConsoleCursorInfo(hOut, &cci);

    while (true) {
        Draw();
        Input();
        Logic();
        Sleep(100);
    }
    return 0;
}