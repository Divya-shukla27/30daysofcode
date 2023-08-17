/*
Task
Given a base- integer, , convert it to binary (base-). Then find and print the base- integer denoting the maximum number of consecutive 's in 's binary representation. When working with different bases, it is common to show the base as a subscript.

Example

The binary representation of  is . In base , there are  and  consecutive ones in two groups. Print the maximum, .

Input Format

A single integer, .

Constraints

Output Format

Print a single base- integer that denotes the maximum number of consecutive 's in the binary representation of .

Sample Input 1

5
Sample Output 1

1
Sample Input 2

13
Sample Output 2

2
Explanation

Sample Case 1:
The binary representation of  is , so the maximum number of consecutive 's is .

Sample Case 2:
The binary representation of  is , so the maximum number of consecutive 's is .
*/
#include <bits/stdc++.h>
#include<vector>
#include<climits>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int noof1(vector<int> binary){
    vector <int> c=binary;
    int i=0;
    int m=INT_MIN;
    int t=0;
    while(i<c.size()){
        if(c[i]==1){
            t++;
        }
        else{
            t=0;
        }
        m=max(m,t);
        i++;
    }
    return m;
}
int dec2bin(int n){
    vector<int> binary;
    while(n>0){
        int rem=n%2;
        n=n/2;
        binary.insert(binary.begin(),rem);
    }
    if(binary.empty()){
        binary.insert(binary.begin(),0);
    }
    return noof1(binary);
}


int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    int c=dec2bin(n);
    cout<<c;
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}