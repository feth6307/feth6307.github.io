#include <stdio.h>
#include <stdlib.h>
int cal();
int main()
{
    while(1){
        printf("�O�_�~��p��?(�O:��J1 �_:��J0)\n");
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
    printf("�п�J��e����\n");
    scanf("%d", &current);
    printf("�п�J�ؼФ���\n");
    scanf("%d", &target);
    printf("�п�J�[��(10%%��J:10)\n");
    scanf("%f", &bonus);
    printf("�п�J�Ѿl�Ѽ�(���L�п�J-1)\n");
    scanf("%d", &day);
    
    if(day<=0){
        printf("%f\n", basic);
        printf("%f\n", bonus);
        printf("%f\n", basic*(1+0.01*bonus));
     
        printf("�ٻݭn�H%5.2f�ۤ~��F��%d��\n", (target-current)/(basic*(1+0.01*bonus))*45*2.5, target);
    }
    else if (day>0){
        int recover = day*24*60/5;
        printf("�p��۵M�^���A�̦h�ٻݭn�H%5.2f�ۤ~��F��%d��\n", ((target-current)/(basic*(1+0.01*bonus))*45-recover)*2.5, target);
    }
    
    return 0;
}
