#include<stdio.h>
#include<math.h>
int main(){
	long n;
	scanf("%ld",&n);
	
	int count[5]={0};
	
	for (int i=0;i<n;i++){
		int grsize;
		scanf("%d",&grsize);
		count[grsize]++; //dem xem co bao nhieu phan tu
		//vd 1 1 1 2 2 3 3 4 4 
		//count[1]=3 count[2]=2 count[3]=2 count[4]=2
	}
	
	int total=0;
	
	total+=count[4]; //total+=2 total=2
	total+=count[3]; //total+=2 total=4
	//nhet nhom 1 ng vao nhom 3
	count[1]-=count[3]; // count1=count1-count3=3-2=1

	total+=count[2]/2; //count2=2/2=1 total+=1 total=5
	int left=count[2]%2; 
	if (left==1) //nhom 2 nguoi bi le ra 1 nhom 2 ng
	{
		total+=1;
		if (count[1]>0){
			count[1]-=2;
		}
	}
	if(count[1]>0) 
	total+=(count[1]+3)/4; //(1+3)/4=1 chiec nx suy ra total=6
	printf("%d",total);
}

