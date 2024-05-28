#include<stdio.h>
#include<string.h>
int main(){
    // //creating a file
    // FILE *fpointer;
    // fpointer=fopen("file1.txt","w");
    // fclose(fpointer);
    // return 0;

//     //adding a character to a file
//     FILE *fpointer;
//     fpointer=fopen("file1.txt","w");
//     int i;
//     char text[25]="inputing a file";
//     int length=strlen(text);
//     for(i=0;i<length;i++){
// fputc(text[i],fpointer);
//     };
//     fclose(fpointer);

// // adding a string into the file
// FILE *fpointer;
// fpointer=fopen("file2.txt","w");
// char text[30];
// printf("enter a string you want to put in the file :");
// gets(text);
// fputs(text,fpointer);
// fclose(fpointer);


// fprintf method in c
FILE *fpointer;
fpointer=fopen("file3.txt","w");
int age;
char name[30];
printf("enter your name and age :");
scanf("%s\t%d",&name,&age);
fprintf(fpointer,"%s\t%d",name,age);
fclose(fpointer);
    return 0;
}