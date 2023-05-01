//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/*
str: string in which pattern we have to find pattern.
text: pattern needs to searched.
*/

bool searchPattern(string str, string pat)
{
    bool ans=false;
    int m=str.size();
    int n=pat.size();
    
    int i=0;
    while(i<=m-n){
        if(str[i]==pat[0]){
            string temp = str.substr(i,n);
            if(temp==pat){
                ans=true;
            }
        }
        i++;
    }
    return ans;
    
    
}



//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    
    while(t--)
    {
        string str, pat;
        cin>>str;
        cin>>pat;
        
        if(searchPattern(str, pat) == true)
            cout << "Present" <<endl;
        else cout << "Not present" <<endl;
    }
}


// } Driver Code Ends