/*
Author : Sudhesh Holla
Problem name : Linear Search
*/

#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i=0;i<=n;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;

    //[1,2,5,3,7]
    // 0,1,2,3,4


    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<linearSearch(arr,n,key)<<endl;

}
