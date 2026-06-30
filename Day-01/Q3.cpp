#include<iostream>
using namespace std;
int main(){
    //find factorial of the given number
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;

    }
    cout<<"Factorial of the given number: "<<fact;
    return 0;
}