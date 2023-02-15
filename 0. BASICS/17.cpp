/*
Author : Sudhesh Holla
Problem name : CALCULATOR APP USING SWITCH
*/

#include <iostream>
using namespace std;

int main(){
    int n1,n2;
    char op;
    cout<<"Enter any 2 Numbers"<<endl;
    cin>>n1>>n2;
    cout<<"Enter an Operand"<<endl;
    cin>>op;

    switch(op){
        case '+' :
            cout<< n1+n2;
            break;
        case '-' :
            cout<< n1-n2;
            break;
        case '*' :
            cout<< n1*n2;
            break;
        case '/' :
            cout<< n1/n2;
            break;
        default :
            cout<<"Invalid Operand";
            cout<<"Invalid Operand";
    }

}
