
# _printf
[![forthebadge](data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSIxNjMuOTU0OTEzMTM5MzQzMjYiIGhlaWdodD0iMzUiIHZpZXdCb3g9IjAgMCAxNjMuOTU0OTEzMTM5MzQzMjYgMzUiPjxyZWN0IHdpZHRoPSIxMzIuNjI2NjI1MDYxMDM1MTYiIGhlaWdodD0iMzUiIGZpbGw9IiMwMDczZmIiLz48cmVjdCB4PSIxMzIuNjI2NjI1MDYxMDM1MTYiIHdpZHRoPSIzMS4zMjgyODgwNzgzMDgxMDUiIGhlaWdodD0iMzUiIGZpbGw9IiM4ZGU2ZjYiLz48dGV4dCB4PSI2Ni4zMTMzMTI1MzA1MTc1OCIgeT0iMjEuNSIgZm9udC1zaXplPSIxMiIgZm9udC1mYW1pbHk9IidSb2JvdG8nLCBzYW5zLXNlcmlmIiBmaWxsPSIjZmZmZmZmIiB0ZXh0LWFuY2hvcj0ibWlkZGxlIiBsZXR0ZXItc3BhY2luZz0iMiI+REVWRUxPUEVEIElOPC90ZXh0Pjx0ZXh0IHg9IjE0OC4yOTA3NjkxMDAxODkyIiB5PSIyMS41IiBmb250LXNpemU9IjEyIiBmb250LWZhbWlseT0iJ01vbnRzZXJyYXQnLCBzYW5zLXNlcmlmIiBmaWxsPSIjZmZmZmZmIiB0ZXh0LWFuY2hvcj0ibWlkZGxlIiBmb250LXdlaWdodD0iOTAwIiBsZXR0ZXItc3BhY2luZz0iMiI+QzwvdGV4dD48L3N2Zz4=)](https://forthebadge.com)
## Description

This is a mimic version of the printf function with most basic functionalities such as printing a string, a character and an integer number.

## Requirement

- Ubuntu 20.04.06 LTS

- compilation line : ```gcc -Wall -Werror -Wextra -pedantic *.c```

## FlowChart
![image](https://github.com/user-attachments/assets/2853607e-d921-4dbc-a675-262eac89d79a)


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

*  **Jorre Jade**  _alias_ [@JorreJ](https://github.com/JorreJ)
*  **Martin Gwendal**  _alias_ [@Hericksen](https://github.com/Hericksen)

## License

This project is licensed under ``Scotch license`` - see the [LICENSE.md](LICENSE.md) for more details.
