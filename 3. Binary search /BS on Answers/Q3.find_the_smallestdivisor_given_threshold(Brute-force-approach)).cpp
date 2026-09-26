#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int find_valid_div(vector<int>& nums, int threshold){
        
        int maxvalue= *max_element(nums.begin(), nums.end());

        for (int divisor = 1; divisor <= maxvalue; divisor++) {
            int sum =0;
            for(int num: nums){
                sum += ceil(num + divisor - 1) / divisor;
            }
            if (sum<=threshold){
                return divisor;
            }
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {1, 2, 5, 9};
    int threshold = 6;

    Solution obj;
    cout << obj.find_valid_div(nums, threshold) << endl;

    return 0;
};
