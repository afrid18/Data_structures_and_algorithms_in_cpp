#include <cstdlib>
#include <iostream>

int main(void) {
    int x, y;
    std::cout << "Please Enter two numbers: " ;
    std::cin >> x >> y;
    int sum = x + y;
    std::cout << "The sum is " << sum << std::endl;
    return EXIT_SUCCESS;
}
