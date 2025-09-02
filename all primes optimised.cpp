class Solution{
    public:
        bool isPrime(int n){
            int count = 0;
            for(int i=1;i<=sqrt(n);i++){
                if(n % i == 0){
                    count = count+1;
                    if(n/i != i){
                        count = count+1;
                    }
                }
            }
            if(count == 2) return true;
            return false;
        }
        vector<int> primeTillN(int n){
            vector<int>prime;
            vector<int>isPrime(n+1,1);
            vector<int>ans;
            for(long long i = 2;i<=n;i++){
                if(isPrime[i]){
                    ans.push_back(i);
                    for(long long val = i*i; val <= n; val += i){
                        isPrime[val] = false;
                    }
                }
            }
            return ans;
        }
};
