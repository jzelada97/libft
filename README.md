# libft

> The C standard library, rebuilt from scratch

A custom static library (`libft.a`) reimplementing essential C functions. Serves as the foundation for all subsequent 42 projects — string manipulation, memory operations, linked lists, and formatted output helpers.

---

## Functions

### Part 1 — Libc functions

| Category | Functions |
|----------|-----------|
| Character | `ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint` `ft_toupper` `ft_tolower` |
| String | `ft_strlen` `ft_strlcpy` `ft_strlcat` `ft_strchr` `ft_strrchr` `ft_strncmp` `ft_strnstr` `ft_strdup` |
| Memory | `ft_memset` `ft_bzero` `ft_memcpy` `ft_memmove` `ft_memchr` `ft_memcmp` `ft_calloc` |
| Conversion | `ft_atoi` |

### Part 2 — Additional functions

| Category | Functions |
|----------|-----------|
| String creation | `ft_substr` `ft_strjoin` `ft_strtrim` `ft_split` `ft_itoa` |
| String iteration | `ft_strmapi` `ft_striteri` |
| File descriptor output | `ft_putchar_fd` `ft_putendl_fd` `ft_putnbr_fd` `ft_putstr_fd` |

### Bonus — Linked list

| Functions |
|-----------|
| `ft_lstnew` `ft_lstadd_front` `ft_lstsize` `ft_lstlast` `ft_lstadd_back` `ft_lstdelone` `ft_lstclear` `ft_lstiter` `ft_lstmap` |

---

## Build

```bash
make        # compiles libft.a (mandatory functions)
make bonus  # compiles libft.a with linked list functions
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

## Context

Developed as the first project in the 42 Madrid curriculum. Every subsequent C project at 42 builds on top of this library. Focuses on understanding low-level memory management, pointer arithmetic, and building reusable tools in C.
