#include<iostream>
using namespace std;
int main(){
    //WAP to find intersecction of arrays
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
    cout<<"Intersection of arrays: "<<endl;
    for(int i=0;i<n;i++){
        bool found =false;
        for(int j=0;j<m;j++){
            if(arr[i]==arr1[j]){
                found=true;
                break;

            }
        }
        bool printed = false;
        for(int k=0;k<i;k++){
            if(arr[i]==arr[k]){
                printed = true;
                break;
            }
        }
        if(found && !printed){
            cout<<arr[i]<<" ";
        }
    }
   
    return 0;
    


}
    