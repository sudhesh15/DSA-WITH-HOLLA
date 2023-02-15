/*
Author : Sudhesh Holla
Problem name : COMPARING 3 NUMBERS
*/

#include <iostream>
using namespace std;

int main(){
    int A,B,C;
    cout<<"Enter any 3 Numbers"<<endl;
    cin>>A>>B>>C;
    if(A>B){
        if(A>C){
            cout<<"A is Greater";
        }else{
            cout<<"C is Greater";
        }
    } else if(B>C){
        cout<<"B is Greater";
    }else{
        cout<<"C is Greater";
    }
}

