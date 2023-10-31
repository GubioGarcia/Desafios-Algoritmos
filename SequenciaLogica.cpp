#include <iostream>
int main () {
    int n = 0;
    std::cin >> n;

    int i = 0;
    int linhas = 1;
    while (linhas <= n * 2) {
        if (linhas / 2 != 0) i += 1;
        std::cout << i << " " << i * i << " " << i * i * i << "\n";
        linhas++;
    }
    return 0;
}