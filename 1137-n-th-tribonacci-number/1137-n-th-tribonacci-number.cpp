class Solution {
public:
    int tribonacci(int n) {
        int f[n+3];
        // if(n==0) return 0;
        // else if (n==1 || n==2) return 1;
        f[0]=0;
        f[1]=1;
        f[2]=1;
        for(int i=3; i<=n; i++){
            f[i]=f[i-1]+f[i-2]+f[i-3];
        }
        return f[n];
        // else return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
        
    }
};