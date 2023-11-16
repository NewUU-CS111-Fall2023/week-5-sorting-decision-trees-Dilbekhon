#include <iostream>
#include <vector>
#include <string>

void bubbleSort(std::vector<std::string>& bookTitles) {
    int n = bookTitles.size();

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            // Compare adjacent book titles and swap if they are in the wrong order
            if (bookTitles[j] > bookTitles[j + 1]) {
                std::swap(bookTitles[j], bookTitles[j + 1]);
            }
        }
    }
}

int main() {
    std::vector<std::string> bookTitles = {
        "Catcher in the Rye",
        "Pride and Prejudice",
        "To Kill a Mockingbird",
        "The Great Gatsby",
        "Moby Dick"
    };

    bubbleSort(bookTitles);

    std::cout << "Sorted list of book titles:" << std::endl;
    for (const auto& title : bookTitles) {
        std::cout << title << std::endl;
    }

    return 0;
}
