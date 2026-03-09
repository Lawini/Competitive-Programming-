#include <stdio.h>
#include <string.h>

int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    
    char xanh[n][m+1];
    char hong[n][m+1];
    
    //doc du lieu
    for (int i=0;i<n;i++) scanf("%s",xanh[i]);
    for (int i=0;i<n;i++) scanf("%s",hong[i]);
    
    int pl=0;
    
    //duyet qua tung cot
    for (int j=0;j<m;j++){
    	
    	int roxanh[128]={0};
    	int rohong[128]={0};
    	
    	for (int i=0;i<n;i++){
    		roxanh[xanh[i][j]]=1; //danh dau da thay
		}
		for (int i=0;i<n;i++){
			rohong[hong[i][j]]=1; //danh dau da thay
		}
    	
    	int trungnhau=0;
    	for (int k=0;k<128;k++){
    		if (roxanh[k]==1 && rohong[k]==1) {
    		trungnhau=1;
    		break;
    	}
	}
	    if (trungnhau==0){
	    	pl++;
		}
	}
    printf("%d\n",pl);
    return 0;
}
