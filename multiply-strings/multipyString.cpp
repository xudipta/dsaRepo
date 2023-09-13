class Solution {
public:
    string multiply(string num1, string num2) {
        vector<int> aNum;
        vector<int> bNum;
        int aL=num1.length();
        int bL=num2.length();
        
        for(int i=0; i<aL;i++){
            aNum.push_back(num1[i]-'0');
        }
        for(int i=0; i<bL;i++){
            bNum.push_back(num2[i]-'0');
        }
        //do the multiplication and store overall with carry
        vector<int> res;
        int temp,resLen;
        for(int i=bL-1;i>=0;i--){
            temp=0;
            resLen=bL-i-1;
            for(int j=aL-1;j>=0;j--){
                temp=bNum[i]*aNum[j];
                if(resLen>=res.size()){
                    res.push_back(temp);
                }else{
                    res[resLen]+=temp;
                }
                resLen++;
            }
            
        }
        //separate carry from sum and add to the next space and continue
        int c=0;
        for(int i=0;i<res.size();i++){
            res[i]=res[i]+c;
            c=res[i]/10;
            res[i]=res[i]%10;
        }
        if(c!=0){
            while(c>0){
                res.push_back(c%10);
                c=c/10;
            }
        }
        string ans="";
        bool initialZeroFlag=false;
        for(int i=res.size()-1;i>=0;i--){
            if(res[i]!=0 || initialZeroFlag){
                ans.push_back(res[i]+ '0');
                initialZeroFlag=true;
            }
        }
        if(ans.length()==0) ans.push_back('0');
        return ans;
    }
};