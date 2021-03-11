#include <iostream>
#include <vector>
using namespace std;
void rotate(vector<int>& nums, int k) {
    if (nums.size() > 0)
    {
        for (int i = 0; i < k; i ++){
            int rot_num = nums.back();
            nums.pop_back();
            nums.insert(nums.begin(), rot_num);
        }
    }
    
}
int main()
{
    vector<int> nums{1,2,3,4,5,6,7};
    int k = 3;
    rotate(nums, k);
    
    for (auto it = nums.begin(); it != nums.end(); it ++){
        cout << *it << " ";
    }
    
}