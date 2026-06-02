#include<iostream>
using namespace std;
int main(){
    //WAP to find product of the digits;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int product=1;
    int r;
    while(n>0){
        r=n%10;
        product=product*r;
        n=n/10;


    }
    cout<<"The product of the digits of the given number= "<<product<<endl;
    return 0;


}