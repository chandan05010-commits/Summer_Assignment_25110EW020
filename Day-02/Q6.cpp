#include<iostream>
using namespace std;
int main(){
    // WAP to reverse a number
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int rev=0;
    int r;
    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;

    }
    cout<<"The reverse of the given number is ="<<rev<<endl;
    return 0;
}