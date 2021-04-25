#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[6] = {6,8,4,2,7,5};
    int arr2[5] = {4,2,5,7,8};
    unordered_map<int, bool> umap;
    for(int x : arr2)
        if(umap.find(x) == umap.end())
            umap[x] = true;
    int ans;
    for(int y : arr1)
        if(umap[y] != 1)
            ans = y;

    cout<<ans<<endl;
}
