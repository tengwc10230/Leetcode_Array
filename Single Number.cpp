#include <bits/stdc++.h> 
using namespace std;

int singleNumber(vector<int>& nums) {
    int ans = 0;
    if (nums.size() > 0){
        for (auto it : nums)
        ans ^= it;
    }
    return ans;
}
int main(){
    vector<int> nums{4,1,2,1,2};
    int num = singleNumber(nums);
    cout << num << endl;
}