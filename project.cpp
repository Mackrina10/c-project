#include <iostream>
#include <random>

int main () {
// Random number formations
    std::random_devicerd;
    std::mt19937 gen(rd());
    // Normal distribution parameters: mean = 0.0, standard deviation = 1.0
     std::normal_distribution<> dis(0.0, 1.0);

    // Generate and print 10 random numbers
     std::cout << "Normal distribution (Mean = 0, StdDev = 1):" << std:
    for (int i = 0; i < 10; ++i) {
    	  std::cout << dis(gen) << " ";
    	   }

    return 0;
}
