#include<iostream>
using namespace std;

int arrsum(int arr[],int n){

    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    int ans=arrsum(arr+1,n-1);
    int sum=arr[0]+ans;
    

    return sum;
}
int main(){
    int arr[10]={2,6,9,5,98};

    int n=5;

    int sum=arrsum(arr,n);
    cout<<"Sum is="<<sum;
}