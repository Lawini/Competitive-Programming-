#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    int n;
    scanf("%d",&n);

    char names[1001][33]; //so ghi ten
    int counts[1001]; //so ghi dem
    int db_size=0; //so dong da ghi trong so

    while (n--){
        char name[33];
        scanf("%s", name);

        int found=0; //gan co de danh xem da tim thay chua
        int found_index=-1; // vi tri dong thu may
        //thuat toan tim xem da thay chua
        for (int i=0;i<db_size;i++){
        if (strcmp(names[i], name)==0){
            found=1;
            found_index=i;
            break;
        }
    }     

    //in ra ket qua
        if (found==1){
            int k=counts[found_index];
            printf("%s%d\n", names[found_index],k);
            counts[found_index]++;
        }
        else {
            printf("OK\n");
            strcpy(names[db_size], name);
            counts[db_size]=1;
            db_size++;
        }
    }
    return 0;
}

