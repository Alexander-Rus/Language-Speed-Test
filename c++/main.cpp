#include <iostream>
#include <chrono>
#include <vector>
#include <algorithm>

void reverseVector(std::vector<int>& vec)
{
    std::reverse(vec.begin(), vec.end());
}



int main() {

std::vector<int> values(10000);

    // Generate a vector of 10000 values. 
    for (int i = 0; i < 10000; i++)
        {
            values[i] = i;
        }


    // Reverse the order of the integers, requires <algorithm>
    std::reverse(values.begin(), values.end());

    // Start the clock
    auto start = std::chrono::high_resolution_clock::now();

    // Perform the bubble sort, worst case scenario 
    for (size_t i = 0; i < values.size() - 1; i++) {
        for (size_t j = 0; j < values.size() - i - 1; j++) {
            if (values[j] > values[j + 1]) {
                std::swap(values[j], values[j + 1]);
            }
        }
    }

    // Stop the clock
    auto end = std::chrono::high_resolution_clock::now();

    //Print the results of the timing.
    std::chrono::duration<float> duration = end - start;
    std::cout << "C++ Time elapsed: " << duration.count() * 1000 << "ms" << std::endl;



    return 0;
}

