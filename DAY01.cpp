#include<iostream>
using namespace std;

int main(){
    int a = 12;
    int b = 25;

    // int ans = a+b;
    // cout << ans;
    // cout << "Value of a before :" << a << endl;
    // cout << ++a << endl;
    // cout << "Value of a after :" << a << endl;

    // bool ans = a != b;

    // cout << ans;

    // a & b => 
    // 0   0   0
    // 0   1   0
    // 1   0   0
    // 1   1   1

    // a | b => 
    // 0   0   0
    // 0   1   1
    // 1   0   1
    // 1   1   1

    cout << (a & b);

}

//Assignment -> make a basic calculator using + - * / %
//optional  = take user input of two numbers, take input for operation to perform, print the ans
