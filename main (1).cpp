/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

// Function to sum two integers
int sum(int x, int y) {
    return x + y;
}   

int main() {
    int a, b;
    cout << "Enter two integers:";
    cin >> a >> b;
    cout << "sum: "<< sum(a, b)<<endl;

    return 0;
}
