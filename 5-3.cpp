#include <stdio.h>
int main ()
{
    ///�F�ѫܦh�r��
    char line[5][10] = {"decline","proper","majority","bullet","shop"};
    char *p;
    for(int i=0;i<5;i++)
    {
        p= line[i];
        printf("%s\n", line[i]);
    }
}

