#include <stdio.h>
#include <math.h>
//binary searching 
//https://codeforces.com/problemset/problem/474/B
int main(){
	int n;
	scanf("%d",&n);
	int a[n+1];
	for (int i=1;i<=n;i++) scanf("%d",&a[i]);
	
	int m;
	scanf("%d",&m);
	int q[m+1];
	for (int i=1;i<=m;i++) scanf("%d",&q[i]);
	
	//cong don bien vd 2 7 3 4 9 thi se la 2 2+7 2+7+3 ..
	int prefix[n+1];
	prefix[1]=a[1];
	for (int i=2;i<=n;i++){
		prefix[i]=a[i]+prefix[i-1];
	}
	
	
	//binary searching kieu vd chia doi mang cho de tim cang chia nho thi tim gia tri cang de
	
	for (int i=1;i<=m;i++){
		int low=1, high=n;
		int ans=1;
		
		while(low<=high){

		int mid=low+(high-low)/2;
		if (q[i]<=prefix[mid]){
			ans=mid;
			high=mid-1;
		}
		else {
			low=mid+1;
		}
	}
	printf("%d\n",ans);
}
return 0;
}

