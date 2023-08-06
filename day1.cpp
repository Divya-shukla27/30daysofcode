/*

Task
To complete this challenge, you must save a line of input from stdin to a variable, print Hello, World. on a single line, and finally print the value of your variable on a second line.


Input Format

A single line of text denoting  input string (the variable whose contents must be printed).

Output Format

Print Hello, World. on the first line, and the contents of input string  on the second line.

Sample Input

Welcome to 30 Days of Code!
Sample Output

Hello, World. 
Welcome to 30 Days of Code!
Explanation

On the first line, we print the string literal Hello, World.. On the second line, we print the contents of the  variable which, for this sample case, happens to be Welcome to 30 Days of Code!. If you do not print the variable's contents to stdout, you will not pass the hidden test case.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string h; 
    getline(cin,h);
    cout<<"Hello, World."<<endl;
    cout<<h<<endl;
    return 0;
}