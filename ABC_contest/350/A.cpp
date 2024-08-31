#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  1000000000 // 2,147,483,647

/*

*/
int solve(){
    string s;
    cin >> s;
    
    string ss = s.substr(3);
    for(int i = 1;i < 350;i++){
        string com;
        if(i <10){
            com = "00"+to_string(i);
            if(com == ss) {
                cout << "Yes" << endl;
                return 0;
            }
        }else if(i < 100){
            com = "0"+to_string(i);
            if(com == ss) {
                cout << "Yes" << endl;
                return 0;
            }  
        }else{
            com = to_string(i);
            if(com == ss && i != 316){
                cout << "Yes" << endl;
                return 0;
            }  
        }
    //  cout << com <<',';
    }
    
    cout << "No" << endl;
    return 0;
}

int main(){
    solve();

    return 0;
}