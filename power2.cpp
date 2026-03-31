#include<iostream>
using namespace std;
int power(int n){

    //base case
    if(n==0){
        return 1;
    }
    int smallerproblem=power(n-1);
    int biggerprooblem = 2* smallerproblem;

    return biggerprooblem;

}
int main(){

    int n;
    cin>>n;

    int ans=power(n);

    cout<<"Answere="<<ans;
}