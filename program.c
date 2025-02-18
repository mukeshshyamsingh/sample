#include<stdio.h>

int main(){
    int size;
    int i;

printf("enter array size/n");
scanf("%d",&size);
int marks[size];
for(i=0;i<size;i++)
{scanf("%d",&marks[i]);
}
printf("array elements are:");
for(i=0;i<size;i++)
{
    printf("%d/t,marks[i]");

}


return 0;
}
