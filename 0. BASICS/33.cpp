//prime number should be divisible by 1 and itself
/*
Author : Sudhesh Holla
Problem name : nCr
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
    int n,r;
    cin>>n>>r;
    int ncr = fact(n)/(fact(r)*fact(n-r));
    cout<<ncr;
    return 0;
}





