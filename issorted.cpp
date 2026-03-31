#include<iostream>
using namespace std;

bool issort(int arr[],int n){

    if(n==0|| n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false; 
    }
    else{
        bool ans=issort(arr+1, n-1);
        return ans;
    }
   
}

void inputarray(int &arr[],int n){

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
}
int main(){
    int arr[10];


    int n=5;
    inputarray(arr, n);
    int ans=issort(arr,n);

    if(ans){
        cout<<"Array is sorted!";
    }
    else{
        cout<<"Array is not sorted!";
    }

}