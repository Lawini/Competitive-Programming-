#include<stdio.h>
int check(int m1, int n1, int m2, int n2){
	int s1=0;
	int s2=0;
	
	if (m1>n1) s1++;
	else if (m1<n1) s2++;
	
	if (m2>n2) s1++;
	else if (m2<n2) s2++;
	
	if (s1>s2) return 1;
	return 0;
}
void solve(){
	int a[2], b[2];
	scanf("%d%d%d%d",&a[0],&a[1],&b[0],&b[1]);
	
	int total=0;
	if (check(a[0],b[0], a[1],b[1])) total++;
	if (check(a[1],b[0], a[0],b[1])) total++;
	if (check(a[0],b[1], a[1],b[0])) total++;
	if (check(a[1],b[1], a[0],b[0])) total++;
	
	printf("%d\n",total);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		solve();
	}
	return 0;
	
	
}
