class Solution {
public:
    int trap(vector<int>& height) {
        // prefix
        int n=height.size();
        vector<int> prefix(n,-1);
        prefix[0] = height[0];
        for(int i=1;i<=n-1;i++){
            prefix[i]=max(prefix[i-1],height[i]);
        }
        //suffix
        vector<int> suffix(n,-1);
        suffix[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i]=max(suffix[i+1],height[i]);
        }
        int total=0;
        for(int i=0;i<=n-1;i++){
            int leftMax = prefix[i];
            int rightMax=suffix[i];
            if(height[i] < leftMax && height[i]<rightMax){
                total+=min(leftMax,rightMax)-height[i];
            }
        }
        return total;
    }
};
