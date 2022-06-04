#include<stdio.h>
char l1[9]={'1','2','3','4','5','6','7','8','9'},a;
int count=0;
int check(){
    int flag;
    if (l1[0]==l1[1] && l1[1]==l1[2]){
        flag=2;
    }
    if (l1[3]==l1[4] && l1[4]==l1[5]){
        flag=2;
    }
    if (l1[6]==l1[7] && l1[7]==l1[8]){
        flag=2;
    }
    if (l1[0]==l1[4] && l1[4]==l1[8]){
        flag=2;
    }
    if (l1[2]==l1[4] && l1[4]==l1[6]){
        flag=2;
    }
    return flag;
    }
int draw(int N,char a){
    int flag=1;
    if (N==0){
        printf("\n");
        printf("        %c | %c | %c \n",l1[0],l1[1],l1[2]);
        printf("        ---------\n");
        printf("        %c | %c | %c \n",l1[3],l1[4],l1[5]);
        printf("        ---------\n");
        printf("        %c | %c | %c \n",l1[6],l1[7],l1[8]);
    }
    else{
        l1[N-1]=a;
        printf("\n");
        printf("        %c | %c | %c \n",l1[0],l1[1],l1[2]);
        printf("        ---------\n");
        printf("        %c | %c | %c \n",l1[3],l1[4],l1[5]);
        printf("        ---------\n");
        printf("        %c | %c | %c \n",l1[6],l1[7],l1[8]);
    }
    return flag;
}
int value(){
    int flag=1;
    int N=0;
    while (flag==1){
        printf("\nEnter PLAYER 1 :");
        scanf("%d",&N);
        a='X';
        draw(N,a);
        flag=check();
        count=count+1;
        if (count==9){
            printf("(❁´◡`❁)               (❁´◡`❁)");
            printf("        \nTie!!\n");}
        if (flag!=2){
            printf("\nEnter PLAYER 2 :");
            scanf("%d",&N);
            a='O';
            draw(N,a);
            flag=check();
            count=count+1;
            }
    }
    if (flag==2){
        if (a=='O'){
            printf("Player 2 WINS");
        }
        if (a=='X'){
            printf("Player 1 WINS");
        }
    }
}
int main(){
    printf("\n       TIC TAC TOE - 3 x 3        \n");
    printf("\nPlayer 1 - X        Player 2 - O\n");
    int N=0;
    a='n';
    draw(N,a);
    value();
}