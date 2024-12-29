#include <iostream>
#include <string_view>
#include <ranges>

auto get_column_cxx20(std::string_view data,
    size_t column_number, char delimiter = ',') {
    auto rows = data | std::views::split('\n');
    auto column =
        rows |
        std::views::transform(
            [delimiter, column_number](auto &&row) {
              auto fields = row | std::views::split(delimiter);
              auto it = std::ranges::begin(fields);
              std::advance(it, column_number);
              return *it;
            }) |
        std::views::transform([](auto &&rng) -> std::string_view {
          return std::string_view(&*rng.begin(),
               std::ranges::distance(rng));
        });
    return column;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << std::endl;
    return 0;
}
