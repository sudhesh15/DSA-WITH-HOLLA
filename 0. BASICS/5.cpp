/*
Author : Sudhesh Holla
Problem name : MAX AND MIN NUMBER
*/

#include <iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter any 2 numbers"<<endl;
    cin>>n1>>n2;
    int max,min;
    if(n1>n2){
        max=n1;
        min=n2;
        cout<<"MAX = "<<max<<endl;
        cout<<"MIN = "<<min<<endl;
    } else{
        min=n1;
        max=n2;
        cout<<"MAX = "<<max<<endl;
        cout<<"MIN = "<<min<<endl;
    }
}
