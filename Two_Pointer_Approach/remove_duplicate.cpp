#include <iostream>
using namespace std;

#include <vector>
int main(){
    int n;
    cout<<"enter the size of the array";
    cin>>n;

    vector<int>arr(n);
    cout<<"enter the array elements";
    for(int low=0;low<n;low++){
        cin>>arr[low];
    }
    int low=0;
    int unique=1;
    int high=1;
    while(high<n){
        if(arr[high]==arr[high-1]){
            high++;
            continue;
        }
        arr[low+1]=arr[high];
        low++;
        unique++;
        high++;
    }
    cout<< unique;



}