# libft

> The C standard library, rebuilt from scratch

A custom static library (`libft.a`) reimplementing 43 essential C functions. Serves as the foundation for all subsequent 42 projects.

---

## Functions

**Memory:** `ft_memset` `ft_bzero` `ft_memcpy` `ft_memmove` `ft_memchr` `ft_memcmp` `ft_calloc`

**String:** `ft_strlen` `ft_strchr` `ft_strrchr` `ft_strncmp` `ft_strnstr` `ft_strlcpy` `ft_strlcat` `ft_strdup` `ft_substr` `ft_strjoin` `ft_strtrim` `ft_split` `ft_strmapi` `ft_striteri`

**Character:** `ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint` `ft_toupper` `ft_tolower`

**Conversion:** `ft_atoi` `ft_itoa`

**File descriptor output:** `ft_putchar_fd` `ft_putstr_fd` `ft_putendl_fd` `ft_putnbr_fd`

**Linked list:** `ft_lstnew` `ft_lstadd_front` `ft_lstsize` `ft_lstlast` `ft_lstadd_back` `ft_lstdelone` `ft_lstclear` `ft_lstiter` `ft_lstmap`

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
