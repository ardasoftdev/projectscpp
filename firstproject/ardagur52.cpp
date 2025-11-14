#include <iostream>
using namespace std;
bool isArda(int x){
   if(x>0)
    return true;
   else
    return false;
}

int main(){

int x;
cout<<"enter a number";
cin>>x;

if (isArda(x))
    cout<<"positive";
else if(x<0)
    cout<<"negative";
 else
    cout<<"notr";


return 0;
}
