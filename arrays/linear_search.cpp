#include <iostream>
using namespace std;
int linear_search(int arr[], int size, int target){
    for(int i = 0; i<size ; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,3,4,45,46,23,5,63,6,34};
    int size = 10;
    int target = 55;

    cout << linear_search(arr , size , target)<<endl;
    return 0;
} 