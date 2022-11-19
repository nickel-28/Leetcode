/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int max=n;
        int min=1;
        while(true){
            int meanNumber = (max-min)/2 + min;
            int res=guess(meanNumber);
            if(res==0) return meanNumber;
            else if(res==1) min=meanNumber+1;
            else max=meanNumber-1;
        }
    }
};