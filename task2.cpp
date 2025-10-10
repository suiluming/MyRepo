#include <iostream>
#include <algorithm>

int main() {
    int n, ans, now, x; // n：数组长度  ans：答案 now：当前和 x：当前输入
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> x;
        if (i == 0) {
            now = x;
            ans = x;
        } else {
            now = std::max(now + x, x);
            ans = std::max(ans, now);
        }
    }
    std::cout << ans << std::endl;
    
    return 0;
}