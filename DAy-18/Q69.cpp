#include<iostream>
using namespace std;
//WAP to bubble sort
int main(){
    int n;
    cout<<"Enter the number of elements of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Input array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<" ";
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            int temp;
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }

        }
    }
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
