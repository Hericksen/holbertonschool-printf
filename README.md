# _printf 

![alt text](http://url/to/img.png)

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
