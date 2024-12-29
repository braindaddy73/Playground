#include <iostream>
#include <ranges>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    auto view = std::views::reverse(vec);

    for (int n : view) {
        std::cout << n << ' ';
    }

    return 0;
}
