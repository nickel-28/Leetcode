class Solution {
public:
    int strStr(string haystack, string needle) {
//         //1st approach
        
//         int ans;
//         size_t found = haystack.find(needle);
//         if (found != string::npos)
//         // cout << "First occurrence is " << found << endl;
//         if(found>=0) ans=found;
//         // ans=found;
//         else ans=-1;
//         return ans;
        
        //2nd approach
        if(haystack.size()<needle.size()) return -1;
        
        for(int i = 0;i<haystack.size()- needle.size()+1;i++){
            if(haystack.substr(i, needle.size())==needle) return i;
        }
        return -1;
        
    }
};