*This project has been created as part of the 42 curriculum by csekakul*

# Description

This ft_printf function is going to be a replica of the original printf function and it will go into my libft library. I'll use it in future projects where ibft is allowed.

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

# Resources

[Gitbook ft_printf guide](https://42-cursus.gitbook.io/guide/1-rank-01/ft_printf)
[Makefile tutorial](https://makefiletutorial.com/)
[C notes, debugging](https://cs.yale.edu/homes/aspnes/classes/223/notes.html)
man printf
man va_list
man va_arg

# Instructions
| Table					| Command |
| ----------------------|:-------:|
|You can compile it with|  `make` |
|Delete object files    |`make clean`|
|Delete all objects     |`make fclean`|
|Delete and recompile from scratch|`make re`|

### You can use this main to test

````C
#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	printf("My name is %s and I am %d years old", "Csenge", 27);
	ft_printf("My name is %s and I am %d years old", "Csenge", 27);
	return (0);
}
