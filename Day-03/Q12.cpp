#include<iostream>
using namespace std;
int main(){
    //Wap to find the LCM of two numbers
    int n1,n2;
    cout<<"Enter the numbers: ";
    cin>>n1>>n2;
    int lcm;
    for(int i=1;i<=n1 || i<=n2;i++){
        if(n1%i==0 || n2%i==0){
            lcm=i;
            
        }
    }
    cout<<"The LCM of the given two numbers ="<<lcm<<endl;
    return 0;


}