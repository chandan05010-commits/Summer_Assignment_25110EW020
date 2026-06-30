#include<iostream>
using namespace std;
int main(){
    //WAP to find union of arrays
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element"<<"arr["<<i<<"]"<<endl;
        cin>>arr[i];

    }
    int m;
    cout<<"Enter the number of elements in second array: ";
    cin>>m;
    int arr1[m];
    for(int i=0;i<m;i++){
        cout<<"Enter element"<<"arr["<<i<<"]"<<endl;
        cin>>arr1[i];

    }
    int arr2[n+m];
    int k=0;
    for(int i=0;i<n;i++){
        bool found =false;

        for(int j=0;j<k;j++){
            if(arr[i]==arr2[j]){
                found=true;
            break;
            }
            
        }
        if(!found){
            arr2[k++]=arr[i];
        }
    }
    for(int i=0;i<m;i++){
        bool found=false;
        for(int j=0;j<k;j++){
            if(arr1[i]==arr2[j]){
                found =true;
                break;
            }
            
        }
        if(!found){
            arr2[k++]=arr1[i];
        }
    }
    cout<<"Updated array: "<<endl;
    for(int i=0;i<k;i++){
        cout<<arr2[i]<<" ";

    }
    return 0;

    
}