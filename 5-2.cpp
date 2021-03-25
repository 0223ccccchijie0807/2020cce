#include <stdio.h>
int main ()
{
    char line[10] = "decline";
    char line2[10]= {'p', 'r', 'o', 'p', 'e', 'r', '\0'};///"proper";
    printf("%s\n", line);
    printf("%s\n", line2);

    char line3[]="majority這是好的、沒問題的，要多長有多長";
    char line4[]={'m','a','j','o','r','i','t','y'};///結尾要\0 這是錯誤的這樣寫會亂跑
    printf("%s\n", line3);
    printf("你相信嗎? 這是line4:==%s\n", line4);
}
