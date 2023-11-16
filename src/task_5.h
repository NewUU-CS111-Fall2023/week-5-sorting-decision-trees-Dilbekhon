#include <iostream>
#include <unordered_map>
#include <vector>

void displayColors(const std::vector<std::vector<char>>& matrix) {
    std::unordered_map<char, std::string> colorMapping = {
        {'b', "Blue"},
        {'y', "Yellow"},
        {'w', "White"}
    };

    for (const auto& row : matrix) {
        for (char symbol : row) {
            std::cout << colorMapping[symbol] << ' ';
        }
        std::cout << '\n';
    }
}

int main() {
    std::vector<std::vector<char>> sampleInput = {
        {'b', 'b', 'w', 'b', 'b', 'y', 'w', 'w', 'w'},
        {'b', 'b', 'w', 'w', 'b', 'y', 'y', 'b', 'b'},
        {'y', 'y', 'y', 'w', 'w', 'b', 'b', 'b', 'b'},
        {'y', 'e', 'y', 'e', 'y', 'w', 'w', 'b', 'b'},
        {'w', 'b', 'b', 'w', 'w', 'b', 'w', 'w', 'w'},
        {'B', 'b', 'w', 'w', 'w', 'w', 'w', 'y', 'w'}  // Assuming 'B' is a typo and should be 'b'
    };

    displayColors(sampleInput);

    return 0;
}
