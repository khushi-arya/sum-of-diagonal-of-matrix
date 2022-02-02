#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cout<<"enter the value of n:  "<<endl;
    cin>>n;
    cout<<"enter the value of m:  "<<endl;
    cin>>m;
    cout<<"enter the elements: "<<endl;
    int i,j;
    int arr[n][m];
    for( i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"matrix: "<<endl;
    for( i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<"   "<<arr[i][j];
        }
        cout<<"\n";
    }
    int sum=0;
    for( i=0;i<n;i++){
        for(j=0;j<m;j++){
        if(i==j){
            sum=sum+arr[i][j];
        }
        }
    } 
    cout<<"sum of diagonals:  "<<sum;
   return 0;
}