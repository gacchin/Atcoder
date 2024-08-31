#include <bits/stdc++.h>
using namespace std;

// 愚直に全探索
int main(){
    int A[9][9];
    int B[9];
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin >> A[i][j];
        }
    }

    bool flg = true;
    for(int i=0; i<9; i++){
        for(int k=0; k<9; k++) B[k] = 0;
        for(int j=0; j<9; j++){
            B[A[i][j]-1] ++;
        }
        for(int k=0; k<9; k++) if(B[k] != 1) flg = false;
    }

    for(int i=0; i<9; i++){
        for(int k=0; k<9; k++) B[k] = 0;
        for(int j=0; j<9; j++){
            B[A[j][i]-1] ++;
        }
        for(int k=0; k<9; k++) if(B[k] != 1) flg = false;
    }

    for(int ii=0; ii<9;ii+=3){
        for(int jj=0; jj<9;jj+=3){
            for(int k=0; k<9; k++) B[k] = 0;
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    B[A[i+ii][j+jj]-1] ++;
                }
            }
            for(int k=0; k<9; k++){
                if(B[k] != 1) flg = false;            
            }        
        }
    }

    if(flg) cout << "Yes" << endl;
    else cout << "No" << endl;
}