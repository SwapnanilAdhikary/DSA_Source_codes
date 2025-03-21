#include <bits/stdc++.h>
using namespace std;
//anagrams if sorted words are same

bool isAnagram(string a,string b){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    return a == b;
}
vector<vector<string>> Answer(vector<string> product, vector<string> query) {
    int n = product.size();
    int m = query.size();
    vector<vector<string>> ans;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (isAnagram(product[i],query[j])) {
                ans.push_back({product[i]}); // Store as vector<string>
            }
        }
    }
    
    return ans;
}

int main() {
    vector<string> product = {"apple", "banana", "cherry", "date"};
    vector<string> query = {"ananab", "ated", "rapeg"};
    
    vector<vector<string>> result = Answer(product, query);
    
    // Print the result
    for (const auto &vec : result) {
        for (const string &word : vec) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}
