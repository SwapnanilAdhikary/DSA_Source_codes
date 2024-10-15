class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string RepeatA = a;
        int repeatCount = 1;
        while(RepeatA.length() < b.length()){
            RepeatA += a;
            repeatCount++;
        }
        if(RepeatA.find(b) != string::npos){
            return repeatCount;
        }
        RepeatA += a;
        repeatCount++;

        if(RepeatA.find(b) != string::npos){
            return repeatCount;
        }
        return -1;    

}
};
