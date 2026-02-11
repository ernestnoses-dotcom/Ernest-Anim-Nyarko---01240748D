/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>

int sumIntegerList(const std::vector<int>& numbers) {
    int total = 0;
    for (int num : numbers) {
        total += num;
    }
    return total;
}

// Example usage
int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    std::cout << "Sum: " << sumIntegerList(nums) << std::endl;
    return 0;
}
