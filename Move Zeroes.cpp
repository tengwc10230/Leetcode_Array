#include <bits/stdc++.h> 
using namespace std;
void moveZeroes(vector<int>& nums) {
    int zero = 0;
    for (auto it = nums.begin(); it != nums.end(); it ++)
    {
        if (*it == 0){
            zero ++;
            nums.erase(it);
            it --;
        } 
    }
    for (int i = 0; i < zero; i ++)
        nums.insert(nums.end(), 0);
    
}

int main()
{
    vector<int> nums{0,1,0,3,12};
    moveZeroes(nums);
    for (auto num:nums)
        cout << num << " ";
}