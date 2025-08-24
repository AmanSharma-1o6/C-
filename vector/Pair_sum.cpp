#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 13;
    vector<int> ans;
    for(int i = 0 ; i < size ; i++){
        for(int j = i+1 ; j<size ; j++){
            if(arr[i] + arr[j] == target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    for(int i = 0; i < ans.size() ; i++){
        cout<< arr[ans[i]]<<" ";
    }
    return 0;
}
