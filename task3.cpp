#include <iostream>
#include <vector>

const int N = 20000;

int main() {
    std::vector<int> primes;
    std::vector<bool> not_prime(N + 1);
    for (int i = 2; i <= N; ++i) {
        if (!not_prime[i]) {
            primes.push_back(i);
        }
        for (int p : primes) {
            if (i * p > N) {
                break;
            }
            not_prime[i * p] = true;
            if (i % p == 0) {
                break;
            }
        }
    }

    int time = 0;
    for (int p : primes) {
        ++time;
        std::cout << p << " \n"[time % 5 == 0];
    }

    return 0;
}