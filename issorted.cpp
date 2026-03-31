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
int main(){
    int arr[10]={2,56,89,95,98};

    int n=5;

    int ans=issort(arr,n);

    if(ans){
        cout<<"Array is sorted!";
    }
    else{
        cout<<"Array is not sorted!";
    }

}