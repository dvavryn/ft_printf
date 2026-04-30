# ft_printf

A 42 school project reimplementing the standard C `printf` function.

## Supported Conversions

| Specifier | Description |
|-----------|-------------|
| `%c` | Character |
| `%s` | String |
| `%p` | Pointer address (hex) |
| `%d` / `%i` | Signed decimal integer |
| `%u` | Unsigned decimal integer |
| `%x` / `%X` | Unsigned hex (lower/upper) |
| `%%` | Literal percent sign |

## Usage

Include in your project:

```c
#include "ft_printf.h"

ft_printf("Hello, %s! You are %d years old.\n", name, age);
```

Compile with:

```bash
make
# produces libftprintf.a
gcc main.c libftprintf.a -o program
```

## Requirements

- C compiler (cc)
- `ar` for static library
