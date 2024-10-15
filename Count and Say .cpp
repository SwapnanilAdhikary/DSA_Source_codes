class Solution {
public:
    string countAndSay(int n) {
        string out = "1";
        for(int i=0;i<n-1;i++){
            string str = "";
            char prevChar = out[0];
            int count = 1; 
        //this is for the out string only
            for(int j = 1;j< out.length();j++){
                if(out[j] == prevChar){
                    count++;
                }else{
                    str+=to_string(count)+prevChar;
                    prevChar = out[j];
                    count = 1;
                }
            }
            str+= to_string(count)+prevChar;
            out = str;
        }
        return out;
    }
};
