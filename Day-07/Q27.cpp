//WAP to recursive sum of digit
#include<iostream>
using namespace std;
int sumOfDigit(int n){
    if(n==0){
        return 0;

    }
    return (n % 10)+sumOfDigit(n / 10);

}
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<"The sum of the digits of the number= "<<sumOfDigit(n)<<endl;
    return 0;
}