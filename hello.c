#include <stdio.h>

int main()
{
    /* Compile Error if you write below: */
    /* char a = "Hello"; */
    /* Because char type is a type that stores a character and cannot handle a string.

    /* But how should you write it ? */
    /* Do you create a string with five chars ? */
    char s0 = 'H';
    printf("%c", s0);
    char s1 = 'e';
    printf("%c", s1);
    char s2 = 'l';
    printf("%c", s2);
    char s3 = 'l';
    printf("%c", s3);
    char s4 = 'o';
    printf("%c\n", s4);

    /* Instead, you may use an array. */
    char s[] = {'H','e','l','l','o'};
    printf("%c", s[0]);
    printf("%c", s[1]);
    printf("%c", s[2]);
    printf("%c", s[3]);
    printf("%c\n", s[4]);
    printf("%s\n", s);                     /* s has the address for 'H' and reads until null.*/
    printf("%s\n", s+1);                   /* s has the address for 'e' and reads until null.*/
    printf("%s\n", s+2);                   /* s has the address for 'l' and reads until null.*/
    printf("%s\n", s+3);                   /* s has the address for 'l' and reads until null.*/
    printf("%s\n", s+4);                   /* s has the address for 'o' and reads until null.*/

    /* It is better if you use the pointer. */
    char *ss = "Hello";
    printf("%s\n", ss);                    /* ss has the address for 'H' and reads until null. */
    printf("%s\n", ss+1);                  /* ss has the address for 'e' and reads until null. */
    printf("%s\n", ss+2);                  /* ss has the address for 'l' and reads until null. */
    printf("%s\n", ss+3);                  /* ss has the address for 'l' and reads until null. */
    printf("%s\n", ss+4);                  /* ss has the address for 'o' and reads until null. */

    /* It is same as the above because access to array uses indirection reference via pointer. */
    char sss[] = {"Hello"};
    printf("%s\n", sss);                   /* sss has the address for 'H' and reads until null. */
    printf("%s\n", sss+1);                 /* sss has the address for 'e' and reads until null. */
    printf("%s\n", sss+2);                 /* sss has the address for 'l' and reads until null. */
    printf("%s\n", sss+3);                 /* sss has the address for 'l' and reads until null. */
    printf("%s\n", sss+4);                 /* sss has the address for 'o' and reads until null. */
    printf("%s\n", &sss[0]);               /* sss[0] has the value of 'Hello'. */

    /* If you want to do Hello World, then you may 2D array so that you can add "World" as 2nd element.*/
    /* Please note that "Hello" itsef is already array of char. This is a reason of you should use 2D array. */
    /* [6] means the length of "World" which is larger than "Hello". */
    char sssss[][6] = {"Hello", "World"};
    printf("%s ", *sssss);                 /* sssss has the address for 'H' and reads until null. */ 
    printf("%s\n", *(sssss+1));            /* sssss+1 has the address for 'W' and reads until null. */ 

    /* Instead, you may use pointer for array so that you can add "World" as 2nd element.*/
    char *ssss[] = {"Hello", "World"};
    printf("%s ", *ssss);                  /* ssss behaves like a double pointer. */
    printf("%s\n", *(ssss+1));             /* ssss behaves like a double pointer. */
    printf("%s ", ssss[0]);                /* ssss[0] has the address for 'H' and reads until null. */
    printf("%s\n", ssss[1]);               /* ssss[1] has the address for 'W' and reads until null. */
}
