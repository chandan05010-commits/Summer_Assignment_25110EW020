#include<iostream>
using namespace std;
//WAP to write a function to check palindrome
void palindrome(int n){
    int n1=n;
    int rem;
    int num=0;
    while(n>0){
        rem=n%10;
        num=num*10+rem;
        n=n/10;

        


    }
    if(num==n1){
        cout<<"Entered number is palindrome. ";

    }
    else{
        cout<<"entered number is not palindrome. ";

    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    palindrome(n);
    return 0;
}
