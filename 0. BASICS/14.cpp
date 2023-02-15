/*
Author : Sudhesh Holla
Problem name : DEMO OF CONTINUE KEYWORD | PRINTING ODD NUMBERS
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            continue;
        }
        cout<<i<<endl;
    }
}
