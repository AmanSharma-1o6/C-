#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums = {4, 1, 2, 1, 2};
    int singleNumber = 0;
    for (int i = 0; i < nums.size(); i++) {
        singleNumber ^= nums[i];
    }
    cout << "The single number is: " << singleNumber << endl;
    return 0;
}