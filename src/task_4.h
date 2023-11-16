#include <iostream>

int countElementsWithSmallerNeighbors(const int arr[], int size) {
    int count = 0;

    for (int i = 1; i < size - 1; ++i) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            count++;
        }
    }

    return count;
}

int main() {
    int arr[] = {5, 2, 8, 1, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = countElementsWithSmallerNeighbors(arr, size);
    std::cout << "Count of elements with both smaller neighbors: " << result << std::endl;

    return 0;
}
