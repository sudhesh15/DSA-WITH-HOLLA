
/*
Author : Sudhesh Holla
Problem name : ARMSTRONG NUMBER
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int givenNumber = n;
    int sum = 0;
    while(n>0){
        int rem = n%10;
        sum = sum + (rem * rem * rem);
        n = n/10;
    }
    if(sum == givenNumber)
        cout<< "ARMSTRONG NUMBER";
    else{
        cout<<"NOT AN ARMSTRONG NUMBER";
    }
}

