//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends

bool bs(int arr[] , int size , int a , int i){
    int s = i+1;
    int e = size-1;
    while(s<=e){
        int mid = s + (e-s)/2;
        // cout << "mid" << mid << " ";
        if (a == arr[mid]){
            return true;
        }
        
        else if(a > arr[mid]){
            s = mid+1;    
        }
        
        else{
            e = mid - 1;
        }
    }
    return false;
    
}

bool findPair(int arr[], int size, int n){
    //code
    bool ans = false;
    
    sort(arr , arr + size);
    
    int a = 0;
    for(int i = 0 ; i < size ; i++){
        a = arr[i] + n;  // to be searched 
        ans = bs(arr , size , a , i);
        // cout << ans;
        if(ans == true){
            return ans;
        }
    }
    return ans;
}