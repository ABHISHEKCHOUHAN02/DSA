#include<iostream>
using namespace std;

bool linear(int arr[],int n,int key){

    if(n==0){
        return 0;
    }
    if(n==1){
        if(arr[0]==key){
            return true;
        }
    }
    if(arr[0]==key ){
        return true;
    }
    int ans=linear(arr+1,n-1,key);
    return ans;
}
int main(){
    int arr[10]={2,56,89,95,98};

    int n=5;
    int ans=linear(arr,5,90);
    if(ans){

        cout<<"founded";
    }
    else{
        cout<<"not found";
    }
}