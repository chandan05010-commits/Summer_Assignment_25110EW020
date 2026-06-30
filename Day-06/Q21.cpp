#include<iostream>
using namespace std;
int main(){
    //WAP to converrt decimal to binary
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;
    int binary[32];
    int i=0;
    while(n>0){
        binary[i]=n%2;
        n=n/2;
        i++;
    }
    cout<<"The binary number: ";
    for(int j=i-1;j>=0;j--){
        cout<<binary[j];
    }
    return 0;

}