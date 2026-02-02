class Solution {
public:
    int reverse(int x) {
        int rem,revNum=0;
        while(x!=0){
            rem = x%10;
            if(revNum > INT_MAX / 10 || (revNum == INT_MAX / 10 && rem > 7)) return 0;
            if(revNum < INT_MIN / 10 || (revNum == INT_MIN / 10 && rem < -8)) return 0;

            revNum = (revNum*10) + rem;
            x /=10;
        }

        return revNum;
        
    }
};