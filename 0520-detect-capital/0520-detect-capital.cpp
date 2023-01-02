class Solution {
public:
    bool detectCapitalUse(string word) {
        bool first=true;
        bool second=true;
        bool third=true;
        int n=word.size();
        
        for(int i=0; i<n; i++) {
            if(islower(word[i]))
                first=false;
        }
        
        for(int i=0; i<n; i++) {
            if(isupper(word[i]))
                second=false;
        }
        
        for(int i=0; i<n; i++) {
            if(i==0){
                if(islower(word[0]))
                    third=false;
            }
            else
            {
                if(isupper(word[i]))
                    third=false;
            }
        }
        
        return first || second || third;
        
    }
};