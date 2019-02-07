class Solution {
public:
    string convert(string s, int numRows) {
        const int len = s.length();
        int* strlen = new int[len];
        string cpystr ="";
        bool flag=1;
        int tmp=-1;
        //담기
        for(int i=0;i<len;i++){
            if(numRows==1)
                return s;
            if(flag==1 && tmp<numRows-1){
            //0~len-1까지 증가한다.
                strlen[i]=++tmp;
                if(tmp==numRows-1) flag=0;
            }else if(flag==0 && tmp>0){
                strlen[i]=--tmp;
                if(tmp==0) flag=1;
            }
        }
        
        //읽기
        int tmplen=-1;
        for(int i=0;i<numRows;i++){
            for(int j=0;j<len;j++){
                if(strlen[j]==i)
                    cpystr= cpystr+s.at(j);
            }
        }
        return cpystr;
    }
};
