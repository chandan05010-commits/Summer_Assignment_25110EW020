#include<iostream>
#include<cmath>
using namespace std;
int main(){
    //Wap to check armstrong number
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int n1=n;
    int totalDigits=0;
    int sum = 0;
    int rem;
    while(n>0){
        n=n/10;
        totalDigits++;
        


    }
    n=n1;
    while(n>0){
        rem = n%10;
        sum+=pow(rem,totalDigits);
        n=n/10;

    }
    if(sum == n1){
        cout<<"The given number is armstrong";
    }
    else{
        cout<<"the given number is not armstrong.";
    }
    return 0;

}