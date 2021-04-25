#include<bits/stdc++.h>
using namespace std;

void sort(int *ar1, int *ar2, int n, int m){
    unordered_map<int, bool> umap;
    for(int i=0;i<n;i++){
        if(umap.find(ar1[i]) == umap.end())
            umap[ar1[i]] = true;
    }
    for(int i=0;i<m;i++){
        if(umap.find(ar2[i]) == umap.end())
            umap[ar2[i]] = true;
    }
    int i=0,k=0;
    while(i<(m+n)){
        k++;
        if(umap[k] == 1){
            ar1[i] = k;
            i++;
        }
    }
    k = 0;
    for(int i=n;i<(n+m);i++){
        ar2[k] = ar1[i];
        k++;
    }
}

int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int ar1[n],ar2[m];
    for(int i=0;i<n;i++)
        cin>>ar1[i];
    for(int i=0;i<m;i++)
        cin>>ar2[i];
    sort(ar1,ar2,n,m);
    for(int i=0;i<n;i++){
        cout<<ar1[i]<<endl;
    }
    for(int i=0;i<m;i++){
        cout<<ar2[i]<<endl;
    }
}
