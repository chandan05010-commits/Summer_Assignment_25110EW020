#include<iostream>
using namespace std;
//WAP to rotate array left
int main(){
    int n;
    cout<<"Enter the number of element in array: ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element"<<"array["<<i<<"]"<<endl;
        cin>>array[i];
    }
    int first=array[0];
    for(int i=0;i<n-1;i++){
        array[i]=array[i+1];

    }
    array[n-1]=first;
    cout<<"Array after rotation: ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";

    }
    return 0;

}