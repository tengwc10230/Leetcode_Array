#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.size() > 0){
        int p = nums.front();
        for (auto it = nums.begin()+1; it != nums.end(); it++) {
            if(p == *it) {
                nums.erase(it);
                it --;
            } 
            else    p = *it;
        } 
    }
    return nums.size();
}

int main()
{
    vector<int> nums{0,0,1,1,1,2,2,3,3,4};
    int len = removeDuplicates(nums);
    for (int i = 0; i < len; i++) {
        cout << nums[i] << " ";
    }
}