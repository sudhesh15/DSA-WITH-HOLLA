//prime number should be divisible by 1 and itself
/*
Author : Sudhesh Holla
Problem name : PASCAL TRIANGLE
*/

#include <iostream>
#include <math.h>
using namespace std;

int fact(int n){
    int sum=1;
    for(int i=1;i<=n;i++){
        sum = sum*i;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j));
        }
        cout<<endl;
    }
    return 0;
}





