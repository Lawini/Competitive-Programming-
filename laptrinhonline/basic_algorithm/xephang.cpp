#include <stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);

    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int max[3]={0,0,0};

        for (int i = 0; i < n; i++) {
        if (a[i] > max[0]) {
            max[2] = max[1];
            max[1] = max[0];
            max[0] = a[i];
        } else if (a[i] > max[1] && a[i] < max[0]) {
            max[2] = max[1];
            max[1] = a[i];
        } else if (a[i] > max[2] && a[i] < max[1]) {
            max[2] = a[i];
        }
    }
    int count=0,count1=0,count2=0;
    for (int i=0;i<n;i++){
    	if (a[i]==max[0]){
    		count++;
		}
		else if (a[i]==max[1]){
			count1++;
		}
		else if (a[i]==max[2]){
			count2++;
		}
	}

    printf("1st: %d\n",count);
     printf("2nd: %d\n",count1);
      printf("3rd: %d\n",count2);
}


