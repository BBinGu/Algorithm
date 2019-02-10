class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        else if (x == 0) return true;
        else if (x % 10 == 0)return false;
        int len = 1;
        int tmp = x; 
        for (len= 1;; len++) {
            if (tmp / 10 == 0) break;
            tmp /= 10;
        }
        int i;
        int tmpval1, tmpval2, tmpval3,tmpval4;
        tmpval1 = tmpval2 = x;
        for ( i = 1; i <= len/2; i++) {
            tmpval3 = tmpval1 / (int)pow(10, len - i);
            tmpval4 = tmpval2 % 10;
            if (tmpval3 != tmpval4) return false;
            tmpval1 = tmpval1 % (int)pow(10, len -i);
            tmpval2 = tmpval2 / 10;

        }
	return true;
    }
};
