/*
Author : Sudhesh Holla
Problem name : DEMO OF CONTINUE KEYWORD
*/
//continue is used to skip
#include <iostream>
using namespace std;

int main(){
    for(int date;date<=30;date++){
        if(date%2==0){
            continue;
        }
        cout<<"You can go on "<<date<<endl;
    }
}

