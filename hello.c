#include <stdio.h>

int main()
{
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

    char s[] = {'H','e','l','l','o'};
    printf("%c", s[0]);
    printf("%c", s[1]);
    printf("%c", s[2]);
    printf("%c", s[3]);
    printf("%c\n", s[4]);
    printf("%s\n", s);

    char *ss = "Hello";
    printf("%s\n", ss);

    char sss[] = {"Hello"};
    printf("%s\n", sss);
    printf("%s\n", &sss[0]);

    char *ssss[] = {"Hello","World","!"};
    printf("%s\n", *ssss);
    printf("%s\n", ssss[0]);
}
