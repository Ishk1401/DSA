#include <bits/stdc++.h>
using namespace std;

class Solution{
public:

    int findNthroot(int n , int m ){
        int l=1,h = m, ans=1;

        while (l<=h){
            int mid = (l+h)/2;

            if (m==1) return 1;
        
            else if (mid*n <= m){
                ans= mid; 
                l=mid+1;
            }

            else{ 
                h = mid-1;
            }
        }
        return -1;
    }
};

int main() {
    int n , m;
    cout << "enter your Nth value" <<endl;
    cin >> n;
    cout << "enter your number" <<endl;
    cin >> m;
    Solution Sol;

    int result = Sol.findNthroot(n , m);
    return 0;
}