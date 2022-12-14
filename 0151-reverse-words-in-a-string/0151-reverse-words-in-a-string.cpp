class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        // int i=0;
        int n=s.size();
        
        for(int i=0; i<n; i++){
                string word="";
            if(s[i]==' ') continue;
                while(i<n && s[i]!=' '){
                word+=s[i];
                    i++;
            }
            st.push(word);
        }
        string result;
        while(!st.empty()){
            result+=st.top();
            st.pop();
            if(!st.empty())
                result+=' ';
        }
        
        return result;
        
        
    }
};