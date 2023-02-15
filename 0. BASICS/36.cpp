/*
Author : Sudhesh Holla
Problem name : Basics of Array
*/

#include<iostream>
using namespace std;

int main(){
    int arr1[4] = {1,2,3,4};
    int n;
    cin>>n;
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
}





