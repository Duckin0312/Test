/*
    Huỳnh Trí Đức - 25110187
    Thống kê từ khóa xu hướng
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    unordered_map<string, int> tag;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        tag[s]++;
    }
    vector<pair<string, int>> res(tag.begin(), tag.end());
    sort(res.begin(), res.end(), [](pair<string, int> &a, pair<string, int> &b){
        if(a.second == b.second){
            return a.first < b.first;
        }
        return a.second > b.second;
    });
    for(int i = 0; i < k; i++) cout << res[i].first << " " << res[i].second << '\n';
    return 0;
}