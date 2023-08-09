/*Task
Given an integer, , perform the following conditional actions:

If  is odd, print Weird
If  is even and in the inclusive range of  to , print Not Weird
If  is even and in the inclusive range of  to , print Weird
If  is even and greater than , print Not Weird
Complete the stub code provided in your editor to print whether or not  is weird.

Input Format

A single line containing a positive integer, .

Constraints

Output Format

Print Weird if the number is weird; otherwise, print Not Weird.

Sample Input 0

3
Sample Output 0

Weird
Sample Input 1

24
Sample Output 1

Not Weird*/
#include <bits/stdc++.h>

using namespace std;



void solve(int N){
    int n=N;
    if((n%2)==0){
        if((n>=2)&&(n<=4)){
            cout<<"Not Weird"<<endl;
        }
        else if((n>=6)&&(n<=20)){
            cout<<"Weird"<<endl;
        }
        else if(n>20){
            cout<<"Not Weird"<<endl;
        }
    }
    else{
        cout<<"Weird"<<endl;
    }
}

int main()
{
    

    int N ;
    cin>>N;
    solve(N);

    return 0;
}
