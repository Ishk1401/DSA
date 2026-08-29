#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int findsqrt(int x){
        int low=1, high=x, ans=1;
        while(low<=high){
            int mid=(low+high)/2;

            if (mid*mid <= x){
                ans=mid, low=mid+1;
            }
            else high=mid-1;

        }
        return ans;
    }
};


int main(){

    cout <<"enter your Sqrt number here : " <<endl;
    int n;
    cin >> n;
    Solution s;
    int result = s.findsqrt(n);
    cout << result << endl;
    
    /*Or you can write like this too

    int n=28;
    Solution s;
    cout<< s.findsqrt(n) << endl; 

    OR

    Solution s;
    cout<< s.findsqrt(28) << endl;
    */

    return 0;
}