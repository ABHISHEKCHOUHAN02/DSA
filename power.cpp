#include<iostream>
using namespace std;

int power(int a,int b){

    if(b ==0){
        return 1;
    }
    if(b==1){
        return a;
    }

    int ans=power(a, b/2);
    

    if(b%2 == 0){
        return ans * ans;
    }
    else{
        return a * ans * ans;
    }
    
}
int main(){
    
    cout<<"\n powe of 2 and 3 is :"<<power(2,3);
    cout<<"changes occur";

    cout<<"changes 2nd time!"
}