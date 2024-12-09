#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>

#define swap(x, y) x=x+y;y=x-y;x=x-y
#define BIT3 (0x1 << 3)

int a;

void set_bit3(void)
{
    a |= BIT3;
}

void clear_bit3(void)
{
    a &= ~BIT3;
}

int strlen(char *str)
{
    if(str == NULL){
        printf("str is NULL!");
        return 0;
    }
    int len = 0;
    while((*str++) != '\0')
    {
        len++;
    }
    return len;
}

char* strcpy(char *dest, char *src){

    char *ret = dest;

    if(src == NULL){
        printf("str is NULL!");
        return NULL;
    }

    while ((*dest++ = *src++) != '\0');
    return ret;
} 

int main(void)
{
    int len = 0;
    char a[] = "123456789";
    char b[] = "";
    len = strlen(a);
    strcpy(b, a);
    printf("the size of str = %d", len);
    return 0;
}