#include <bits/stdc++.h> 
using namespace std;
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector<int> nums3;
    if(nums1.size() > 0 && nums2.size() > 0){
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(),nums2.end());
        int i = 0, j = 0;
        for (int k = 0; k < nums1.size() + nums2.size(); k ++)
        {
            if ( nums1[i] == nums2[j] ) {
                nums3.push_back(nums1[i]);
                k ++;
                i ++;
                j ++;
            }
            else if ( nums1[i] < nums2[j] )  i ++;
            else j ++;
            if (i == nums1.size())  break;
            if (j == nums2.size())  break;
            
        }
    }
    return nums3;
}
int main(){
    vector<int> nums1{1,2};
    vector<int> nums2{1,1};
    vector<int> ans = intersect(nums1,nums2);
    for (auto an:ans){
        cout << an << " ";
    }
}