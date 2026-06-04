#include <bits/stdc++.h>
using namespace std;


#define MOD 1000000007
#define MAXN 1000006
#define ll long long
#define ull unsigned long long
//const int MAXM = 1e6;
bool check[MAXN + 5]; vector <long long> primes;
void sieve(){

    for (int i = 0; i <= MAXN; i++){N
        check[i] = true;;
    }

    check[0] = check[1] = false;
    for(int j = 2; j * j <= MAXN; j++){
        if (check[j]){

            for (int i = j * j; i <= MAXN; i += j){
                check[i] = false;
            }
        }
    }
    for (int i = 2; i <= MAXN; i++){
        if (check[i]){
            primes.push_back(i);
        }
    }


}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);



    sieve();
    ll s;
    cin >> s;

    ll m = cbrt(s); //cbrt can bac ba
    while((m + 1) * (m + 1) *(m + 1) <= s){
        m++;
    }
    while(m * m * m > s) m--;

    int left = 0;
    int right = primes.size() - 1;
    long long ans = 0;
    while(left < right){
        if (primes[left] * primes[right] <= m){
            ans += (right - left);
            left++;
        }
        else {
            right--;
        }
    }

    cout << ans << endl;

}
