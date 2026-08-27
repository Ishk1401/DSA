#include <bits/stdc++.h>
using namespace std;

class solution{
public:

/*note: here in this peakelement function `vector<int>& nums`
this & symbol stands for reference , it means the vector 
nums is being passed by reference rather than by value , means 
array's original copy is being share with the function here 
and not the copy of it
this is a concept of passing {by reference OR by value} */  
    int peakelement(vector<int>& arr){
        int n= arr.size();

        if (n==1) return 0;
        if(arr[0]>arr[1]) return 0;
        if (arr[n-1]>arr[n-2]) return n-1;

        int low=1, high=n-2;
        while (low<=high){
            int mid = (low+high)/2;
        
            if (arr[mid]> arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
            }
        
            else if (arr[mid]>arr[mid+1]) high=mid-1;
        
            else{
                low=mid+1;
            }
        }
    return -1;
    }
};

int main(){
    solution solu;
    vector<int> nums = {1,5,1,2,1};
    int index= solu.peakelement(nums);
    cout << "peak at index : " <<index <<"\nwith value: " <<nums[index] <<endl;
    return 0; 
}