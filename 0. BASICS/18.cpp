/*
Author : Sudhesh Holla
Problem name :  GIVEN CHARACTER IS VOWEL OR CONSONANT
*/

#include <iostream>
using namespace std;

int main(){
    char c;
    cout<<"Enter a character"<<endl;
    cin>>c;

    switch(c){
        case 'a' :
            cout<<"VOWEL";
            break;
        case 'e' :
            cout<<"VOWEL";
            break;
        case 'i' :
            cout<<"VOWEL";
            break;
        case 'o' :
            cout<<"VOWEL";
            break;
        case 'u' :
            cout<<"VOWEL";
            break;
        default:
            cout<<"CONSONANT";
    }
}

