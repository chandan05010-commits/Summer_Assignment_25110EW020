#include<iostream>
using namespace std;
int main(){
    // WAP to check weather a number is prime or not
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int factor=0;
    
    if(n==1 || n==0){
        cout<<"the given number is not a prime: ";
        return 0;
        
    }
    
    

    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            factor++;
        }


    }
    if(factor == 0){
        cout<<"Entered number is a prime number: "<<n<<endl;
    }
    else{
        cout<<"Entered number is not a prime number: "<<n<<endl;
    }
    return 0;

}