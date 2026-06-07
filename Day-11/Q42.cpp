#include<iostream>
using namespace std;
//WAP to write function to find maximum
void max(int num1,int num2){
    if(num1>num2){
        cout<<"num1 is maximum";
    }
    else{
        cout<<"num2 is maximum";

    }
    


}
int main(){
    int n1,n2;
    cout<<"Enter the two number: ";
    cin>>n1>>n2;
    cout<<"Maximum value is ";
    max(n1,n2);
    return 0;

}