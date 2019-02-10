class Solution {
public:
    int maxval(int a,int b){
        if(a>b)
            return a;
        else return b;
    }
    int lengthOfLongestSubstring(string s) {
        int hash[128];
        int maxlen=0;
        int len = s.length();
        int tmplen =0;
        
        for(int j=0;j<=127;j++)
            hash[j]=0;
        int nowstringnum=0;
        int nowlen=0;
        int prev=0;
        while(nowstringnum<len){
            if (hash[s[nowstringnum]] == 1) {
                 if (nowlen > maxlen)  maxlen = nowlen;
                for (int j = 0; j <= 127; j++)
                    hash[j] = 0;
                nowstringnum=prev+1;
                nowlen=0;
            }
            else {
                if(nowlen<1)prev=nowstringnum;
                 hash[s[nowstringnum]] = 1;               
                 nowlen++;
                 nowstringnum++;             
            }
             maxlen=maxval(maxlen,nowlen);
        }
        return maxlen;
    }
};
