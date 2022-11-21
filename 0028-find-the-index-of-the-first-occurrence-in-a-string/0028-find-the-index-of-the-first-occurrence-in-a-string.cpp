class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans;
        size_t found = haystack.find(needle);
        if (found != string::npos)
        // cout << "First occurrence is " << found << endl;
        if(found>=0) ans=found;
        // ans=found;
        else ans=-1;
        return ans;
    }
};