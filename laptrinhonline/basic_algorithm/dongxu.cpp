#include<stdio.h>
#include <math.h>
void solve(){
    unsigned long long n;
    scanf ("%llu",&n);
    do{
        if (n%2==0){
            int k=0;
            unsigned long long oddp=n;

            //bruteforce
            while (oddp > 0 && oddp %2 ==0){
            k++;
            oddp/=2;
        }
        n=oddp+k;
        }
        else {
            n=n/2;
        }
    } while (n>=10);
    if (n%2==0) printf("y\n");
    else printf("n\n");
}
int main(){
	long long t;
    scanf("%lld",&t);
    while (t--){
        solve();
    }
    return 0;
}
