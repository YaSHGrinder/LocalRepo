#include<iostream>
using namespace std;

// console calculator program

int main (){
char op;
double num1;
double num2;
double result;

cout<<"*******************CALCULATOR*******************\n";

    cout<< "Enter either (+,-,/,*)\n";
    cin>>op;

    cout<<"Enter number 1: ";
    cin>>num1;

    cout<<"Enter number 2: ";
    cin>>num2;

    switch(op){
        case '+':
        result = num1 + num2;
        cout<<"result: "<< result <<'\n';
        break;
        case '-':
        result = num1 - num2;
        cout<<"result: "<< result <<'\n';
        break;
        case '/':
        result = num1 / num2;
        cout<<"result: "<< result <<'\n';
        break;
        case '*':
        result = num1 * num2;
        cout<<"result: "<< result <<'\n';
        break;
        default: cout<<"Please Enter a valid operator (+,-,/,*)";
    }
    cout<<"********************************************";


    return 0;
}

