/*
Author : Sudhesh Holla
Problem name : SUM TILL GIVEN NUMBER
*/

#include <iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter a Number"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        sum = sum + i;
    }
    cout<<"Sum is "<<sum;
}
