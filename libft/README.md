*This project has been created as part of the 42 curriculum by ftessi.*

---

# 📚 libft — Your Very First Own Library

## Description

**libft** is a C static library that reimplements a carefully selected subset of the standard C library (`libc`), supplemented with additional utility functions not found in it. The goal is to deeply understand how foundational C functions work by writing them from scratch — memory manipulation, string handling, character classification, integer conversion, output to file descriptors, and singly-linked list management. Once built, `libft.a` serves as a personal toolkit reusable across all future 42 projects.

---

## Instructions

### Compilation

```bash
make        # Compile the library → produces libft.a
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Full rebuild (fclean + make)
make bonus  # Compile with the bonus linked-list functions
```

> All source files are compiled with `-Wall -Wextra -Werror`.  
> The library is created with `ar` — `libtool` is **not** used.

### Linking to your project

```bash
cc your_file.c -L. -lft -o your_program
```

Include the header in your source files:

```c
#include "libft.h"
```

---

## Library Reference

### Part 1 — Libc Functions

> Reimplementations of standard C library functions. Prototypes and behaviours match the original `man` pages exactly.

| Function | Prototype | Description |
|---|---|---|
| `ft_isalpha` | `int ft_isalpha(int c)` | Returns `1` if `c` is an alphabetic character, `0` otherwise. |
| `ft_isdigit` | `int ft_isdigit(int c)` | Returns `1` if `c` is a decimal digit (`0`–`9`), `0` otherwise. |
| `ft_isalnum` | `int ft_isalnum(int c)` | Returns `1` if `c` is alphanumeric, `0` otherwise. |
| `ft_isascii` | `int ft_isascii(int c)` | Returns `1` if `c` is a valid 7-bit ASCII character, `0` otherwise. |
| `ft_isprint` | `int ft_isprint(int c)` | Returns `1` if `c` is a printable character (including space), `0` otherwise. |
| `ft_strlen` | `size_t ft_strlen(const char *s)` | Returns the number of bytes in the null-terminated string `s`, excluding the terminating `\0`. |
| `ft_memset` | `void *ft_memset(void *s, int c, size_t n)` | Fills the first `n` bytes of memory area `s` with the constant byte `c` and returns `s`. |
| `ft_bzero` | `void ft_bzero(void *s, size_t n)` | Writes `n` zero bytes to the memory area `s`. |
| `ft_memcpy` | `void *ft_memcpy(void *dest, const void *src, size_t n)` | Copies `n` bytes from `src` to `dest`; behaviour is undefined if the areas overlap. |
| `ft_memmove` | `void *ft_memmove(void *dest, const void *src, size_t n)` | Copies `n` bytes from `src` to `dest`, correctly handling overlapping memory regions. |
| `ft_strlcpy` | `size_t ft_strlcpy(char *dst, const char *src, size_t size)` | Copies up to `size - 1` characters from `src` into `dst`, null-terminates, and returns `strlen(src)`. |
| `ft_strlcat` | `size_t ft_strlcat(char *dst, const char *src, size_t size)` | Appends `src` to `dst` up to `size - 1` bytes total, null-terminates, and returns the length the full result would have been. |
| `ft_toupper` | `int ft_toupper(int c)` | Converts a lowercase letter to its uppercase equivalent, leaving all other characters unchanged. |
| `ft_tolower` | `int ft_tolower(int c)` | Converts an uppercase letter to its lowercase equivalent, leaving all other characters unchanged. |
| `ft_strchr` | `char *ft_strchr(const char *s, int c)` | Returns a pointer to the first occurrence of character `c` in `s`, or `NULL` if not found. |
| `ft_strrchr` | `char *ft_strrchr(const char *s, int c)` | Returns a pointer to the last occurrence of character `c` in `s`, or `NULL` if not found. |
| `ft_strncmp` | `int ft_strncmp(const char *s1, const char *s2, size_t n)` | Compares at most `n` bytes of `s1` and `s2`, returning a negative, zero, or positive integer. |
| `ft_memchr` | `void *ft_memchr(const void *s, int c, size_t n)` | Scans the first `n` bytes of `s` for byte `c` and returns a pointer to the first match, or `NULL`. |
| `ft_memcmp` | `int ft_memcmp(const void *s1, const void *s2, size_t n)` | Compares the first `n` bytes of `s1` and `s2`, returning their difference. |
| `ft_strnstr` | `char *ft_strnstr(const char *big, const char *little, size_t len)` | Finds the first occurrence of `little` inside `big`, searching at most `len` characters. |
| `ft_atoi` | `int ft_atoi(const char *nptr)` | Converts the initial portion of `nptr` to an `int`, skipping leading whitespace and an optional sign. |
| `ft_calloc` | `void *ft_calloc(size_t nmemb, size_t size)` | Allocates memory for `nmemb` elements of `size` bytes each and zero-initialises the entire block. |
| `ft_strdup` | `char *ft_strdup(const char *s1)` | Allocates and returns a newly heap-allocated copy of the string `s1`. |

