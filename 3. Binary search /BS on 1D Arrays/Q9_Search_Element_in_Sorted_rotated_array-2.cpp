#include <bits/stdc++.h>
using namespace std;

class solution {
public:

    int search(vector<int>& nums, int target) {

        int low = 0;
        int high = nums.size() - 1;


        while (low <= high) {
            int mid =(low+high)/2;

            if (nums[mid]==target)
                return mid;

            if (nums[low] == nums[mid] && nums[mid] == nums[high]){
                low++;
                high--;
                continue;
            }

            if (nums[low] <= nums[mid]){
                if (nums[low] <= target && target < nums[mid]){
                    high = mid-1;
                }
                else {
                    low=mid+1;
                }
            }

            else{
                if (nums[mid] < target && target <= nums[high]){
                    low=mid+1;
                }

                else{
                    high=mid-1;
                }
            }
        }
        return false;
    }
};


int main() {
    vector<int> nums = {7,8,1,2,3,3,3,4,5,6};
    int target = 3;

    solution obj;
    bool result = obj.search(nums, target);

    if (result)
        cout << "Target is present in the array.\n";

    else
        cout << "Target is not present.\n";
    return 0;
};