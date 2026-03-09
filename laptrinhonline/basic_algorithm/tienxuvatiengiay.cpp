#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    float n;
    scanf("%f",&n);
    int total=(int) (n*100+0.5);//doi ve cent tuc cho de va 0.5 de tranh sai so
    int giay[] ={10000,5000, 2000, 1000,500,200}; //khai bao mang
    int xu[] ={100,50,25,10,5,1};
    printf("Tien giay:\n"); //tien giay 
    for(int i=0; i<6;i++)
    {
    	int count=total/giay[i];
    	total%=giay[i];//lay phan du
    	printf("%d to R$ %.2f\n",count,giay[i]/100.0);
	}
   printf("Tien xu:\n");
   for (int i=0;i<6;i++){
   	int count=total/xu[i];
   	total%=xu[i];
   	printf("%d dong xu R$ %.2f\n",count,xu[i]/100.0);//chia 100 de tra lai don vi cu
   }
    return 0;
}

    
