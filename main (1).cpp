/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> reverseStringList(const std::vector<std::string>& strings) {
    std::vector<std::string> reversedStrings = strings;
    for (std::string& str : reversedStrings) {
        std::reverse(str.begin(), str.end());
    }
    return reversedStrings;
}

// Example usage
int main() {
    std::vector<std::string> words = {"hello", "world", "cpp"};
    std::vector<std::string> reversed = reverseStringList(words);
    for (const std::string& word : reversed) {
        std::cout << word << " ";
    }
    return 0;
}
