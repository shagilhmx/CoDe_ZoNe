// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge(long long *arr, long long p, long long q, long long r){
        long long count=0;
        int i = p, j = q, k = r;
        while(i<n1 || j<n2){
            if(L[i] > R[j] && i<j){
                count++;
                j++;
            }
            else{
                i++;
                j++;
            }
        }
        return count;
    }
    long long int merge_sort(long long *arr, long long p, long long r){
        long long c,q, inv_count=0;
        if(p<r){
            q = (p+r)/2;
            inv_count += merge_sort(arr, p, q);
            inv_count += merge_sort(arr, q+1, r);
            inv_count += merge(arr, p, q+1, r);
        }
        return inv_count;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        long long res;
        merge_sort(arr, 0, N);
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
