class Solution {
public:
    int myAtoi(string s) {
        map<char,int> m={{'0',0},{'1',1},{'2',2},{'3',3},
        {'4',4},{'5',5},{'6',6},{'7',7},{'8',8},{'9',9}};

        int res=0;
        int len=s.length();
        int mul=1;
        int i=0;
        while(s[i]==' '){
            i++;
        }
        if(s[i]=='-' || s[i]=='+'){
            if(s[i]=='-') mul=-1;
            if(s[i]=='+') mul=1;
            i++;
        }
        
        for(;i<len;i++){
            
            if(isdigit(s[i])){
                if(res>INT_MAX/10 || res==INT_MAX/10 && m[s[i]]>7 ){
                    if(mul==-1){
                        return INT_MIN; 
                    }else return INT_MAX;
                }
                res=res*10+m[s[i]];
                cout<<s[i]<<":"<<res<<"||";
            }else{
                return mul*res;  
            }
        }
       
        return mul*res;
    }
};