#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<math.h>

#define numLen 4

int main(){
    int num = 0;
    int low = 1, high = 999;

    srand(time(NULL));

    int r = rand() % high + 1;
    printf("Generator ramdom answer success !\n");

    while(num != -1){
        printf("Please input the number you guess\n");
        printf("Or input -1 to exit game\n");
        printf("range(%d ~ %d) : ", low, high);
        scanf("%d", &num);
        if(num < low || num > high){
            printf("range error (%3d ~ %3d)\n", low, high);
            continue;
        }else if(num != -1){
            if(num == r){
                printf("Guess the currect answer !!!\n");
                printf("Game Over !\n");
                break;
            }else if(num > r){
                high = num - 1;
            }else{
                low = num + 1;
            }
        }
    }
    return 0;
}