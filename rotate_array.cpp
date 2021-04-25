#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void rotate_(vector<vector<int>> &matrix){
        for(int i=0;i<matrix.size();i++){
           reverse(matrix[i].begin(), matrix[i].end());
        }

    }
};
int main(){
vector<vector<int>> v;
int row, col;cin>>row;cin>>col;
for(int i=0;i<row;i++)
    for(int j=0;j<col;i++)
        cin>>v[i][j];

Solution obj;
obj.rotate_(v);

for(int i=0;i<col;i++)
    for(int j=0;j<col;i++)
        cout<<v[i][j];
}
