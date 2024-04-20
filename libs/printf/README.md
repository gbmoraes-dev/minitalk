# :clipboard: Printf | 42 RIO
- Actual Status : finished.
- Result        : Approved with 100 points by moulinette (the 42 tester) ✅
  
  Prinft is the third project at 42.
The purpose of this project is to repeat the behavior of the printf function but we only deal with some cases.

#### We need to implement the following conversions:

• %c Prints a single character.  
• %s Prints a string (as defined by the common C convention).  
• %d Prints a decimal (base 10) number.  
• %i Prints an integer in base 10.  
• %u Prints an unsigned decimal (base 10) number.  
• %x Prints a number in hexadecimal (base 16) lowercase format.  
• %X Prints a number in hexadecimal (base 16) uppercase format.  
• %p The void * pointer argument has to be printed in hexadecimal format.  
• %% Prints a percent sign.  

## 📝 Functions

| Files | Description |
| :------: | :---------: |
| ``ft_putchar.c`` | Contais the function who deal with characters. |
| ``ft_putstr.c`` | Contais the function who deal with strings. |
| ``ft_putnbr.c`` | Contais the function who deal with integers. |
| ``ft_putnbr_uns.c`` | Contais the function who deal with unsigned integers. |
| ``ft_puthx.c`` | Contais the function who deal with hexadecimals. |
| ``ft_putptr.c`` | Contais the function who deal with pointers. |
| ``ft_checkformat.c`` | Contais the function who check the type of format. |
| ``ft_printf.c`` | Contains the principal function who deal with type of data. |
| ``ft_printf.h`` | The header with functions libraries and prototypes. |
| ``Makefile`` | The automatizated compilator |

## 🛠️ Usage

In order to use this static library in your project, you must download this repository into your pc and compile the library

``` shell
$> git clone https://github.com/gbmoraes-dev/ft_printf.git
$> cd ft_printf
$> make
```

In your code, simply include its header:

``` C
#include "ft_printf.h"
```
And, when compiling your code, add the required flags:

``` shell
$> make && cc -w -o your_file your_file.c -L./ -lftprintf && ./your_file
```
