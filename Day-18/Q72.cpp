#include<iostream>
using namespace std;
//WAP to sort arr in decending order
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
    cout<<endl;
    for(int i=0;i<n-1;i++){
        int max_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[max_index]){
                max_index=j;
            }

        }
        if(max_index!=i){
            int temp=arr[i];
            arr[i]=arr[max_index];
            arr[max_index]=temp;
        }
    
    }
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}