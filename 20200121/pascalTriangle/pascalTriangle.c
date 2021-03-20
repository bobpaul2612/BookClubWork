#include<stdio.h>

void printPascalTriangle(int high){
    for(int i = 0; i < high; ++i){
        int val = 1;
        int row = i;
        int col = 1;
        
        // Add space
        for(int k = high-i; k > 1; --k){
            printf("       ");
        }

        // Calculate the value in this position
        for(int j = 0; j <= i; ++j){
            printf("%8d      ", val);
            val = val * row / col;
            --row; ++col;  
        }
        printf("\n");
    }
}

int main(){
    int high = -1;
    while(high != 0){
        printf("Please input the high of pascal's triangle\n");
        printf("(or input 0 to exit)\n");
        printf("Only can input 1 ~ 30 : ");
        scanf("%d", &high);
        if(high < 1 || high > 30){
            printf("range error!, only can input 1 ~ 30");
            continue;
        }else if(high != 0){
            printPascalTriangle(high);
        }
    }
    
    printf("The process termination\n\n");

    return 0;
}
