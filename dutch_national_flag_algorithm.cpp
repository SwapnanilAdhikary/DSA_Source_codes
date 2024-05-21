#include<bits/stdc++.h>
class Solution {
public:
    void sortColors(vector<int>& num) {
    int n=num.size();    
    int low=0,mid=0,high=n-1;
    
    while(mid<=high){
        if(num[mid]== 0){
        swap(num[low],num[mid]);
        low++;
        mid++;
        }else if(num[mid]==1){
              mid++;
        }
        else{
            swap(num[mid],num[high]);
            high--;
        }
    }    
    }
};
