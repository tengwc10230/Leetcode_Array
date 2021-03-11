#include <iostream>
#include <vector>
using namespace std;
int maxProfit(vector<int>& prices) {
    int ans = 0;
    if (prices.size() > 0){
        int first = prices.front();
        for (auto it = prices.begin()+1; it != prices.end(); ++it)
        {
            if (*it > first)    
                ans += *it - first;
            first = *it;
        }
    }
    return ans;
}
int main()
{
    vector<int> prices{7,1,5,3,6,4};
    int profit = maxProfit(prices);
    cout << profit << endl;
}