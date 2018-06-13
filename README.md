# 42 Academy+Plus - ft_printf

A 42 (school) project that required us to recode the function printf from <stdio.h>. By this point any project that required us to print something on the screen had to use a few functions that we implemented during the libft project that were capable of printing either a cahracter, a string of characters or a number on the screen, but printing any mixed output proved to be more complicated than it should have. Recoding printf allowed us to discover a feature of the C language, variadic functions, and to practice detailed management of the printing options.  

For more details regarding the project see 'ft_printf - Subject(EN).pdf'

## How to use

Using a terminal from within the ft_printf directory:
- run the command `make` to create the library **libftprintf.a**
- include the prototype of ft_printf as `int ft_printf(const char *str, ...)` in your project and use the function as you would use the real printf
- compile your project using the library with a command similar to `gcc -o myBinary mySource.c libftprintf.a`

## Features

- 's' 'S' 'p' 'd' 'D' 'i' 'o' 'O' 'u' 'U' 'x' 'X' 'c' 'C' and '%' specifiers
- '#' '0' '-' '+' and ' ' flags
- management of minimum field width
- management of precision
- 'hh' 'h' 'l' 'll' 'j' and 'z' lengths
- a bonus specifier that allows for binary conversions ['b']

# How to test

If you want to test the code, or your own implementation of ft_printf you can use 
- @jgigault's [42FileChecker](https://github.com/jgigault/42FileChecker)

and follow the instructions on his repository. (*Note: by the time you're reading this there's a good chance there are a lot more ft_printf testers out there, so look them up yourself as well.*)
