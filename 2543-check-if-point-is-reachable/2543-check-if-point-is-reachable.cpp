class Solution {
public:
    bool isReachable(int targetX, int targetY) {
        int gcd=__gcd(targetX, targetY);
        
        // to check power of 2 -> (x & (x-1))==0
        return (gcd & (gcd-1))==0;
    }
};