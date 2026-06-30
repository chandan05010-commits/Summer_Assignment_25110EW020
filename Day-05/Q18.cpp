#include<iostream>
using namespace std;
int main(){
    //WAP to check strong weather it is strong number or not
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int rem;
    int sum = 0;
    int n1=n;
    while(n>0){
        rem = n%10;
        n=n/10;
        int fact=1;
        for(int i=1;i<=rem;i++){
    
            fact*=i;

        }
        sum+=fact;
    }
    if(sum == n1){
        cout<<"Entered number is a strong number."<<sum;
    }
    else{
        cout<<"Entered number is not a strong number."<<sum;
    }
    return 0;
}