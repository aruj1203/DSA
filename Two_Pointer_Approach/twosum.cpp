#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout<<"enter the size of the array ";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the array elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter the target";
    cin>>target;
    sort(arr.begin(),arr.end());
    int i=0;
    int j=n-1;
    while(i<j){
        int sum=arr[i]+arr[j];
        if(sum==target){
            cout<< arr[i]<<" "<<arr[j];
            break;
        }
        if(sum<target){
            i++;
        }
        if(sum>target){
            j--;
        }

    }
    return 0;

}