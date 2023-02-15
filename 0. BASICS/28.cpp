/*
Author : Sudhesh Holla
Problem name : FACTORIAL OF A NUMBER
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int fact =1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    cout<<fact;
}

