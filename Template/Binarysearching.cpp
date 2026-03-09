#include<stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) scanf("%d",&a[i]);

    int x;
    scanf ("%d",&x);

    int L=0;
    int R=n-1;
    int first=-1;
    int last=-2;
    while(L<=R){
        int mid=L+(R-L)/2;  

        if (a[mid]==x) {
            first=mid;
            R=mid-1;
        }
        else if (a[mid]>x){ 
            R=mid-1;
        }
        else{
            L=mid+1;
        }
    }
     while(L<=R){
        int mid=L+(R-L)/2;  

        if (a[mid]==x) {
            last=mid;
            L=mid+1;
        }
        else if (a[mid]>x){ 
            R=mid-1;
        }
        else{
            L=mid+1;
        }
    }
    if (last!=-2 && first!=-1)
    printf("Xuat hien so lan trong day la %d",last-first+1);
}