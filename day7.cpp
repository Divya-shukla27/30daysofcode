/*
Task
Given a string, , of length  that is indexed from  to , print its even-indexed and odd-indexed characters as  space-separated strings on a single line (see the Sample below for more detail).

Note:  is considered to be an even index.

Example


Print abc def

Input Format

The first line contains an integer,  (the number of test cases).
Each line  of the  subsequent lines contain a string, .

Constraints

Output Format

For each String  (where ), print 's even-indexed characters, followed by a space, followed by 's odd-indexed characters.

Sample Input

2
Hacker
Rank
Sample Output

Hce akr
Rn ak
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin>>T;
    cin.ignore();
    while (T--) {
        string s;
        getline(cin,s);
        int l;
        l=s.length();
        string odd;
        string even;
        for(int i=0;i<l;i++){
            if(i%2==0){
                even+=s[i];
            }
            else{
                odd+=s[i];
            }
        }
        cout<<even<<" "<<odd<<endl;
    }
    return 0;
}