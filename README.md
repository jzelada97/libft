# libft

> The C standard library, rebuilt from scratch

A custom static library (`libft.a`) reimplementing 43 essential C functions. Serves as the foundation for all subsequent 42 projects.

---

## Functions

`ft_atoi` `ft_bzero` `ft_calloc` `ft_isalnum` `ft_isalpha` `ft_isascii` `ft_isdigit` `ft_isprint` `ft_itoa` `ft_lstadd_back` `ft_lstadd_front` `ft_lstclear` `ft_lstdelone` `ft_lstiter` `ft_lstlast` `ft_lstmap` `ft_lstnew` `ft_lstsize` `ft_memchr` `ft_memcmp` `ft_memcpy` `ft_memmove` `ft_memset` `ft_putchar_fd` `ft_putendl_fd` `ft_putnbr_fd` `ft_putstr_fd` `ft_split` `ft_strchr` `ft_strdup` `ft_striteri` `ft_strjoin` `ft_strlcat` `ft_strlcpy` `ft_strlen` `ft_strmapi` `ft_strncmp` `ft_strnstr` `ft_strrchr` `ft_strtrim` `ft_substr` `ft_tolower` `ft_toupper`

---

## Build

```bash
make        # compiles libft.a
make clean  # removes .o files
make fclean # removes .o and libft.a
make re     # full recompile
```

## Usage

```c
#include "libft.h"

int main(void)
{
    char *str = ft_strjoin("Hello, ", "world!");
    ft_putendl_fd(str, 1);
    free(str);
    return (0);
}
```

Compile:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

---

## Architecture

```
libft/
├── src/           # All 43 function implementations
├── libft.h        # Header with prototypes and typedefs
├── Makefile
└── .gitignore
```

---

## Context

Developed as the first project in the 42 Madrid curriculum. Every subsequent C project at 42 builds on top of this library. Focuses on low-level memory management, pointer arithmetic, and building reusable tools in C.
