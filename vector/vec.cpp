#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec;
    vector<int> vec_2 = {1,2,3,4,5};
    vector<int> vec_3(5,2);
    for (int i: vec){
        cout<<"vec : "<<i<<endl;
    }
    for (int i: vec_2){
        cout<<"vec_2 : "<<i<<endl;
    }
    for (int i: vec_3){
        cout<<"vec_3 : "<<i<<endl;
    }
    cout<<vec.size()<<" "<<vec_2.size()<<" "<<vec_3.size()<<endl;
    vec.push_back(10);
    vec_2.pop_back();
    cout<<vec.front()<<" "<<vec_2.front()<<" "<<vec_3.front()<<endl;
    cout<<vec.back()<<" "<<vec_2.back()<<" "<<vec_3.back()<<endl;
    cout<<vec_2.at(3)<<endl;
    return 0;

}
