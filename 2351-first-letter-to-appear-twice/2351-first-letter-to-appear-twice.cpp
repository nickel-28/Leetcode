class Solution {
public:
    char repeatedCharacter(string s) {
        char ans;
        int ht[26]={0};
        for(int i=0; i<s.length(); i++){
            ht[s[i]-'a']++;
            if(ht[s[i]-'a'] == 2){
                ans=s[i];
                break;
            }
        }
        
        return ans;
    }
};