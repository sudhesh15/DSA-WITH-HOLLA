/*
Author : Sudhesh Holla
Problem name : SUM OF GIVEN NUMBER UNTIL IT'S POSITIVE USING WHILE LOOP
*/
#include <iostream>
using namespace std;

int main(){
    cout<<"Enter a Number"<<endl;
    int n;
    int sum=0;
    cin>>n;
    while(n>=0){
        sum += n;
        cout<<"Enter a Number"<<endl;
        cin>>n;
    }
    cout<<"Sum is "<<sum;

}