---

### Part 2 — Additional Functions

> Functions absent from the libc, or present in a form that differs from what is needed here.

| Function | Prototype | Description |
|---|---|---|
| `ft_substr` | `char *ft_substr(char const *s, unsigned int start, size_t len)` | Allocates and returns a substring of `s` beginning at index `start`, of at most `len` characters. |
| `ft_strjoin` | `char *ft_strjoin(char const *s1, char const *s2)` | Allocates and returns a new string that is the concatenation of `s1` followed by `s2`. |
| `ft_strtrim` | `char *ft_strtrim(char const *s1, char const *set)` | Allocates and returns a copy of `s1` with all leading and trailing characters present in `set` removed. |
| `ft_split` | `char **ft_split(char const *s, char c)` | Allocates and returns a `NULL`-terminated array of strings by splitting `s` on delimiter `c`. |
| `ft_itoa` | `char *ft_itoa(int n)` | Allocates and returns a string representation of the integer `n`, handling negative values. |
| `ft_strmapi` | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Applies `f` to each character of `s` (passing its index) and returns the resulting newly allocated string. |
| `ft_striteri` | `void ft_striteri(char *s, void (*f)(unsigned int, char *))` | Applies `f` in-place to each character of `s`, passing the character's index and a pointer to it. |
| `ft_putchar_fd` | `void ft_putchar_fd(char c, int fd)` | Outputs character `c` to file descriptor `fd`. |
| `ft_putstr_fd` | `void ft_putstr_fd(char *s, int fd)` | Outputs string `s` to file descriptor `fd`. |
| `ft_putendl_fd` | `void ft_putendl_fd(char *s, int fd)` | Outputs string `s` followed by a newline to file descriptor `fd`. |
| `ft_putnbr_fd` | `void ft_putnbr_fd(int n, int fd)` | Outputs the integer `n` to file descriptor `fd`. |

---

### Part 3 — Linked List (Bonus)

> Functions for manipulating singly-linked lists using the `t_list` structure.

```c
typedef struct s_list
{
    void          *content;
    struct s_list *next;
} t_list;
```

| Function | Prototype | Description |
|---|---|---|
| `ft_lstnew` | `t_list *ft_lstnew(void *content)` | Allocates and returns a new list node with `content` set to the given value and `next` initialised to `NULL`. |
| `ft_lstadd_front` | `void ft_lstadd_front(t_list **lst, t_list *new)` | Inserts node `new` at the beginning of the list pointed to by `lst`. |
| `ft_lstsize` | `int ft_lstsize(t_list *lst)` | Counts and returns the number of nodes in the list. |
| `ft_lstlast` | `t_list *ft_lstlast(t_list *lst)` | Returns a pointer to the last node of the list. |
| `ft_lstadd_back` | `void ft_lstadd_back(t_list **lst, t_list *new)` | Appends node `new` to the end of the list pointed to by `lst`. |
| `ft_lstdelone` | `void ft_lstdelone(t_list *lst, void (*del)(void *))` | Frees the content of node `lst` using `del`, then frees the node itself without touching the next node. |
| `ft_lstclear` | `void ft_lstclear(t_list **lst, void (*del)(void *))` | Deletes and frees every node in the list using `del`, then sets the list pointer to `NULL`. |
| `ft_lstiter` | `void ft_lstiter(t_list *lst, void (*f)(void *))` | Iterates through `lst` and applies function `f` to the content of every node. |
| `ft_lstmap` | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Builds and returns a new list by applying `f` to each node's content, using `del` to clean up on allocation failure. |

---

## Resources

- [`man` pages](https://man7.org/linux/man-pages/) — authoritative reference for all reimplemented libc functions
- [42 Docs — libft subject](https://github.com/42School) — official project description
- [C Programming — K&R](https://en.wikipedia.org/wiki/The_C_Programming_Language) — *The C Programming Language*, Kernighan & Ritchie
- [cppreference.com — C standard library](https://en.cppreference.com/w/c) — well-structured reference for standard functions and their behaviours

### AI Usage

AI (Claude) was used **only** to help generate this `README.md` file — specifically to format the function table and descriptions from the subject PDF. No AI was used to write, debug, or review any `.c` source files or the `Makefile`.
