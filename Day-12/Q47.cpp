#include<iostream>
using namespace std;
//WAP to write a function to write fibonacci
void fibonacci(int n){
    int first_term=0;
    int second_term=1;
    for(int i=0;i<n;i++){
        if(i==0){
            cout<<first_term<<" ";
        }
        else if(i==1){
            cout<<second_term<<" ";
        }
        else{
            int third_term=first_term+second_term;
            cout<<third_term<<" ";
            first_term=second_term;
            second_term=third_term;
        }
    }



}
int main(){
    int n;
    cout<<"Enter number of term: ";
    cin>>n;
    fibonacci(n);
    return 0;

}