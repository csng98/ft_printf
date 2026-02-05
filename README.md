*This project has been created as part of the 42 curriculum by csekakul.*

# Description

This __ft_printf__ function is a replica of the original printf function and it will go into my libft library. I'll use it in future projects where libft is allowed. I __only did the mandatory part__ of the project, this is why my function and the original function are not completely identical. My function cannot handle the '-0.' flag and doesn't manage the '# +' flags either. This is why you might see some large error messages from francinette, but that should be because of the absence of the bonus.

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

One of the biggest challanges of the project are the variadic functions.

Printf handles variable number of arguments. For this reason, we don't know in advance how many arguments in which format is the user going to ask to print. The `...` stands for the variable arguments in the function prototype. Then you need to initiate it as if it was a normal variable `va_list		va;`. Before starting to use it in the function you need to start it with `va_start(va, str);` and end it at the end it of the function with `va_end(va);`.

# Resources

- [Gitbook ft_printf guide](https://42-cursus.gitbook.io/guide/1-rank-01/ft_printf)
- [Makefile tutorial](https://makefiletutorial.com/)
- [C notes, debugging](https://cs.yale.edu/homes/aspnes/classes/223/notes.html)
- man printf
- man va_list
- man va_arg

# Instructions
| Table					| Command |
| ----------------------|:-------:|
|You can compile it with|  `make` |
|Delete object files    |`make clean`|
|Delete all objects     |`make fclean`|
|Delete and recompile from scratch|`make re`|

### You can use this main to test
But don't forget to put the `main.c` inside of a test folder and compile it with `cc -Wall -Wextra -Werror -g -I. test/main.c libftprintf.a -o test_printf`.

Then you can simply execute the program with `./test_printf`.

```C
#include "ft_printf.h"

int	main(void)
{
	ft_printf("Hello %s! Number: %d\n", "42", 42);
	ft_printf("Hex: %x | Ptr: %p\n", 255, &main);
	return (0);
}
```
