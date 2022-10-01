# Hello World via pointer

# 1. What is Char
Should understand the difference between char and string. You can not compile the code below:
```
    char a = "Hello";
```

Why? Because char is a type that stores a character and cannot handle a string.<br>
But how should you write "Hello World"? Do you create the following stupid code for the string with five chars?
```
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
```

# 2. Array
Instead, you may use an array (= string) composed of char. But still not sophisticated somewhere, right? 
```
    char s[] = {'H','e','l','l','o'};
    printf("%c", s[0]);
    printf("%c", s[1]);
    printf("%c", s[2]);
    printf("%c", s[3]);
    printf("%c\n", s[4]);
```

# 3. Pointer
It is better if you use the pointer below:
You may think it's suddenly for you to use pointer for a string.
```
    char *ss = "Hello";
    printf("%s\n", ss);                    /* ss has the address for 'H' and reads until null. */
```
But if you can understand below, it is not so difficult to understand. It is same as the above because access to array uses indirection reference via pointer. 
```
    char sss[] = "Hello";
    printf("%s\n", sss);                   /* sss has the address for 'H' and reads until null. */
```

If you want to do "Hello World" in addition to above, then you may 2D array so that you can add "World" as 2nd element. Please note that "Hello" itsef is already array of char. This is a reason of you should use 2D array. [6] means the length of "Hello" and "World" including null.
```
    char sssss[][6] = {"Hello", "World"};
    printf("%s ", *sssss);                 /* sssss has the address for 'H' and reads until null. */ 
    printf("%s\n", *(sssss+1));            /* sssss+1 has the address for 'W' and reads until null. */ 
```

Instead, you may use pointer for "array of array" so that you can add "World" as 2nd element.<br>
As I said before, "Hello" is an array. But "Hello" itself belongs to the array which includes "World".
The array(**{"Hello", "World"}**) of array(**"Hello"**) is **"Pointer to pointer" which is usually called as duble pointer** because the array uses indirection reference via pointer.<br>
You have to specify the maximum length of elements in case of 2D array. But you don't need to be aware of it if you use the pointer as like below:
```
    char *ssss[] = {"Hello", "World"};
    printf("%s ", *ssss);                  /* ssss behaves like a double pointer. */
    printf("%s\n", *(ssss+1));             /* ssss behaves like a double pointer. */
    printf("%s ", ssss[0]);                /* ssss[0] has the address for 'H' and reads until null. */
    printf("%s\n", ssss[1]);               /* ssss[1] has the address for 'W' and reads until null. */
```

# 4. Sample program

```
# sudo apt-get install libc6-dev
# gcc hello.c
# ./a.out
Hello
Hello
Hello
ello
llo
lo
o
Hello
ello
llo
lo
o
Hello
ello
llo
lo
o
Hello
Hello World
Hello World
Hello World
```
