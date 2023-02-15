/*
Author : Sudhesh Holla
Problem name : ODD OR EVEN
*/

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a Number"<<endl;
    cin>>num;
    if(num%2 == 0){
        cout<<"Given Number " << num << " is EVEN";
    }else{
        cout<<"Given Number " << num << " is ODD";
    }
}

