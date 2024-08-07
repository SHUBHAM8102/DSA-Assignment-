#include<iostream>
using namespace std;

int main(){

    //if/else
    int num;
    cout << "Enter a number : " ;
    cin >> num;

    if(num > 0){
        cout << "Positive";
    }
    else if(num < 0){
        cout << "Negative";
    }
    else{
        cout << "Number is 0";
    }

    cout << endl;
    cout << "Hello";

}

//Assignment 1 -> check vowel or consonant -> take char as user input
//Assignment 2 -> find the largest number among three numbers








#include<iostream>
using namespace std;

int main(){
    //loops

    // int num;
    // int sum = 0;

    // cout << "how many numbers to print " << endl;
    // cin >> num;
    // for(int i = 1; i <= num; i++){
    //     sum += i;
    //     // cout << i << " ";
    // }

    // cout << "Sum is " << sum;

    // int arr[5] = {1,2,3,4,5};

    // for(int i : arr){
    //     cout << i << " ";
    // }

    // int i = 0;
    // while(i <= 10){
    //     cout << i << " ";
    //     i++;
    // }

    // do{
    //     cout << i << " ";
    //     i++;
    // }
    // while(i <= 10);




    //------------------

    // for(int i = 0; i <= 10; i++){
    //     if(i == 5) break;

    //     cout << i << " ";

    // }

    // for(int i = 0; i <= 10; i++){
    //     if(i == 5) continue;

    //     cout << i << " ";

    // }
}





#include<iostream>
using namespace std;

int main(){

    int num1, num2;
    char oper;

    cout << "Enter two num :";
//.....


    switch(oper){
        case '+':
            num1 + num2;
            break;

        case '-':
            num1 - num2;
            break;
    }


}








#include<iostream>
using namespace std;

int main(){
    //ternanry

    int num = 10;

    string ans = (num >= 0) ? "Positive" : "Negative";

    cout << ans;
}








#include<iostream>
using namespace std;

// string myFunc(string name){
//     // cout << "Hello";
//     return "Hello";

//     // cout << "My name is " << name;
// }

void myFunc(string name, int age){
    cout << "Hello my name is " << name << " and my age is " << age;
}

int main(){
    myFunc("Hello", 10);
}

//Assignment 3 -> Create a function that will return the sum of 3 numbers
//Assignment 4 -> create a function which will retrun sqrt/square of a number
