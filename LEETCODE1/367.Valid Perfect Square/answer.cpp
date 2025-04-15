class Solution {
    public:
        bool isPerfectSquare(int num) {
            long long low = 1, high = num;
            long long sq = 1;
            while (low <= high){
                long long mid = low+(high-low)/2;
               sq = mid*mid;
            
            if(sq == num) return true;
            else if (sq < num ) low = mid+1;
            else high = mid-1;
    
    
            }
            return false;
        }
    };