#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    int result = 0;

    std::cin >> N;
    std::cin >> K;

    std::vector<int> x(N);
    for (int i = 0; i < N; i++) {
        std::cin >> x[i];
    }

    for (int i = 0; i < N; i++) {
        // type_A // result += x[i];
        // type_B // result += (K - x[i]) * 2;

        result += min(x[i] * 2, (K - x[i]) * 2);
    }

    std::cout << result << std::endl;

    return 0;
}
// B - Collecting Balls (Easy Version)