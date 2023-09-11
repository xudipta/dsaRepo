class Solution {
public:
    int myAtoi(string s) {
        map<char,int> m={{'0',0},{'1',1},{'2',2},{'3',3},
        {'4',4},{'5',5},{'6',6},{'7',7},{'8',8},{'9',9}};

        double res=0;
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
                if((mul*res*10)+(m[s[i]])>INT_MAX)return INT_MAX;
                if((mul*res*10)+(m[s[i]])<INT_MIN) return INT_MIN;
                
                res=res*10+m[s[i]];
                cout<<s[i]<<":"<<res<<"||";
            }else{
                return mul*res;  
            }
        }
        if(mul*res>INT_MAX) return INT_MAX;
        if(mul*res<INT_MIN) return INT_MIN;
        return mul*res;
    }
};