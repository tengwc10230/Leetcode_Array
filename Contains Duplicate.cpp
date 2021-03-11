#include <bits/stdc++.h> 
using namespace std;
bool containsDuplicate(vector<int>& nums) {
    bool ans = false;
    if(nums.size() > 0) {
        sort(nums.begin(), nums.end());
        int k = nums.front();
        for (auto it = nums.begin()+1; it != nums.end(); it ++)
        {
            if (k == *it)   {
                ans = true;
                break;
            }
            else    k = *it;
        }
    }
    return ans;
}
int main(){
    vector<int> nums{1,2,3};
    bool contain = containsDuplicate(nums);
    cout << contain << endl;
}