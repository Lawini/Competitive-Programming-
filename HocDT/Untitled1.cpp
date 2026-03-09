#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <time.h>
#include <string.h>
#define ll long long
#define N 200005 
long long max_val(long long a, long long b) { return (a > b) ? a : b; }
long long min_val(long long a, long long b) { return (a < b) ? a : b; }
long long my_abs(long long a) { return (a < 0) ? -a : a; }


int sort(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
//DE BAI 
// cho n cong viec, moi cong viec se co tgian bat dau va ket thuc, goi la s[i] va e[i] ( 0 <= s[i],e[i] <= 100) mot nguoi lam viec tu 0h -> 100h. Hoi nguoi do se 
// lam dc nhieu nhat bao nhieu cong viec, biet tai moi tdiem ng do chi lam dc 1 cong viec
void solve(){
	
    int n;
    scanf ("%d",&n);
    
    int a[n][2];
    for (int i = 0; i < n; i++){
    	for (int j = 0; j < 2; j++){
    		scanf ("%d",&a[i][j]);
		}
	}
	
	int id;
	for (int i = 0; i < n - 1; i++){
		id = i;
		for (int j = i + 1; j < n; j++){
			if (a[j][1] < a[id][1]){
				id = j;
			}
		}
		int temp=a[i][0];
		a[i][0]=a[id][0];
		a[id][0]=temp;
		
		
	    int temp2=a[i][1];
	    a[i][1]=a[id][1];
	    a[id][1]=temp2;   
	}
//	for (int i = 0; i < n; i++){
//    	for (int j = 0; j < 2; j++){
//    		printf("%d",a[i][j]);
//		}
//		printf("\n");
//	}
//}

	int count = 1;
    int L = a[0][1]; 
    
    for (int i = 1; i < n; i++){
        if (a[i][0] >= L){ 
            count++;
            L = a[i][1]; 
        }
    }
    
    printf("%d\n", count);
}



    
void output(){
	
}
int main(){
	
	clock_t start = clock();
	
	
	
	
	
	//	freopen("CAU5.INP", "r", stdin);
	//  freopen("CAU5.OUT", "w", stdout);
    
	
	//Coding
	int t = 1;
    //scanf("%d",t);
    while(t--){
    solve();
    }
    
    
    
    
    
    
    
    
    
    
    
    clock_t end = clock();
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    fprintf(stderr, "\nTime: %.3f seconds\n", time_taken);
}
