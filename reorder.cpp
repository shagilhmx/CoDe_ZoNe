#include<bits/stdc++.h>
using namespace std;

class solution{

    string merge_sort(string *arr, string *temp, int left, int right){
        int mid;
        if(left<right){
            mid = (left+right)/2;
            merge_sort(arr, temp, left, mid);
            merge_sort(arr, temp, mid+1, right);
            merge(arr, temp, left, mid, right);
        }
    }

public:
    string print(vector<string> &arr){
        vector<string> temp[arr.size()];
        string z="";
        merge_sort(arr, temp, 0, arr.size()-1);
        for(auto it:arr)
            z+=it;
        return z;
    }

};

int main(){
    int array_size;
    cin>>array_size;
    vector<string> arr;
    for(int i=0;i<array_size;i++){
        cin>>arr;
    }
    solution obj;
    cout<<obj.print(arr);
}
