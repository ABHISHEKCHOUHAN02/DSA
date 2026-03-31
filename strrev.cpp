#include<iostream>
using namespace std;

void rev(string &str,int i){

    if(i>str.length()-1-i){
        return ;

    }
    swap(str[i],str[str.length()-1-i]);
    i++;
    rev(str,i);

    
}

int main(){

    string str = "Abhishek";
    
    rev(str,0);

    cout<<"reverse string = "<<str;
}