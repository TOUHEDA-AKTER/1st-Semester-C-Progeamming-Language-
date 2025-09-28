
#include<stdio.h>
#include<string.h>
#include<ctype.h>

    int calculatelovepercentage( char name1[], char name2[]){
    int sum1 = 0,sum2 = 0;
    for(int i = 0;name1[i]!='\0';i++){
        if(isalpha(name1[i])){
                sum1 += tolower(name1[i]);
                }

}
    for(int i = 0;name2[i]!='\0';i++){
        if(isalpha(name2[i])){
                sum2+= tolower(name1[i]);
                }
    }
    int totalsum = sum1 + sum2;
    int lovepercentage = (totalsum % 100) + 1;
    return lovepercentage;
    }
int main(){
    char name1[100],name2[100];
    printf("enter the first name:");
    fgets(name1,sizeof(name1),stdin);
    name1[strcspn(name1,"\n")]='\0';
    printf("enter the second name:");
    fgets(name2,sizeof(name2),stdin);
    name2[strcspn(name2,"\n")]='\0';
    int lovepercentage = calculatelovepercentage(name1,name2);
    printf("the lovepercentage between %s and %s is: %d\n",name1,name2,lovepercentage);
    return 0;
}
