#include <stdio.h>
int main ()
{
    char line[10] = "decline";
    char line2[10]= {'p', 'r', 'o', 'p', 'e', 'r', '\0'};///"proper";
    printf("%s\n", line);
    printf("%s\n", line2);

    char line3[]="majority�o�O�n���B�S���D���A�n�h�����h��";
    char line4[]={'m','a','j','o','r','i','t','y'};///�����n\0 �o�O���~���o�˼g�|�ö]
    printf("%s\n", line3);
    printf("�A�۫H��? �o�Oline4:==%s\n", line4);
}
