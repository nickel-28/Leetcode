class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0, maxi=0;
//         int n=sentences.size();
//         for(int i=0; i<n; i++){
//             int ct=0;
//             for(int j=i; j<sentences[i].size(); j++) {
//                 if(sentences[i][j]==' '){
//                     ct++;
//                 }

//             }
//             ans=ct+1;
//             maxi=max(maxi,ans);
//         }
        
//         return maxi;
        
        for(auto s : sentences){
            int ct=0;
            for(auto it: s){
                if(it==' ') ct++;
            }
            maxi=max(maxi, ct+1);
        }
        
        return maxi;
        
        
    }
};