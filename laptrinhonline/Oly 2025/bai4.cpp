#include <stdio.h>
#include <stdbool.h> // check ham true/false
#include <math.h>
//(Parameters) va (Arguments)
bool check(long long T, int n,int a[],long long m){
    long long songuoi=0; 

    //duyen qua n cai ban pvan
    for (int i=0;i<n;i++){
    //vd neu T=100p va a[i]=7p/1ng
    //thi ban nay phong van dc so nguoi la 100/7=14(lay phan nguyen)
    songuoi +=T/a[i];

    //neu songuoi>=m thi khong can dem nua
    if (songuoi>=m){
        return true;
    }
}
//sau khi duyet het cac ban kiem tra lai lan nua
if (songuoi>=m){
    return true;
}
else {
    return false;
}
}




int main(){
    int n;
    long long m;
    scanf("%d%lld",&n,&m);


    int a[n];
    for (int i=0;i<n;i++) scanf("%d",&a[i]);

    //dung binary searching

    long long low=0;
    long long high=1e18;
    long long ans=high;

    //vong lap doan
    while (low<=high){
        long long mid=low+(high-low)/2; //doan so o giua
        /*thay vi dung (high+low)/2 se gay ra hien tuong tran so
        nen ta dung cach la (high-low+2low)/2=low+(high-low)/2 se khong 
        gay tran so day la mot trick
        */
    
    if (check(mid,n,a,m)==true){
        //doan dung
        ans=mid;
        high=mid-1;
    }
    else {
        //doan sai
        low=mid+1;
        }
    }
    printf("%lld\n",ans);
    return 0;
}
