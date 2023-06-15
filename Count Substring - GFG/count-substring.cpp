//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSubstring(string s) {
        int n=s.size();
        int start=0, end=0;
        int count=0;
        // ek map track krne k liye ki window me "abc" hai ya nhi
        unordered_map<char,int> mp;
        while(end<n) {
            mp[s[end]]++;
            // yadi window me 'a','b' & 'c' teeno hai, to count me (n-end) add krte jao, ye loop tb tk chalegi
            while(mp['a'] && mp['b'] && mp['c']) {
                count+=n-end;
                // ab start index wala character ki frequency decrement kr do
                mp[s[start]]--;
                // start pointer slide kro
                start++;
            }
            // end pointer iterate kro, string me traverse krne k liye
            end++;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        cout << obj.countSubstring(s) << endl;
    }
    return 0;
}
// } Driver Code Ends