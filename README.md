
# _printf 
[![forthebadge](data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSIxNTcuMDAwMDI1NzQ5MjA2NTQiIGhlaWdodD0iMzUiIHZpZXdCb3g9IjAgMCAxNTcuMDAwMDI1NzQ5MjA2NTQgMzUiPjxyZWN0IHdpZHRoPSIxMjYuMDAwMDIyODg4MTgzNiIgaGVpZ2h0PSIzNSIgZmlsbD0iIzMxQzRGMyIvPjxyZWN0IHg9IjEyNi4wMDAwMjI4ODgxODM2IiB3aWR0aD0iMzEuMDAwMDAyODYxMDIyOTUiIGhlaWdodD0iMzUiIGZpbGw9IiMzODlBRDUiLz48dGV4dCB4PSI2My4wMDAwMTE0NDQwOTE4IiB5PSIyMS41IiBmb250LXNpemU9IjEyIiBmb250LWZhbWlseT0iJ1JvYm90bycsIHNhbnMtc2VyaWYiIGZpbGw9IiNGRkZGRkYiIHRleHQtYW5jaG9yPSJtaWRkbGUiIGxldHRlci1zcGFjaW5nPSIyIj5ERVZFTE9QRUQgSU48L3RleHQ+PHRleHQgeD0iMTQxLjUwMDAyNDMxODY5NTA3IiB5PSIyMS41IiBmb250LXNpemU9IjEyIiBmb250LWZhbWlseT0iJ01vbnRzZXJyYXQnLCBzYW5zLXNlcmlmIiBmaWxsPSIjZmZmZmZmIiB0ZXh0LWFuY2hvcj0ibWlkZGxlIiBmb250LXdlaWdodD0iOTAwIiBsZXR0ZXItc3BhY2luZz0iMiI+QzwvdGV4dD48L3N2Zz4=)](https://forthebadge.com)

## Description

This is a mimic version of the printf function, which have basics functionalities like printing a string, a character or an integer number.

## Requirement

- Ubuntu 20.04.06 LTS

- compilation line : ```gcc -Wall -Werror -Wextra -pedantic *.c```

## Features

- Supports a variety of format specifiers :
  
    - %c: Prints a single character.
    - %s: Prints a string of characters.
    - %d or %i: Prints an integer in base 10.
    - %%: Prints a percent sign.
    - Returns the number of characters printed, excluding the null terminator.

## Flowchart

PNG Flow

## Exemple

#### Main file
```c
#include  "main.h"

int  main(void)
{
    _printf("Hello, World!");

return (0);

}
```

#### output

```sh
Hello,  World
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
