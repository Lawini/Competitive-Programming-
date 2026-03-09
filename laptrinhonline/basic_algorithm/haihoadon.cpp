#include <stdio.h>
#include <math.h>
#include <string.h>
//mang danh dau gia trin
    int bills[]={2,5,10,20,50,100};
    int num_bills=6;

    
int main(){
    // num[x]=1 tuc la co the tao ra 
    // num [x]=0 tuc la khong the tao ra
    int num[151]={0};

    for (int i = 0; i < num_bills ; ++i){
        for (int j = i + 1; j < num_bills; ++j ){
            int sum=bills[i]+bills[j];
            //danh dau tong nay la possible 
            num[sum]=1;
        }
    }
    int n,m;
    while (scanf("%d%d",&n,&m)==2 && (n != 0 || m != 0 )){
        int change = m -n;

    if (change >= 0 && change <= 150 && num[change] == 1)
    {
        printf("possible\n");
    }
    else {
        printf("impossible\n");
    }
    }
}
