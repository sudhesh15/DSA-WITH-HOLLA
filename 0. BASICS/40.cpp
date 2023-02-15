/*
Author : Sudhesh Holla
Problem name : SELECTION SORT
*/

#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

//  [1,9,8,5,2]
//  [0,1,2,3,4]

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

