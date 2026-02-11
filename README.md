*This project has been created as part of the 42 curriculum by csekakul.*

# Description

This __ft_printf__ function is a replica of the original printf function and it will go into my libft library. I'll use it in future projects where libft is allowed. I __only did the mandatory part__ of the project, this is why my function and the original function are not completely identical. My function cannot handle the '-0.' flag and doesn't manage the '# +' flags either.

My  approach for this project was the follwing. I write a function that looks at the string received as an argument in ft_printf. I iterate through the characters of the string and pass them to ft_putchar all the way until I come across a "%" sign. If I find a "%" in this case I take a look at the next character. Here I call the ft_format function to check which case it is going to be.
- If I find a "c", I pass the corresponding dinamic argument to ft_putchar_pf.
- If I find an "s", I pass the corresponding dinamic argument to ft_putstr_pf.
- And so on...

For the hexadecimal numbers I defined the base in the ft_printf.h file and did the conversion in the ft_aux_pf.c file. In these helping functions, first I allocate the necessary amount of memory, do the conversion and save the result in the memory area. After this I have the right format and I just need to pass it to ft_putstr_pf to get printed.
The value that printf returns is the number of characters printed. This is why I have a variable called counter, and this is what my function is returning at the end.
I am handling the following errors. Passing only one %, if the string ended, the function returns 0. Passing various % signs, it will print exactly half as many of them as we passed. Passing a null pointer, it returns the word (nil), just like the original function. Passing an empty string, it returns (null) again just like the original. I have various safety NULL-checks in my functions to make sure I don't end up in an infinite loop, get an error or unexpected behaviour.


### The function handles the following conversions

|Format|Behaviour|
| ------ |:-----:|
|**%c**|Prints a single character|
|**%s**|Prints a string (as defined by the common C convention)|
|**%p**|The void * pointer argument has to be printed in hexadecimal format|
|**%d**|Prints a decimal (base 10) number|
|**%i**|Prints an integer in base 10|
|**%u**|Prints an unsigned decimal (base 10) number|
|**%x**|Prints a number in hexadecimal (base 16) lowercase format|
|**%X**|Prints a number in hexadecimal (base 16) uppercase format|
|**%%**|Prints a percent sign|

### Variadic functions

Printf handles variable number of arguments. It is necessary because we don't know in advance how many arguments is the user going to ask to print. The `...` stands for the variable arguments in the function prototype. Then you need to initiate it as if it was a normal variable `va_list		va;`. Before starting to use it in the function you need to start it with `va_start(va, str);` and end it at the end it of the function with `va_end(va);`.

# Resources

- [Gitbook ft_printf guide](https://42-cursus.gitbook.io/guide/1-rank-01/ft_printf)
- [Makefile tutorial](https://makefiletutorial.com/)
- [C notes, debugging](https://cs.yale.edu/homes/aspnes/classes/223/notes.html)
- man printf
- man va_list
- man va_arg

## Description of AI used for this project

For this project I used AI for the compilation, because I was unsure how am I supposed to compile a complex project with multiple files, and create one executable file. I learned it with the help of my peers and asking AI to explain too.

## Justification of use of libraries

In my ft_printf.h file I am including the following libraries:
- stdarg.h
	- It is necessary for the use of the variadic functions.
- unistd.h
	- It is necessary to use the function write.
- stdlib.h
	- It is necessary, because I am using malloc.
- stdint.h
	- It is necessary, because I am using SIZE_MAX.

# Instructions
| Action					| Command |
| ----------------------|:-------:|
|You can compile it with|  `make` |
|Delete object files    |`make clean`|
|Delete all objects     |`make fclean`|
|Delete and recompile from scratch|`make re`|

### You can use this main to test
- First create the `main.c` file.

- Now run `make` to create the object files. 

- Then create the executable file with `cc -Wall -Wextra -Werror main.c libftprintf.a`.

- Finally you can simply execute the program with `./a.out`.

```C
#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("Hello %s! Number: %d\n", "42", 42);
	ft_printf("Hex: %x | Ptr: %p\n", 255, &main);
	return (0);
}
```
