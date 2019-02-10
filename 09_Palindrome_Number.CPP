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
        int tmpval1, tmpval2;
        tmpval1 = tmpval2 = x;
        for (int i = 1; i <= len/2; i++) {
            if (tmpval1 / (int)pow(10, len - i) != tmpval2 % 10) return false;
            tmpval1 = tmpval1 % (int)pow(10, len -i);
            tmpval2 = tmpval2 / 10;

        }
	return true;
    }
};
