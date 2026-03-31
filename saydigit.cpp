#include<iostream>
using namespace std;

int saydigit(int n){

    string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    if(n==0){
        return 0;
    }

    saydigit(n/10);

    int digit = n%10;
    cout<<arr[digit]<<"\t";

}    

int main(){

    int n;
    cin>>n;
    saydigit(n);
}