class Solution {
public:
    int myAtoi(string s) {
        int res=0;
        int len=s.length();
        int mul=1;
        int i=0;
        //skip leading spaces
        while(s[i]==' '){
            i++;
        }
        //check for +/-
        if(s[i]=='-' || s[i]=='+'){
            if(s[i]=='-') mul=-1;
            if(s[i]=='+') mul=1;
            i++;
        }
        
        for(;i<len;i++){
            if(isdigit(s[i])){
                //check for overflow
                if(res>INT_MAX/10 || res==INT_MAX/10 && (s[i]-'0')>7 ){
                    if(mul==-1) return INT_MIN; 
                    else return INT_MAX;
                }
                res=res*10+(s[i]-'0');
            }else{
                return mul*res;  
            }
        }
       
        return mul*res;
    }
};