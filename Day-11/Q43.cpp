#include<iostream>
using namespace std;
//WAP to write function to check prime
void checkPrime(int n){
    int factor=0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            factor++;
        }
    }
    if(factor==0){
        cout<<"Entered number is prime. ";
    }
    else{
        cout<<"entered number is not a prime. ";
    }
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    checkPrime(num);
    return 0;
    
}