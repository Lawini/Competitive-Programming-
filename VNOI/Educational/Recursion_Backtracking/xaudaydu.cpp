#include<bits/stdc++.h>
using namespace std;
#define N 100005
#define ll long long
#define FOR(i, a, b) for(int (i)=(a); (i)<=(b); i++)
#define FORD(i, a, b) for(int (i)=(a); (i)>=(b); i--)
int n;
string s[26];
int has_char[30][26];
int freq[26]; //dem so tan so chu cai xuat hien

ll pow_2[30];
ll ans = 0;
void Try(int i, int cnt){

    if (cnt == 26){
        //So xau con lai la n - i + 1
        ans += pow_2[n - i + 1];
        return; 
    }

    if(i > n){
        return;
    }

    //Nhanh 1: Khong chon xau thu i
    Try (i + 1, cnt);

    //Nhanh 2: Chon xau thu i
    int new_added = 0;
    for (int c = 0; c < 26; c++){
        if (has_char[i][c]){
            if (freq[c] == 0){
                new_added++; //them vao chua cai moi chua tim ra nam o xau i
            }
            freq[c]++; //danh dau chua cai do da dc them
        }
    }

    //di tiep voi so chu cai moi
    Try(i + 1, cnt + new_added);

    //Quay lui luc ra phai tra lai cai da  
    for (int c = 0; c < 26; c++){
        if (has_char[i][c]){
            freq[c]--;
        }
    }
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w",stdout);


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> s[i];

        for (char c : s[i]){
            has_char[i][c - 'a'] = 1; //da xuat hien
        }
    }
    pow_2[0] = 1;
    for (int i = 1; i <= 25; i++){
        pow_2[i] = pow_2[i - 1] * 2;
    }
    Try(1,0);
    cout << ans << endl;
    
}
