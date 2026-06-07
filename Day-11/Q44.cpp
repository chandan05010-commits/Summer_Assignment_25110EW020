#include<iostream>
using namespace std;
//WAP to write a function to find factorial
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;

}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The factorial of the given number= "<<fact(n);
    return 0;
}
