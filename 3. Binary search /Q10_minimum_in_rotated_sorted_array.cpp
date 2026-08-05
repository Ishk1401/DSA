#include <bits/stdc++.h>
using namespace std;

class solution {
public:

    int findmin(vector <int>& arr){
        int low=0, high=arr.size()-1, ans=INT_MIN;


        while(low<=high){
            int mid = (low+high)/2;
            if(arr[low] <= arr[high]){
                ans = arr[low];
                break;
            }
            if(arr[low]<=arr[mid]){
                ans=arr[low];
                low=mid+1;
            }
            else {
                ans=arr[mid];
                high=mid+1;
            }
        }
        return ans;
    }
};


int main(){
    vector<int> arr = {4,5,6,7,0,1,2};

    solution sol;
    int result= sol.findmin(arr);

    cout<< "Minimum element is " << result <<endl;
    return 0;
}