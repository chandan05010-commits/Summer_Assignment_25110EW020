#include<iostream>
using namespace std;
//WAp to write function to find the sum of two number
int sum(int num1,int num2){
    return num1+num2;

}
int main(){
    int a,b;
    cout<<"Enter the two numbers: ";
    cin>>a>>b;
    cout<<"The sum of the two numbers= "<<sum(a,b);
    return 0;
}