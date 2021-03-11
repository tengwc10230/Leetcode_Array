#include <bits/stdc++.h> 
using namespace std;
vector<int> plusOne(vector<int>& digits) {
    int carry = 1;
    for (int i = 1; i <= digits.size(); i ++)
    {
        digits[digits.size()-i] += carry;
        if (digits[digits.size()-i] > 9)    digits[digits.size()-i] = 0;
        else {
            carry = 0;
            break;
        }
    }
    if (carry) digits.insert(digits.begin(), 1);

    return digits;
}

int main()
{
    vector<int> digits{0};
    vector<int> ans = plusOne(digits);
    for (auto an:ans)
        cout << an << " ";
}