// //memory analysis
// #include<stdio.h>
// union numbers{
//     int x;
//     int y;
//     char *name;
// };
// int main(){
// union numbers num;
// num.x=2;
// num.y=3;
// num.name="pas";
// union numbers *ptr=&num;
// printf("%d and %d and %d",ptr->x,ptr->y,ptr->name);
// return 0;
// }