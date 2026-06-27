#include<iostream>
using namespace std;
//WAP to binary search
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
    int key;
    cout<<"Enter the key ele: ";
    cin>>key;
    int first=0;
    int last=n-1;
    int mid;
    bool found = false;
    while(first<=last){
        mid=(first+last)/2;
        if(arr[mid]==key){
            cout<<"Ele found at index "<<mid;
            found=true;
            break;
        }
        else if(arr[mid]<key){
            first=mid+1;
        }
        else{
            last=mid-1;
        }
    }
    if(!found){
        cout<<"Element is not found: ";
    }




    
    return 0;
}