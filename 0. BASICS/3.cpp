/*
Author : Sudhesh Holla
Problem name : COMPARING 2 NUMBERS
*/

#include <iostream>
using namespace std;

int main(){
    int X,Y;
    cout<<"Enter the Values of X & Y"<<endl;
    cin>>X>>Y;
    if(X>Y){
        cout<<"X is Greater than Y";
    }else if(X<Y){
        cout<<"X is Less than Y";
    }else if(X==Y){
        cout<<"X is Equals to Y";
    }
}

