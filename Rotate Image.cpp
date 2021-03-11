#include <bits/stdc++.h> 
using namespace std;
void rotate(vector<vector<int>>& matrix) {
    vector<vector<int>> rotate = matrix;
    int k = matrix[0].size();
    for (int j = 0; j < k; j ++)
    {
        for (int i = 0; i < k; i ++) 
            rotate[i][k-j-1] = matrix[j][i];

    }
    matrix = rotate;

}
int main(){
    vector<vector<int>> matrix {{1,2,3},{4,5,6},{7,8,9}};
    rotate(matrix);
    for (auto j : matrix){
        for (auto i : j)
        {
            cout << i << ",";
        }
        cout << endl;
    }
}