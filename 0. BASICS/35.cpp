
//prime number should be divisible by 1 and itself
/*
Author : Sudhesh Holla
Problem name : a 2 + b 2 = c 2 pythagorean triplet
*/

#include<iostream>
using namespace std;

void pyth(int a, int b, int c){
    int a2=a*a,b2=b*b,c2=c*c;
    if(a2==b2+c2||b2==a2+c2||c2==a2+b2){
        cout<<"Pythagorean triplet";
    }
    else{
        cout<<"Not a triplet";
    }
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    pyth(a,b,c);
}




