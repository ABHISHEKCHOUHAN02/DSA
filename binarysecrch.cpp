#include<iostream>
using namespace std;

int binarysearch(int arr[],int s,int e,int key){

    
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;

    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]>key){

        int ans=binarysearch(arr,s,mid-1,key);
        return ans;
    }
    else{
        int ans=binarysearch(arr,mid+1,e,key);
        return ans;

    }

}
int main(){
    int arr[10]={2,56,89,95,98};

    int n=5;
    int ans=binarysearch(arr,0,5,98);
    if(ans){

        cout<<"founded";
    }
    else{
        cout<<"not found";
    }
}

