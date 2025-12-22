#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;

    std::cin >> H >> W;
    std::vector<std::vector<char>> a(H + 2, std::vector<char>(W + 2, '#'));

    for(int i = 1; i <= H; i++) {
        for(int j = 1; j <= W; j++) {
            std::cin >> a.at(i).at(j);
        }
    }
    for(int i = 0; i < H + 2; i++) {
        for(int j = 0; j < W + 2; j++) {
            std::cout << a.at(i).at(j);
        }
        std::cout << std::endl;
    }
    return 0;
}
// N B - PictureFrame
