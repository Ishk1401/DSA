#include <bits/stdc++.h>
using namespace std;

class solution {
public:

    int findtimes(vector <int>& arr){
        int low=0, high=arr.size()-1, ans=INT_MAX;
        int index=-1;

        while(low<=high){
            int mid = (low+high)/2;
            if(arr[low] <= arr[high]){
                ans = arr[low];
                index= low;
                break;
            }
            if(arr[low]<=arr[mid]){
                ans=arr[low];
                index=low;
                low=mid+1;
            }
            else {
                ans=arr[mid];
                index=mid;
                high=mid+1;
            }
        }
        return index;
    }
};


int main(){
    vector<int> arr = {4,5,6,7,0,1,2};

    solution sol;
    int result= sol.findtimes(arr);

    cout<< "your array is rotated " << result << " times " << endl;
    return 0;
}