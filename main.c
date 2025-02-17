#include "ft_printf.h"
#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    i =printf("real -> %p str -> %s\n", (void *)NULL,"string");
    j=ft_printf("real -> str -> %s %c\n", "string",'a');
    return 0;
}
