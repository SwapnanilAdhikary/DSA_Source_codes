#include <bits/stdc++.h>
using namespace std;
//anagrams if sorted words are same

bool isAnagram(string a, string b){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    return a==b;
}
vector<vector<string>>Answer_Brute(vector<string> product,vector<string> query){
    vector<vector<string>> ans;
    for(int i=0;i<product.size();i++){
        for(int j=0;j<query.size();j++){
            if(isAnagram(product[i],query[j])){
                ans.push_back({product[i]});
            }
        }
    }
    return ans;

}

vector<vector<string>>Answer_optimised(vector<string> product,vector<string> query){
    unordered_map<string,vector<string>> anagramGroup;
    vector<vector<string>> ans;

    for(const string &p:product){
        string sortedP = p;
        sort(sortedP.begin(),sortedP.end());
        anagramGroup[sortedP].push_back(p);
    }

    for(const string &q:query){
        string sortedQ = q;
        sort(sortedQ.begin(),sortedQ.end());

        if(anagramGroup.count(sortedQ)){
            ans.push_back(anagramGroup[sortedQ]);
        }else{
            ans.push_back({});
        }
    }
    return ans;

}

int main() {
    vector<string> product = {"apple", "banana", "cherry", "date"};
    vector<string> query = {"ananab", "ated", "rapeg"};
    
    vector<vector<string>> result = Answer_optimised(product, query);
    
    // Print the result
    for (const auto &vec : result) {
        for (const string &word : vec) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}
