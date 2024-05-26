// #include<stdio.h>
// declaring structures
// struct {
//     char *name;
// }name1,name2;
// int main(){
// name1.name="mugisha";
// name2.name="pascal";
// printf("%s",name1.name);
// printf("%s",name2.name);
// return 0;
// }

// structures with function(external)
// #include <stdio.h>
// struct {
//     char *name;
//     int age;
// }student1,student2;

// int student3(){
//     struct{
//         char *name;
//         int age;
//     }student3;
//     student3.name="kal";
//     student3.age=30;
//     if(student3.age>10){
//         printf("age is perfect");
//     }
//     else{
//         printf("the age is low");
//     }
//     return 0;
// }
// int main(){
//     student1.age=23;
//     printf("\t%d , %d",student1.age,student3());
// return 0;
// }

//using structure
// #include<stdio.h>
// struct class{
//     char *name;
//     int marks;
// };
// int student3(){
// struct class student3;
// student3.name="kali";
// student3.marks=20;
// printf("%d",student3.marks);
// return 0;
// }
// int main(){
//     struct class student1;
//     student1.name="kal";
//     student1.marks=15;
//     printf("the name is : %s and the marks are : %d\n",student1.name,student1.marks);
//     printf("\t%s",student3());
//     return 0;
// }

//typedef usage
// #include<stdio.h>
// typedef char *chari;
// int main(){
//     chari var ="pascal";
//     printf("%s",var);
// return 0;
// }

// using typedef with structures
// #include<stdio.h>
// typedef struct class{
//     char *name;
//     int marks;
// }student1;
// int main(){
//     student1 student2;
//     student2.name="kal";
//     printf("%s ",student2.name);
//     return 0;
// }

// initialising and accessing structure members
// #include<stdio.h>
// struct numy{
//     int num1;
//     int num2;
// };
// int main(){
//    struct numy struct1={1,2};
//     printf("%d , %d",struct1.num1,struct1.num2);
//     return 0;
// }

// designated initialisation
// #include<stdio.h>
// struct numy{
// int num1;
// int num2;
// };
// int main(){
//     struct numy numx={.num2=2,.num1=1};
//     printf("%d %d",numx.num1,numx.num2);
//     return 0;
// }

// array of structures
// #include <stdlib.h>
// #include<stdio.h>
// struct class{
//     char *name;
//     int marks;
// };
// int main(){
// int i;
// struct class ar[2];
// for(i=0;i<2;i++){

//     printf("student %d name is : ",i+1);
//     // ar[i].name = malloc(sizeof(char) * 100);
//     scanf("%s",&ar[i].name);
//     printf("student %d marks is : ",i+1);
//     scanf("%u",&ar[i].marks);
    
// }
// int j;
// for(j=0;j<2;j++){
//     printf("the student %d info is :\n",j+1);
//     printf("name: %s \n marks: %d\n",ar[j].name,ar[j].marks);
// }
// // int s;
// // for(s=0;s<2;s++){
// //     free(ar[s].name);
// // };
//  return 0;
// }

// pointers to structures
// #include<stdio.h>
// struct class{
//     char *name;
//     int marks;
// };
// int main(){
//     struct class student={"pascal",32};
//     struct class *ptr=&student;
//     printf("%d %d",ptr->name,ptr->marks);
//     printf("%d",(*ptr).name);
//     return 0;
// };

// // comparison of structure variables
// #include<stdio.h>
// #include <stdbool.h>
// struct numbers{
//     int x;
//     int y;
// }p1,p2;
// bool ifequal(struct numbers p2,struct numbers p4){
//     return (p4.x == p2.x)&&(p2.y == p4.y);
// }
// int main(){
//    struct numbers p1={1,2};
//    struct numbers p3={1,2};
// //    this cant compile
//     // if (p1 == p3){
//     //     printf("they are equal");
//     // }else{
//     //     printf("they are not equal");
//     // };

// // this can compile
// if (ifequal(p1,p3)){
//     printf("they are equal");
// }else{
//     printf("they are not equal");
// }
//     return 0;
// }

// // call by reference with structures
// #include<stdio.h>
// struct numbers{
// int x;
// int y;
// };
// void printing(int *x){
//     *x += 1;
//     printf("%d",*x);
// }
// int main(){
//     struct numbers group1;
//     group1.x=5;
//     printing(&group1.x);
//     printf("%d",group1.x);
//     return 0;
// }

