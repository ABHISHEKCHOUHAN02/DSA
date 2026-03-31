#include<iostream>
using namespace std;

/*void print( int n){

    if(n == 0){
        return;
    }
    cout<<"Abhishek"<<endl;
    print(n-1);
}*/

int linear(int n){

    if(n ==0){
        return 0;
    }
    
    linear(n-1);
    cout<<n<<endl;
}

/*void revarr(int l,int r,int arr[]){

    if(l >= r) return;
    swap(arr[l],arr[r]);
    revarr(l+1,r-1,arr);
    
    
}*/
void arrrev(int i,int n, int arr[]){

    
    if(i >= (n/2)){
        return;
    }
    swap(arr[i],arr[n-1-i]);
    arrrev(i+1,n,arr);
}
bool check(string str,int i){

    
    if(i >= (str.length()/2)) return true;
    if(str[i] != str[str.length()-1-i]) return false;
    check(str,i+1);
}
int fibon(int n){
    
    if(n == 1){
        return 0;
    }
    if(n == 2) return 1;
    return fibon(n-1)+fibon(n-2);
    
}
int main(){
    //print(5);

    //linear(5);

    //int arr[6] = {45,23,5,12,78,33};
    //revarr(0,5,arr);
    //arrrev(0,6,arr);
    //for(int i =0;i<6;i++){
    //    cout<<arr[i]<<" ";
   // }
   string str = "ragar";
   if(check(str,0)) cout<<"yes palindrome";
   else cout<<"Not palindrome";
   
   cout<<fibon(4)<<" ";

}