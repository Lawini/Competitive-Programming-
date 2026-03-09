#include<stdio.h>
#include<string.h>
int N;
char hoanvi[14];
int count[128]; //mang dem tan suat 26 ky tu(128 cho an toan)

void result(){
    for (int i=1;i<=N;i++)
    printf("%c",hoanvi[i]);
    printf("\n");
}
void test (int slot){
   if (slot==N+1){
    result();
    return;
   }


   for (char kytu='A'; kytu<='Z';kytu++){
        if(count[kytu]>0){
            hoanvi[slot]=kytu;
            count[kytu]--;

        test(slot+1);
        count[kytu]++;
        }


   }
    

}


int main(){
    /*xem trong kho no co bao nhieu vien gach
    vs input AAB
    thì count lúc đầu=0 hết 
    rồi count['A']=++ là =2 count['B']=1; roi chay test 
    */
    char input[14];
    scanf("%s",input);
    N=strlen(input);

    for (int i=0;i<128;i++){
        count[i]=0;
    }
    //dem tan suat ky tu trong chuoi input
    for (int i=0;i<N;i++){
        count[input[i]]++;
    }
    test(1);
    return 0;
}