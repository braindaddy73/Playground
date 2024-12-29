#include<iostream>
#include<vector>
#include<string>
#include<sstream>

std::vector<std::string> get_column(const std::string& input,
       size_t column_number, char delimiter = ',') {
    std::vector<std::string> rows;
    std::istringstream iss(input);
    std::string row;

    // Split the string into rows
    while (std::getline(iss, row)) {
        rows.push_back(row);
    }

    std::vector<std::string> result;
    for (const auto& r : rows) {
        std::istringstream row_stream(r);
        std::string field;
        size_t index = 0;

        while (std::getline(row_stream, field, delimiter)) {
            if (index == column_number) {
                result.push_back(field);
                break;
            }
            ++index;
        }
    }

    return result;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << std::endl;
    return 0;
}
