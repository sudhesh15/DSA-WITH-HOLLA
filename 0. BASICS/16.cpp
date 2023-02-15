/*
Author : Sudhesh Holla
Problem name : DEMO OF SWITCH STATEMENT
*/
#include <iostream>
using namespace std;

int main(){
    char button;
    cout<<"Enter a Button Value"<<endl;
    cin>>button;

    switch(button){
    case 'A' :
        cout<<"Hello";
        break;
    case 'B' :
        cout<<"Hola";
        break;
    case 'C' :
        cout<<"Namaste";
        break;
    default :
        cout<<"Sorry, I'm still learning";
    }

}

