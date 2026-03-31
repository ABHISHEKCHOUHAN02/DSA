#include<iostream>
#include<vector>
using namespace std;
void printv(vector<int> v){
    cout<<"{";
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<",";
    }
    cout<<"}"<<endl;
}
void printsub(int i,int n,int s,vector<int> v,int m,int arr[]){

    if(i >= n){
        if( s > m)
            m = s;
        printv(v);
    }
    v.push_back(arr[i]);
    s += arr[i];    // take or pick condition
    
    printsub(i+1,n,s,v,m,arr);

    s -= arr[i];
    v.pop_back();

    printsub(i+1,n,s,v,m,arr);  // do not take or do not pick the condition
}
int main(){

    int arr[6] ={3,1,2,4,6,5};
    vector<int> v;
    printsub(0,6,0,v,INT16_MIN,arr); 
}