
# _printf


## Description

This is a mimic version of the printf function with most basic functionalities such as printing a string, a character and also printing an integer number.

## Requirement

- Ubuntu 20.04.06 LTS

- compilation line : ```gcc -Wall -Werror -Wextra -pedantic *.c```

## FlowChart
![image]

## Example

#### main file
```c
#include  "main.h"

int  main(void)
{
    _printf("Hello, World !");
    _printf("%d", 8);
    return (0);

}
```

#### output

```sh
Hello,  World !
8
```

## How to start

- To compile the code, and execute it, enter this command line :

```Bash
gcc  -Wall  -Werror  -Wextra  -pedantic  *.c
```

## How to try it

This is a main you can use to tested out the _ptrintf function

```C
#include  <limits.h>
#include  <stdio.h>
#include  "main.h"
/**
* main - Entry point
*
* Return: Always 0
*/
int  main(void)
{
    int len;
    int len2;

    len =  _printf("Let's try to printf a simple sentence.\n");
    len2 =  printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len =  _printf("Percent:[%%]\n");
    len2 =  printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");

    return (0);
}
```
## Authors

*  **Jorre Jade**  _alias_ [@lJorreJ](https://github.com/JorreJ)
*  **Martin Gwendal**  _alias_ [@Hericksen](https://github.com/Hericksen)

## License

This project is licensed under ``Scotch license`` - see the [LICENSE.md](LICENSE.md) for more details.
