#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> h(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> h[i];
    }

    std::vector<int> dp(N, 0);

    for (int i = 1; i < N; ++i) {
        dp[i] = std::min(dp[i - 1] + std::abs(h[i] - h[i - 1]), (i > 1 ? dp[i - 2] + std::abs(h[i] - h[i - 2]) : INT_MAX));
    }

    std::cout << dp[N - 1] << std::endl;

    return 0;
}
