#include<cstdlib>

class Solution {
public:
    string largestOddNumber(string num) {
//         int ans;
//         int num1;
//         ostringstream num;
//         num1= atoi(num);
//         if(num1%2!=0) ans=num1;
//         else{
//             while(num1!=0){
//                 int rem = num1%10;
//                 if(rem%2==0) num/=10;
//                 else break;
//             }
//             ans=num1;
            
//         }
//         // string final = stoi(num1);
//         string final = to_string(num1);
//         return final;
        
        
        //2nd approach
        int n=num.size();
        string ans="";
        for(int i=n-1; i>=0; i--){
            int num1 = num[i]-'0';
            if(num1%2!=0){
                ans+=num.substr(0, i+1);
                break;
            }
                
        }
        
        return ans;
        
    }
};