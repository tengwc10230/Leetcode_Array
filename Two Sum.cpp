#include <bits/stdc++.h> 
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> un_map;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i ++)
    {
        if (un_map[nums[i]] != 0){
            ans.push_back(i);
            ans.push_back(un_map[nums[i]]-1);
            break;
        }
        un_map[target - nums[i]] = i+1;
        
    }
    return ans;
    
}

int main(){
    vector<int> nums{3,2,4};
    int target = 6;
    vector<int> ans = twoSum(nums, target);
    for (auto an:ans)
        cout << an << " ";
}