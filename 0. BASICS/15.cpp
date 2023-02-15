//prime number should be divisible by 1 and itself
/*
Author : Sudhesh Holla
Problem name : CHECK IF GIVEN NUMBER IS PRIME OR NOT
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number"<<endl;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"NOT A PRIME NUMBER";
            break;
        }
    }
    cout<<"PRIME NUMBER";
}

