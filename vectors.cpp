#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec;            // Declaration of vector
    vec.push_back(1);          // Adding elements to the vector
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);

    vec.pop_back();            // Removing the last element from the vector 
    int n=vec.size();
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";     // traversing the vector
    }
    cout<<endl;

    vector<int>vec1(10);    // Vector of size 10 initialized with all 0
    int n1=vec1.size();
    for(int i=0;i<n1;i++){
        cout<<vec1[i]<<" ";
    }
    // int maxi=INT_MIN;          // Finding maximum element in the vector
    // // for(int i=0;i<n;i++){
    // //     if(vec[i]>maxi){
    // //         maxi=vec[i];
    // //     }
    // // }
    // // cout<<maxi<<endl;
    int maxi=*max_element(vec.begin(),vec.end()); // Using STL function to find maximum element
    cout<<maxi<<endl;
    int mini=*min_element(vec.begin(),vec.end()); // Using STL function to find minimum element
    cout<<mini<<endl;
    int sum=accumulate(vec.begin(),vec.end(),0); // Using STL function to find sum of elements
    cout<<sum<<endl;
    sort(vec.begin(),vec.end()); // Sorting in ascending order
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    sort(vec.begin(),vec.end(),greater<int>()); // Sorting in descending order
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    reverse(vec.begin(),vec.end()); // Reversing the vector
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    
    return 0;
}