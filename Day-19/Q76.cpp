#include<iostream>
using namespace std;
//WAP to transpose matrix
int main(){
    int r,c;
    cout<<"Enter the number of rows and coloumn in matrix: ";
    cin>>r>>c;
    int arr[r][c];
    cout<<"Enter the ele in arr: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j){
                sum+=arr[i][j];
            }

        }
        
    }
    cout<<"Sum of the digonal elements of the arr: "<<sum<<endl;
    return 0;

}