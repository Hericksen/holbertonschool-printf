# _printf 

[![forthebadge](data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSIxNjMuOTUzMTQxMjEyNDYzMzgiIGhlaWdodD0iMzUiIHZpZXdCb3g9IjAgMCAxNjMuOTUzMTQxMjEyNDYzMzggMzUiPjxyZWN0IHdpZHRoPSIxMzIuNjI1MDE1MjU4Nzg5MDYiIGhlaWdodD0iMzUiIGZpbGw9IiMzMUM0RjMiLz48cmVjdCB4PSIxMzIuNjI1MDE1MjU4Nzg5MDYiIHdpZHRoPSIzMS4zMjgxMjU5NTM2NzQzMTYiIGhlaWdodD0iMzUiIGZpbGw9IiMzODlBRDUiLz48dGV4dCB4PSI2Ni4zMTI1MDc2MjkzOTQ1MyIgeT0iMjEuNSIgZm9udC1zaXplPSIxMiIgZm9udC1mYW1pbHk9IidSb2JvdG8nLCBzYW5zLXNlcmlmIiBmaWxsPSIjRkZGRkZGIiB0ZXh0LWFuY2hvcj0ibWlkZGxlIiBsZXR0ZXItc3BhY2luZz0iMiI+REVWRUxPUEVEIElOPC90ZXh0Pjx0ZXh0IHg9IjE0OC4yODkwNzgyMzU2MjYyMiIgeT0iMjEuNSIgZm9udC1zaXplPSIxMiIgZm9udC1mYW1pbHk9IidNb250c2VycmF0Jywgc2Fucy1zZXJpZiIgZmlsbD0iI0ZGRkZGRiIgdGV4dC1hbmNob3I9Im1pZGRsZSIgZm9udC13ZWlnaHQ9IjkwMCIgbGV0dGVyLXNwYWNpbmc9IjIiPkM8L3RleHQ+PC9zdmc+)](https://forthebadge.com)

## Description

This is a mimic version of the printf function, which have basics functionalities like printing a string, a character or an integer number.

## Requirement

- Ubuntu 20.04.06 LTS

- compilation line : ```gcc -Wall -Werror -Wextra -pedantic *.c```

## Features

- Supports a variety of format specifiers :
  
    - ```%c```: Prints a single character.
    - ```%s```: Prints a string of characters.
    - ```%d``` or ```%i```: Prints an integer in base 10.
    - ```%%```: Prints a percent sign.
    - Returns the number of characters printed, excluding the null terminator.

## Flowchart

PNG Flow

## Example

#### Main file
```c
#include  "main.h"

int  main(void)
{
    _printf("Hello, World !\n");
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

- To compile and execute it, enter this command :

```Bash
gcc  -Wall  -Werror  -Wextra  -pedantic  *.c
```

## Authors

*  **Jorre Jade**  _alias_ [@JorreJ](https://github.com/JorreJ)
*  **Martin Gwendal**  _alias_ [@Hericksen](https://github.com/Hericksen)

## License

This project is licensed under ``Scotch license`` - see the [LICENSE.md](LICENSE.md) for more details.
