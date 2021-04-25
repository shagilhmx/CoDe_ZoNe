// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge_(long long *arr, long long *temp, long long p, long long q, long long r){
        long long int i, j, k, inv_count = 0;;
        i = p;
        j = q;
        k = r;
        while((i<q)&&(j<=r)){
            if(arr[i]<=arr[j])
                temp[k++] = arr[i++];
            else{
                temp[k++] = arr[j++];
                inv_count+=(q-i);
            }
        }
        while(i<q)
            temp[k++] = arr[i++];
        while(j<=r)
            temp[k++] = arr[j++];

        for(int i=p;i<=r;i++)
            arr[i] = temp[i];

        return inv_count;
    }

    long long int merge_sort(long long *arr, long long *temp, long long p, long long r){
        long long q,inv_count=0;
        if(p<r){
            q = (p+r)/2;
            inv_count += merge_sort(arr, temp, p, q);
            inv_count += merge_sort(arr, temp, q+1, r);
            inv_count += merge_(arr, temp, p, q+1, r);
        }
        return inv_count;
    }

    long long int inversionCount(long long arr[], long long N)
    {
        long long temp[N];
        for(int i=0;i<N;i++)
            temp[i] = arr[i];
        return merge_sort(arr, temp, 0, N-1);
    }

};

// { Driver Code Starts.

int main() {

    long long T;
    cin >> T;

    while(T--){
        long long N;
        cin >> N;

        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }

    return 0;
}
  // } Driver Code Ends
