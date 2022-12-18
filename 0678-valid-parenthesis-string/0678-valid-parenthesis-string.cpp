class Solution {
public:
    bool checkValidString(string s) {
        stack<int> open, star;
        for(int i=0; i<s.size(); ++i) {
            if(s[i]== '(' ) open.push(i);
            else if (s[i] == '*') star.push(i);
            else {
                if(!open.empty()) open.pop();
                else if(!star.empty()) star.pop();
                else return false;
            }
        }
//         for(auto it: s){
//             if(it== '(' ) open.push(it);
//             else if (it == '*') star.push(it);
//             else {
//                 if(!open.empty()) open.pop();
//                 else if(!star.empty()) star.pop();
//                 else return false;
//             }
            
//         }
        
        while(!open.empty() ){
            if(star.empty()) return false;
            else if(open.top() < star.top() ){
                open.pop();
                star.pop();
            }
            else return false;
        }
        
        return true;
    }
};