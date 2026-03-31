#include<iostream>
using namespace std;

int largest(int *arr,int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
   
    if(arr[n-1]>arr[n-2]){
        swap(arr[n-1],arr[n-2]);
    }
    largest(arr,n-1);
    


}
void bubblesort(int *arr,int n){

    if(n==0 || n==1){
        return;
    }
    /*for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }*/


    bubblesort(arr,n-1);

}
int main(){
    int arr[8]={62,3,6,4,1,7,8,5};
    bubblesort(arr,8);
    cout<<"sorted array="<<endl;

    for(int i=0;i<8;i++){
        cout<<arr[i]<<"\t";
    }
    
    
}