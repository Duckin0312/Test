/*
    Huỳnh Trí Đức - 25110187
    Tra cứu mã vé hợp lệ
*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    unordered_map<string, int> hash;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        hash[s] = 0;
    }
    int q; cin >> q;
    while(q--){
        string s; cin >> s;
        auto it = hash.find(s);
        if(it != hash.end()){
            if(it->second < 1){
                cout << "VALID\n";
                it->second++;
            }else cout << "DUPLICATE\n";
        }else{
            cout << "INVALID\n";
        }
    }   
    return 0;
}