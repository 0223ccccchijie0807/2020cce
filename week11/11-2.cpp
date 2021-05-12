#include <stdio.h>
typedef struct data
{
   char c;
   int ans;

}DATA;
///struct data listA;
DATA listA;

int main ()
{
    listA.c='A';
    listA.ans=1;

    printf("%c %d\n",listA.c,listA.ans);

}
