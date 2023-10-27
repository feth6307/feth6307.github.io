#include <stdio.h>
#include <stdlib.h>
int cal();
int main()
{
    while(1){
        printf("是否繼續計算?(是:輸入1 否:輸入0)\n");
        int option = -1;
        scanf("%d", &option);
        if(option == 1){
            cal();
        }
        else{
            break;
        }        
    }
    system("break");
}

int cal()
{
    float basic=208, bonus;
    int current, target, day;
    printf("請輸入當前分數\n");
    scanf("%d", &current);
    printf("請輸入目標分數\n");
    scanf("%d", &target);
    printf("請輸入加成(10%%輸入:10)\n");
    scanf("%f", &bonus);
    printf("請輸入剩餘天數(跳過請輸入-1)\n");
    scanf("%d", &day);
    
    if(day<=0){
        printf("%f\n", basic);
        printf("%f\n", bonus);
        printf("%f\n", basic*(1+0.01*bonus));
     
        printf("還需要碎%5.2f石才能達到%d分\n", (target-current)/(basic*(1+0.01*bonus))*45*2.5, target);
    }
    else if (day>0){
        int recover = day*24*60/5;
        printf("計算自然回體後，最多還需要碎%5.2f石才能達到%d分\n", ((target-current)/(basic*(1+0.01*bonus))*45-recover)*2.5, target);
    }
    
    return 0;
}
