#include<iostream>
using namespace std;
int main(){
    int n=2;
    int arr[n][n+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n+1;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The 2D array is "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n+1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Now for 3x3 matrix "<<endl;
    int arr2[3][3];
    int sum=0;
    int max=INT32_MIN;
    int min=INT32_MAX;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr2[i][j]<<" ";
            sum+=arr2[i][j];
            if(arr2[i][j]>max){
                max=arr2[i][j];
            }
            if(arr2[i][j]<min){
                min=arr2[i][j];
            }
        }
        cout<<endl;
    }
    cout<<"Sum is "<<sum<<endl;
    cout<<"Max is "<<max<<endl;
    cout<<"Min is "<<min<<endl;
    cout<<"Transpose of matrix is "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr2[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}