#include <stdio.h>
#include<stdbool.h>
void reverse(long long a[], int start ,int end){
    while (start<end){
        long long temp=a[start];
        a[start]=a[end];
        a[end]=temp;

    //di chuyen ca 2 con tro 
    start++;
    end--;
    }
}
int main(){
    long long n,k;   
    scanf("%lld%lld",&n,&k);

    long long  a[n];
    for(int i=0;i<n;i++) scanf("%lld",&a[i]);


    for (int i=0;i<n;i+=k){
        int start =i;
        int end=i+k-1;


        //case nhom cuoi
        if(end>=n){
            end=n-1;
        }
        reverse(a,start,end);
    }
    for (int i=0;i<n;i++) printf("%lld ",a[i]);



}