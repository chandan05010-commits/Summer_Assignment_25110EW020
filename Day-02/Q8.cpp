#include<iostream>
using namespace std;
int main(){
    // WAP to check wheather a number is palindrome
    int n;
    cout<<"Enter a numbre: ";
    cin>>n;
    int n1=n;
    int rev=0;
    int r;
    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;

        
    }
    n=n1;
    if(rev==n){
        cout<<"The given number is palindrome ."<<n<<endl;

    }

    else{
        cout<<"The given number is not a palindrome."<<n<<endl;

    }
    return 0;
}