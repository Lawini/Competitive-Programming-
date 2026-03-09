#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void solve(){
	long long r,c;
	scanf("%lld%lld",&r,&c);
	
	
	long long ans;
	long long m=(r>c ? r:c);
	int digonal=(m*m)-(m-1);
	
	
	if (m%2==0){
		if (r==m) ans =m*m-(c-1);
		else ans=(m-1)*(m-1)+r;
	}
	else {
        if (c==m) ans = m*m - (r-1);
        else ans = (m-1)*(m-1) + c;
    }
	printf("%lld\n",ans);

}

int main() {
	int t;
	scanf("%d",&t);
	while (t--) {
	solve();
	}
	return 0;
}
