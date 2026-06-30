#include<iostream>
using namespace std;
int main(){
    // Write a program to find sum of digits of a number
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum=0;
    int r;
    while(n>0){
        r=n%10;
        sum=sum+r;
        n=n/10;

    }
    cout<<"The sum of the given number= "<<sum<<endl;
    return 0;

}