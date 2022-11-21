class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(), strs.end() );
        string first = strs[0];
        string second = strs[strs.size()-1];
        for(int i=0; i<first.length(); i++){
            if(first[i]==second[i]){
                ans+=first[i];
            }
            else break;
        }
        return ans;
        
        
    }
};