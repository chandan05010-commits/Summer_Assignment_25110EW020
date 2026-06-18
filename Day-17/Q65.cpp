#include<iostream>
using namespace std;
//WAP to merge arrays
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element"<<"arr["<<i<<"]"<<endl;
        cin>>arr[i];

    }
    int m;
    cout<<"Enter the umber of elements in second array: ";
    cin>>m;
    int arr1[m];
    for(int i=0;i<m;i++){
        cout<<"Enter element"<<"arr["<<i<<"]"<<endl;
        cin>>arr1[i];

    }
    int arr2[n+m];
    for(int i=0;i<n;i++){
        arr2[i]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr2[n+i]=arr1[i];
    }
    cout<<"Merged array= "<<endl;
    for(int i=0;i<n+m;i++){
        cout<<arr2[i]<<" ";
    }
    return 0;

    



}