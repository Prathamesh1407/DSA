#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

void shuffleArray(int array[], int n) {
    // Seed the random number generator
    srand(time(0));

    // Fisher-Yates shuffle algorithm
    for (int i = n - 1; i > 0; --i) {
        // Generate a random index from 0 to i
        //rand generates from 0 to 32767
        int j = rand() % (i+1);

        // Swap elements array[i] and array[j]
        std::swap(array[i], array[j]);
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 5}; // Sorted array
    int n = sizeof(array) / sizeof(array[0]);

    shuffleArray(array, n);

    // Print the shuffled array
    for (int i = 0; i < n; ++i) {
        std::cout << array[i] << " ";
    }

    return 0;
}
