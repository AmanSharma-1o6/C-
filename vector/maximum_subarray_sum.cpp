#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

// Prints all subarrays of the given array
void subarrays(int arr[], int size){
    for(int st = 0; st < size ; st++){
        for(int end = st ; end < size ; end++ ){
            for(int i=st; i<=end ; i++){
                cout << arr[i] << ",";
            }
            cout << "   ";
        }
        cout << endl;
    }
}

// Prints the sum of all subarrays
void sum_subarrays(int arr[], int size){
    for(int st = 0; st < size ; st++){
        int sum = 0;
        for(int end = st ; end < size ; end++ ){
            sum += arr[end];
            cout << sum << " ";
        }
        cout << endl;
    }
}

// Returns a vector containing the sum of all subarrays
vector<int> arr_of_sum_of_subbarrys(int arr[], int size){
    vector<int> v;
    for(int st = 0; st < size ; st++){
        int sum = 0;
        for(int end = st ; end < size ; end++ ){
            sum += arr[end];
            v.push_back(sum);
        }
    }
    return v;
}

// Prints the maximum subarray sum (brute force approach)
void max_sum_array(int arr[], int size){
    int maxsum = INT_MIN ; 
    for(int st = 0; st < size ; st++){
        int cursum = 0;
        for(int end = st ; end < size ; end++){
            cursum += arr[end];
            maxsum = max(maxsum, cursum);
        }
    }
    cout << maxsum << endl;
}

void k_algo(int arr[], int size){
    int maxsum = INT_MIN;
    int cursum = 0;
    for(int i = 0; i < size; i++){
         cursum += arr[i];
        if(cursum < 0) cursum = 0;
        maxsum = max(maxsum, cursum);
    }
    cout << maxsum << endl;
}

int main(){
    int arr[] = {1, -2, -3, 4, 5, 6, -7};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Subarrays : " << size * (size + 1) / 2 << endl;
    subarrays(arr, size);
    cout << "Sum of subarrays" << endl;
    vector <int> v = arr_of_sum_of_subbarrys(arr, size);
    for( int i = 0 ; i < size*(size+1)/2 ; i++){
        cout << v[i] << " ";
    }
    cout<<endl;
    cout << "max_sum" << endl;
    max_sum_array(arr, size);
    k_algo(arr, size);
    return 0;
}
