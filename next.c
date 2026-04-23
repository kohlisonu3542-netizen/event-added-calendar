
#include <stdio.h>
#include<string.h>
int main() {
    int year;
    printf("ENTER YOUR YEAR :");
    scanf("%d",&year);
    if(year==2025){
    int month;
    printf("ENTER YOUR MONTH 1 TO 12 :");
    scanf("%d",&month);
    switch(month){
        case 1 : printf("\t----------JANUARY----------");
        printf("\n");
        printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
        int day[5][7]={{30,31,1,2,3,4,5},{6,7,8,9,10,11,12},{13,14,15,16,17,18,19},{20,21,22,23,24,25,26},{27,28,29,30,31,1,2}};
        for(int i=0;i<5;i++){
            for(int a=0;a<7;a++){
                printf("%d\t",day[i][a]);
            }
            printf("\n");
        }
        int option;
       printf("PRESS 1 FOR ADD EVENT :");
       scanf("%d",&option);
       printf("\n");
       if(option==1){
        char event[100];
        printf("ENTER YOUR EVENT DATE AND TEXT:");
        scanf("%s",&event);
        printf("EVENT ADD SUCCESSFULLY : %s",event);
            printf("\n");
            int check;
            printf("PRESS 2 FOR CHECK EVENT :");
            scanf("%d",&check);
            if(check==2){
                printf("1 EVENT ON : %s",event);
            }
        }
        break;
         case 2 : printf("\t----------FEBRURY----------\t");
        printf("\n");
        printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
        int s[5][7]={{27,28,29,30,31,1,2},{3,4,5,6,7,8,9},{10,11,12,13,14,15,16},{17,18,19,20,21,22,23},{24,25,26,27,28,1,2}};
        for(int h=0;h<5;h++){
            for(int j=0;j<7;j++){
                printf("%d\t",s[h][j]);
            }
            printf("\n");
        }
        int option1;
       printf("PRESS 1 FOR ADD EVENT :");
       scanf("%d",&option1);
       printf("\n");
       if(option1==1){
        char event[100];
        printf("ENTER YOUR EVENT DATE AND TEXT:");
        scanf("%s",&event);
        printf("EVENT ADD SUCCESSFULLY : %s",event);
            printf("\n");
            int check;
            printf("PRESS 2 FOR CHECK EVENT :");
            scanf("%d",&check);
            if(check==2){
                printf("1 EVENT ON : %s",event);
            }
        }
        break;
        case 3 : printf("\t----------MARCH----------\t");
        printf("\n");
        printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
        int o[6][7]={{24,25,26,27,28,1,2},{3,4,5,6,7,8,9},{10,11,12,13,14,15,16},{17,18,19,20,21,22,23},{24,25,26,27,28,29,30},{31,1,2,3,4,5,6}};
        for(int q=0;q<6;q++){
            for(int w=0;w<7;w++){
                printf("%d\t",o[q][w]);
            }
            printf("\n");
        }
        int option2;
       printf("PRESS 1 FOR ADD EVENT :");
       scanf("%d",&option2);
       printf("\n");
       if(option2==1){
        char event[100];
        printf("ENTER YOUR EVENT DATE AND TEXT:");
        scanf("%s",&event);
        printf("EVENT ADD SUCCESSFULLY : %s",event);
            printf("\n");
            int check;
            printf("PRESS 2 FOR CHECK EVENT :");
            scanf("%d",&check);
            if(check==2){
                printf("1 EVENT ON : %s",event);
            }
        }
        break;
        case 4 : printf("\t----------APRIL----------\t");
        printf("\n");
        printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
        int p[5][7]={{31,1,2,3,4,5,6},{7,8,9,10,11,12,13},{14,15,16,17,18,19,20},{21,22,23,24,25,26,27},{28,29,30,1,2,3,4}};
        for(int r=0;r<6;r++){
            for(int e=0;e<7;e++){
                printf("%d\t",p[r][e]);
            }
            printf("\n");
        }
        int option3;
       printf("PRESS 1 FOR ADD EVENT :");
       scanf("%d",&option3);
       printf("\n");
       if(option3==1){
        char event[100];
        printf("ENTER YOUR EVENT DATE AND TEXT:");
        scanf("%s",&event);
        printf("EVENT ADD SUCCESSFULLY : %s",event);
            printf("\n");
            int check;
            printf("PRESS 2 FOR CHECK EVENT :");
            scanf("%d",&check);
            if(check==2){
                printf("1 EVENT ON : %s",event);
            }
        }
        break;
        case 5 : printf("\t----------MAY----------\t");
        printf("\n");
        printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
        int t[5][7]={{28,29,30,1,2,3,4},{5,6,7,8,9,10,11},{12,13,14,15,16,17,18},{19,20,21,22,23,24,25},{26,27,28,29,30,31,1}};
        for(int y=0;y<6;y++){
            for(int u=0;u<7;u++){
                printf("%d\t",t[y][u]);
            }
            printf("\n");
        }
        int option4;
       printf("PRESS 1 FOR ADD EVENT :");
       scanf("%d",&option4);
       printf("\n");
       if(option4==1){
        char event[100];
        printf("ENTER YOUR EVENT DATE AND TEXT:");
        scanf("%s",&event);
        printf("EVENT ADD SUCCESSFULLY : %s",event);
            printf("\n");
            int check;
            printf("PRESS 2 FOR CHECK EVENT :");
            scanf("%d",&check);
            if(check==2){
                printf("1 EVENT ON : %s",event);
            }
        }
        break;
        case 6 : printf("\t----------JUNE----------\t");
        printf("\n");
        printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
        int z[6][7]={{26,27,28,29,30,31,1},{2,3,4,5,6,7,8},{9,10,11,12,13,14,15},{16,17,18,19,20,21,22},{23,24,25,26,27,28,29},{30,1,2,3,4,5,6}};
        for(int x=0;x<6;x++){
            for(int c=0;c<7;c++){
                printf("%d\t",z[x][c]);
            }
            printf("\n");
        }
        int option5;
       printf("PRESS 1 FOR ADD EVENT :");
       scanf("%d",&option5);
       printf("\n");
       if(option5==1){
        char event[100];
        printf("ENTER YOUR EVENT DATE AND TEXT:");
        scanf("%s",&event);
        printf("EVENT ADD SUCCESSFULLY : %s",event);
            printf("\n");
            int check;
            printf("PRESS 2 FOR CHECK EVENT :");
            scanf("%d",&check);
            if(check==2){
                printf("1 EVENT ON : %s",event);
            }
        }
        break;
        case 7 : printf("\t----------JULY----------\t");
        printf("\n");
        printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
        int july[5][7]={{30,1,2,3,4,5,6},{7,8,9,10,11,12,13},{14,15,16,17,18,19,20},{21,22,23,24,25,26,27},{28,29,30,31,1,2,3}};
        for(int ju=0;ju<6;ju++){
            for(int ly=0;ly<7;ly++){
                printf("%d\t",july[ju][ly]);
            }
            printf("\n");
        }
        int option6;
       printf("PRESS 1 FOR ADD EVENT :");
       scanf("%d",&option6);
       printf("\n");
       if(option6==1){
        char event[100];
        printf("ENTER YOUR EVENT DATE AND TEXT:");
        scanf("%s",&event);
        printf("EVENT ADD SUCCESSFULLY : %s",event);
            printf("\n");
            int check;
            printf("PRESS 2 FOR CHECK EVENT :");
            scanf("%d",&check);
            if(check==2){
                printf("1 EVENT ON : %s",event);
            }
        }
        break;
        case 8 : printf("\t----------AUGUST----------\t");
        printf("\n");
        printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
        int au[5][7]={{28,29,30,31,2,3},{4,5,6,7,8,9,10},{11,12,13,14,15,16,17},{18,19,20,21,22,23,24},{25,26,27,28,29,30,31}};
        for(int gu=0;gu<6;gu++){
            for(int st=0;st<7;st++){
                printf("%d\t",au[gu][st]);
            }
            printf("\n");
        }
        int option7;
       printf("PRESS 1 FOR ADD EVENT :");
       scanf("%d",&option7);
       printf("\n");
       if(option7==1){
        char event[100];
        printf("ENTER YOUR EVENT DATE AND TEXT:");
        scanf("%s",&event);
        printf("EVENT ADD SUCCESSFULLY : %s",event);
            printf("\n");
            int check;
            printf("PRESS 2 FOR CHECK EVENT :");
            scanf("%d",&check);
            if(check==2){
                printf("1 EVENT ON : %s",event);
            }
        }
        break;
         case 9 : printf("\t----------SEPTEMBER----------\t");
        printf("\n");
        printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
        int se[5][7]={{1,2,3,4,5,6,7},{8,9,10,11,12,13,14},{15,16,17,18,19,20,21},{22,23,24,25,26,27,28},{29,30,1,2,3,4,5}};
        for(int pt=0;pt<6;pt++){
            for(int em=0;em<7;em++){
                printf("%d\t",se[pt][em]);
            }
            printf("\n");
        }
        int option8;
       printf("PRESS 1 FOR ADD EVENT :");
       scanf("%d",&option8);
       printf("\n");
       if(option8==1){
        char event[100];
        printf("ENTER YOUR EVENT DATE AND TEXT:");
        scanf("%s",&event);
        printf("EVENT ADD SUCCESSFULLY : %s",event);
            printf("\n");
            int check;
            printf("PRESS 2 FOR CHECK EVENT :");
            scanf("%d",&check);
            if(check==2){
                printf("1 EVENT ON : %s",event);
            }
        }
        break;
        case 10 : printf("\t----------OCTOBER----------\t");
        printf("\n");
        printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
        int oc[5][7]={{29,30,1,2,3,4,5},{6,7,8,9,10,11,12},{13,14,15,16,17,18,19},{20,21,22,23,24,25,26},{27,28,29,30,31,1,2}};
        for(int to=0;to<6;to++){
            for(int be=0;be<7;be++){
                printf("%d\t",oc[to][be]);
            }
            printf("\n");
        }
        int option9;
       printf("PRESS 1 FOR ADD EVENT :");
       scanf("%d",&option9);
       printf("\n");
       if(option9==1){
        char event[100];
        printf("ENTER YOUR EVENT DATE AND TEXT:");
        scanf("%s",&event);
        printf("EVENT ADD SUCCESSFULLY : %s",event);
            printf("\n");
            int check;
            printf("PRESS 2 FOR CHECK EVENT :");
            scanf("%d",&check);
            if(check==2){
                printf("1 EVENT ON : %s",event);
            }
        }
        break;
        case 11 : printf("\t----------NOVEMBER----------\t");
        printf("\n");
        printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
        int no[5][7]={{27,28,29,30,31,1,2},{3,4,5,6,7,8,9},{10,11,12,13,14,15,16},{17,18,19,20,21,22,23},{24,25,26,27,28,29,30}};
        for(int ve=0;ve<5;ve++){
            for(int mb=0;mb<7;mb++){
                printf("%d\t",no[ve][mb]);
            }
            printf("\n");
        }
        int option10;
       printf("PRESS 1 FOR ADD EVENT :");
       scanf("%d",&option10);
       printf("\n");
       if(option10==1){
        char event[100];
        printf("ENTER YOUR EVENT DATE AND TEXT:");
        scanf("%s",&event);
        printf("EVENT ADD SUCCESSFULLY : %s",event);
            printf("\n");
            int check;
            printf("PRESS 2 FOR CHECK EVENT :");
            scanf("%d",&check);
            if(check==2){
                printf("1 EVENT ON : %s",event);
            }
        }
        break;
        case 12 : printf("\t----------DECEMBER----------\t");
        printf("\n");
        printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
        int de[5][7]={{1,2,3,4,5,6,7},{8,9,10,11,12,13,14},{15,16,17,18,19,20,21},{22,23,24,25,26,27,28},{29,30,31,1,2,3,4}};
        for(int ce=0;ce<5;ce++){
            for(int mr=0;mr<7;mr++){
                printf("%d\t",de[ce][mr]);
            }
            printf("\n");
    }
    int option11;
       printf("PRESS 1 FOR ADD EVENT :");
       scanf("%d",&option11);
       printf("\n");
       if(option11==1){
        char event[100];
        printf("ENTER YOUR EVENT DATE AND TEXT:");
        scanf("%s",&event);
        printf("EVENT ADD SUCCESSFULLY : %s",event);
            printf("\n");
            int check;
            printf("PRESS 2 FOR CHECK EVENT :");
            scanf("%d",&check);
            if(check==2){
                printf("1 EVENT ON : %s",event);
            }
        }
    break;
}
}
if(year==2026){
int month2026;
printf("ENTER YOUR MONTH 1 TO 12 :");
scanf("%d",&month2026); 
switch(month2026){
    case 1 : printf("\t----------JANUARY----------");
        printf("\n");
        printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
        int day[5][7]={{29,30,31,1,2,3,4},{5,6,7,8,9,10,11},{12,13,14,15,16,17,18},{19,20,21,22,23,24,25},{26,27,28,29,30,31,1}};
        for(int i=0;i<5;i++){
            for(int a=0;a<7;a++){
                printf("%d\t",day[i][a]);
            }
            printf("\n");
        }
        int option;
       printf("PRESS 1 FOR ADD EVENT :");
       scanf("%d",&option);
       printf("\n");
       if(option==1){
        char event[100];
        printf("ENTER YOUR EVENT DATE AND TEXT:");
        scanf("%s",&event);
        printf("EVENT ADD SUCCESSFULLY : %s",event);
            printf("\n");
            int check;
            printf("PRESS 2 FOR CHECK EVENT :");
            scanf("%d",&check);
            if(check==2){
                printf("1 EVENT ON : %s",event);
            }
        }
        break;
         case 2 : printf("\t----------FEBRURY----------\t");
        printf("\n");
        printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
        int s[5][7]={{26,27,28,29,30,31,1},{2,3,4,5,6,7,8},{9,10,11,12,13,14,15},{16,17,18,19,20,21,22},{23,24,25,26,27,28,1}};
        for(int h=0;h<5;h++){
            for(int j=0;j<7;j++){
                printf("%d\t",s[h][j]);
            }
            printf("\n");
        }
        int option1;
       printf("PRESS 1 FOR ADD EVENT :");
       scanf("%d",&option1);
       printf("\n");
       if(option1==1){
        char event[100];
        printf("ENTER YOUR EVENT DATE AND TEXT:");
        scanf("%s",&event);
        printf("EVENT ADD SUCCESSFULLY : %s",event);
            printf("\n");
            int check;
            printf("PRESS 2 FOR CHECK EVENT :");
            scanf("%d",&check);
            if(check==2){
                printf("1 EVENT ON : %s",event);
            }
        }
        break;
        case 3 : printf("\t----------MARCH----------\t");
        printf("\n");
        printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
        int o[6][7]={{23,24,25,26,27,28,1},{2,3,4,5,6,7,8},{9,10,11,12,13,14,15},{16,17,18,19,20,21,22},{23,24,25,26,27,28,29},{30,31,1,2,3,4,5}};
        for(int q=0;q<6;q++){
            for(int w=0;w<7;w++){
                printf("%d\t",o[q][w]);
            }
            printf("\n");
        }
        int option2;
       printf("PRESS 1 FOR ADD EVENT :");
       scanf("%d",&option2);
       printf("\n");
       if(option2==1){
        char event[100];
        printf("ENTER YOUR EVENT DATE AND TEXT:");
        scanf("%s",&event);
        printf("EVENT ADD SUCCESSFULLY : %s",event);
            printf("\n");
            int check;
            printf("PRESS 2 FOR CHECK EVENT :");
            scanf("%d",&check);
            if(check==2){
                printf("1 EVENT ON : %s",event);
            }
        }
        break;
        case 4 : printf("\t----------APRIL----------\t");
        printf("\n");
        printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
        int p[5][7]={{30,31,1,2,3,4,5},{6,7,8,9,10,11,12},{13,14,15,16,17,18,19},{20,21,22,23,24,25,26},{27,28,29,30,1,2,3}};
        for(int r=0;r<6;r++){
            for(int e=0;e<7;e++){
                printf("%d\t",p[r][e]);
            }
            printf("\n");
        }
        int option3;
       printf("PRESS 1 FOR ADD EVENT :");
       scanf("%d",&option3);
       printf("\n");
       if(option3==1){
        char event[100];
        printf("ENTER YOUR EVENT DATE AND TEXT:");
        scanf("%s",&event);
        printf("EVENT ADD SUCCESSFULLY : %s",event);
            printf("\n");
            int check;
            printf("PRESS 2 FOR CHECK EVENT :");
            scanf("%d",&check);
            if(check==2){
                printf("1 EVENT ON : %s",event);
            }
        }
        break;
        case 5 : printf("\t----------MAY----------\t");
        printf("\n");
        printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
        int t[5][7]={{27,28,29,30,1,2,3},{4,5,6,7,8,9,10},{11,12,13,14,15,16,17},{18,19,20,21,22,23,24},{25,26,27,28,29,30,31}};
        for(int y=0;y<6;y++){
            for(int u=0;u<7;u++){
                printf("%d\t",t[y][u]);
            }
            printf("\n");
        }
        int option4;
       printf("PRESS 1 FOR ADD EVENT :");
       scanf("%d",&option4);
       printf("\n");
       if(option4==1){
        char event[100];
        printf("ENTER YOUR EVENT DATE AND TEXT:");
        scanf("%s",&event);
        printf("EVENT ADD SUCCESSFULLY : %s",event);
            printf("\n");
            int check;
            printf("PRESS 2 FOR CHECK EVENT :");
            scanf("%d",&check);
            if(check==2){
                printf("1 EVENT ON : %s",event);
            }
        }
        break;
        case 6 : printf("\t----------JUNE----------\t");
        printf("\n");
        printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
        int z[6][7]={{1,2,3,4,5,6,7},{8,9,10,11,12,13,14},{15,16,17,18,19,20,21},{22,23,24,25,26,27,28},{29,30,1,2,3,4,5}};
        for(int x=0;x<6;x++){
            for(int c=0;c<7;c++){
                printf("%d\t",z[x][c]);
            }
            printf("\n");
        }
        int option5;
       printf("PRESS 1 FOR ADD EVENT :");
       scanf("%d",&option5);
       printf("\n");
       if(option5==1){
        char event[100];
        printf("ENTER YOUR EVENT DATE AND TEXT:");
        scanf("%s",&event);
        printf("EVENT ADD SUCCESSFULLY : %s",event);
            printf("\n");
            int check;
            printf("PRESS 2 FOR CHECK EVENT :");
            scanf("%d",&check);
            if(check==2){
                printf("1 EVENT ON : %s",event);
            }
        }
        break;
        case 7 : printf("\t----------JULY----------\t");
        printf("\n");
        printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
        int july[5][7]={{29,30,1,2,3,4,5},{6,7,8,9,10,11,12},{13,14,15,16,17,18,19},{20,21,22,23,24,25,26},{27,28,29,30,31,1,2}};
        for(int ju=0;ju<6;ju++){
            for(int ly=0;ly<7;ly++){
                printf("%d\t",july[ju][ly]);
            }
            printf("\n");
        }
        int option6;
       printf("PRESS 1 FOR ADD EVENT :");
       scanf("%d",&option6);
       printf("\n");
       if(option6==1){
        char event[100];
        printf("ENTER YOUR EVENT DATE AND TEXT:");
        scanf("%s",&event);
        printf("EVENT ADD SUCCESSFULLY : %s",event);
            printf("\n");
            int check;
            printf("PRESS 2 FOR CHECK EVENT :");
            scanf("%d",&check);
            if(check==2){
                printf("1 EVENT ON : %s",event);
            }
        }
        break;
        case 8 : printf("\t----------AUGUST----------\t");
        printf("\n");
        printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
        int au[6][7]={{27,28,29,30,31,1,2},{3,4,5,6,7,8,9},{10,11,12,13,14,15,16},{17,18,19,20,21,22,23},{24,25,26,27,28,29,30},{31,1,2,3,4,5,6}};
        for(int gu=0;gu<7;gu++){
            for(int st=0;st<7;st++){
                printf("%d\t",au[gu][st]);
            }
            printf("\n");
        }
        int option7;
       printf("PRESS 1 FOR ADD EVENT :");
       scanf("%d",&option7);
       printf("\n");
       if(option7==1){
        char event[100];
        printf("ENTER YOUR EVENT DATE AND TEXT:");
        scanf("%s",&event);
        printf("EVENT ADD SUCCESSFULLY : %s",event);
            printf("\n");
            int check;
            printf("PRESS 2 FOR CHECK EVENT :");
            scanf("%d",&check);
            if(check==2){
                printf("1 EVENT ON : %s",event);
            }
        }
        break;
         case 9 : printf("\t----------SEPTEMBER----------\t");
        printf("\n");
        printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
        int se[5][7]={{31,1,2,3,4,5,6},{7,8,9,10,11,12,13},{14,15,16,17,18,19,20},{21,22,23,24,25,26,27},{28,29,30,1,2,3,4}};
        for(int pt=0;pt<6;pt++){
            for(int em=0;em<7;em++){
                printf("%d\t",se[pt][em]);
            }
            printf("\n");
        }
        int option8;
       printf("PRESS 1 FOR ADD EVENT :");
       scanf("%d",&option8);
       printf("\n");
       if(option8==1){
        char event[100];
        printf("ENTER YOUR EVENT DATE AND TEXT:");
        scanf("%s",&event);
        printf("EVENT ADD SUCCESSFULLY : %s",event);
            printf("\n");
            int check;
            printf("PRESS 2 FOR CHECK EVENT :");
            scanf("%d",&check);
            if(check==2){
                printf("1 EVENT ON : %s",event);
            }
        }
        break;
        case 10 : printf("\t----------OCTOBER----------\t");
        printf("\n");
        printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
        int oc[5][7]={{29,30,1,2,3,4,5},{6,7,8,9,10,11,12},{13,14,15,16,17,18,19},{20,21,22,23,24,25,26},{27,28,29,30,31,1,2}};
        for(int to=0;to<6;to++){
            for(int be=0;be<7;be++){
                printf("%d\t",oc[to][be]);
            }
            printf("\n");
        }
        int option9;
       printf("PRESS 1 FOR ADD EVENT :");
       scanf("%d",&option9);
       printf("\n");
       if(option9==1){
        char event[100];
        printf("ENTER YOUR EVENT DATE AND TEXT:");
        scanf("%s",&event);
        printf("EVENT ADD SUCCESSFULLY : %s",event);
            printf("\n");
            int check;
            printf("PRESS 2 FOR CHECK EVENT :");
            scanf("%d",&check);
            if(check==2){
                printf("1 EVENT ON : %s",event);
            }
        }
        break;
        case 11 : printf("\t----------NOVEMBER----------\t");
        printf("\n");
        printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
        int no[5][7]={{27,28,29,30,31,1,2},{3,4,5,6,7,8,9},{10,11,12,13,14,15,16},{17,18,19,20,21,22,23},{24,25,26,27,28,29,30}};
        for(int ve=0;ve<5;ve++){
            for(int mb=0;mb<7;mb++){
                printf("%d\t",no[ve][mb]);
            }
            printf("\n");
        }
        int option10;
       printf("PRESS 1 FOR ADD EVENT :");
       scanf("%d",&option10);
       printf("\n");
       if(option10==1){
        char event[100];
        printf("ENTER YOUR EVENT DATE AND TEXT:");
        scanf("%s",&event);
        printf("EVENT ADD SUCCESSFULLY : %s",event);
            printf("\n");
            int check;
            printf("PRESS 2 FOR CHECK EVENT :");
            scanf("%d",&check);
            if(check==2){
                printf("1 EVENT ON : %s",event);
            }
        }
        break;
        case 12 : printf("\t----------DECEMBER----------\t");
        printf("\n");
        printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
        int de[5][7]={{1,2,3,4,5,6,7},{8,9,10,11,12,13,14},{15,16,17,18,19,20,21},{22,23,24,25,26,27,28},{29,30,31,1,2,3,4}};
        for(int ce=0;ce<5;ce++){
            for(int mr=0;mr<7;mr++){
                printf("%d\t",de[ce][mr]);
            }
            printf("\n");
    }
    int option11;
       printf("PRESS 1 FOR ADD EVENT :");
       scanf("%d",&option11);
       printf("\n");
       if(option==11){
        char event[100];
        printf("ENTER YOUR EVENT DATE AND TEXT:");
        scanf("%s",&event);
        printf("EVENT ADD SUCCESSFULLY : %s",event);
            printf("\n");
            int check;
            printf("PRESS 2 FOR CHECK EVENT :");
            scanf("%d",&check);
            if(check==2){
                printf("1 EVENT ON : %s",event);
            }
        }
    break;
}
}
}