/*生成libhello.so*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <fcntl.h>
 
 
int hook_entry(char * a)
{
    printf("Hook success, pid = %d\n", getpid());
    printf("Hello %s\n", a);
    return 0;
}