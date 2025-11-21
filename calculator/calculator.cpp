#include <iostream>
using namespace std;
int main(){
int num1,num2;
char op;
cout<<"enter number 1: ";
cin>>num1;
cout<<"enter operator: ";
cin>>op;
cout<<"enter number 2:";
cin>>num2;
switch(op){
case '+':
    cout<<num1 + num2;
    break;
case'-':
    cout<<num1 - num2;
    break;
case'/':
    cout<<(double)num1 / num2;
    break;
case '*':
    cout<<num1 * num2;
    break;
case'%':

    cout<<num1 % num2;
    break;
    default:
        cout<<"you entered invalid character.Try again";
}
return 0;
}

