#include<iostream>
using namespace std;
int main(){
    //WAP to to find x^n without using pow
    int x;
    cout<<"Enter the value of x: ";
    cin>>x;
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    long long result = 1;
    for(int i=1;i<=n;i++){
        result*=x;
    }
    cout<<"The value of x to the power n= "<<result;
    return 0;
}