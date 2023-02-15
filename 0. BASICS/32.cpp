//prime number should be divisible by 1 and itself
/*
Author : Sudhesh Holla
Problem name : FACTORIAL OF A NUMBER
*/

#include <iostream>
#include <math.h>
using namespace std;

void fact(int n){
    int sum=1;
    for(int i=1;i<=n;i++){
        sum = sum*i;
    }
    cout<<sum;
    return;
}

int main(){
    int n;
    cin>>n;
    fact(n);

    return 0;
}




