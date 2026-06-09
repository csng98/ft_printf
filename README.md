*This project has been created as part of the 42 curriculum by csekakul.*

# ft_printf: Because ft_putnbr() and ft_putstr() Aren't Enough 🖨️

Welcome to **ft_printf**, a custom structural implementation of the standard `printf` function found in `libc`. This project marks the transition from using static output utilities to engineering dynamic formatting pipelines using C's native variadic argument interfaces.

## 🚀 Project Overview
The core objective of this project is to replicate the format-parsing string mechanics of `printf` without relying on standard buffer-pooling frameworks. The function evaluates characters sequentially, routes specifiers through an internal parsing core, dynamically handles base conversions via custom memory allocation subroutines, tracks the total printed-byte length via an internal counter, and interfaces safely with low-level kernel write streams.

> 💡 **Scope Limitation:** This implementation satisfies the mandatory criteria. It does not process field minimum widths or complex attribute formatting flags (`-`, `0`, `.`, `#`, `+`, or spaces).

## 🛠️ Tech Stack & Standards
- **Language:** C (Strictly compliant with The Norm standard)
- **Compilation Tooling:** `cc` utilizing diagnostic flags `-Wall -Wextra -Werror`
- **Native Context Requirements:** Integrated tracking types and system resources:
  - `<stdarg.h>` — For variadic argument management (`va_list`, `va_start`, `va_arg`, `va_end`)
  - `<unistd.h>` — For system stream access (`write`)
  - `<stdlib.h>` — For isolated byte allocations (`malloc`, `free`)
  - `<stdint.h>` — For macro evaluation limits (`SIZE_MAX`)

## 📂 Project Structure
```text
📂 ft_printf/
├── 📄 ft_printf.h          # Central Header (Macros, Types, System Inclusions)
├── 📄 ft_printf.c          # Primary Entry Point & Character Iteration Loop
├── 📄 ft_putchar_pf.c      # Safe Single Character Output Subroutine
├── 📄 ft_putstr_pf.c       # String Output Handler with Native Edge Safety
├── 📄 ft_putnbr_pf.c       # Base-10 Signed Integer Translation Core
├── 📄 ft_putuint_pf.c      # Base-10 Unsigned Integer Format Handler
├── 📄 ft_puthex_pf.c       # Low-Level Base-16 Hexadecimal Engine
├── 📄 ft_putptr_pf.c       # Unsigned Address Conversion & Pointer Printer
├── 📄 ft_aux_pf.c          # Explicit Memory Allocations & Parsing Utils
├── 📄 Makefile             # Multi-File Archiver Lifecycle Controller
└── 📄 README.md            # Structural Overview & Documentation Matrix

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
