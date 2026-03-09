#include<stdio.h>
void solve(){
	int x[2],y[2];
	scanf("%d%d%d%d",&x[0],&x[1],&y[0],&y[1]);
	int wincase=0;
	for (int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			int m=0;
			int n=0;

			if(x[i]>y[j]) m++; 
			else if(x[i]<y[j]) n++;

			int m_conlai =x[1-i];
			int n_conlai=y[1-j];

			if (m_conlai>n_conlai) m++;
			else if (m_conlai<n_conlai) n++;

			if (m>n){
				wincase++;
			}
		}
	}
	printf("%d\n",wincase);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		solve();
	}
	return 0;
}
