/*
Author : Sudhesh Holla
Problem name : NAME OF THE TRIANGLE
*/

#include <iostream>
using namespace std;

int main(){
    int side1,side2,side3;
    cout<<"Enter 3 sides of Triangle"<<endl;
    cin>>side1>>side2>>side3;
    if(side1==side2 && side1==side3){
        cout<<"It's an EQUILATERAL TRIANGLE";
    }else if(side1==side2 || side1==side3 || side2==side3){
        cout<<"It's an  ISOSCELES TRIANGLE";
    }else{
        cout<<"It's a SCALEN TRIANGLE";
    }
}
