#include<iostream>
using namespace std;
int main(){
    //WAP to rotate array right
    int n;
    cout<<"Enter number of element in the array: ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element"<<"array["<<i<<"]"<<endl;
        cin>>array[i];
    }
    int last=array[n-1];
    for(int i=n-1;i>0;i--){
        array[i]=array[i-1];
    }
    array[0]=last;
    cout<<"After rotation array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;

}