#include<stdio.h>
int main()
{   //print all odd no 5 to 50

    for(int i=5;i<=50;i++){

        if(i%2==0){
            continue;
        }
        printf("%d\n",i);
    }
    printf("end");
}

