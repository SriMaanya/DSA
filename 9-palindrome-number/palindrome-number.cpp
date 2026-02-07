class Solution {
public:
    bool isPalindrome(int x) {
        int sign = x<0? -1 : 1;
        double revNum=0;
        int temp = x;
        while(x!=0){
            double rem = x % 10;
            revNum = (revNum*10) + rem;
            x = x / 10;
        }
        if(revNum*sign == temp) return true;
        else return false;
        
    }
};