//WAP to recursive reverse number
#include<iostream>
using namespace std;
int reverseOfNumber(int n,int rev=0){
    if(n==0){
        return rev;

    }
    return reverseOfNumber(n/10,rev*10+n%10);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Reverse of the number: "<<reverseOfNumber(n);
    return 0;

}