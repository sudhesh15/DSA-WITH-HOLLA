/*
Author : Sudhesh Holla
Problem name : CHECK VOWEL OR NOT
*/

#include <iostream>
using namespace std;

int main(){
    char c;
    cout<<"Enter an Alphabet"<<endl;
    int isLowercaseVowel, isUppercaseVowel;
    cin>>c;
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (isLowercaseVowel || isUppercaseVowel){
        cout << c << " is a vowel.";
    }else{
        cout<<"It's an Consonant"<<endl;
    }
}


