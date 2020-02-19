# libc
This is a library of utility functions written in C. The standard utility functions behave identically to the functions available in UNIX. This library also consists of list manipulation functions. A list node is defined as:

* t_list
  * void *content;
  * t_list	*next;

## Notes:
* in the `libft` directory, run: `make re` in order to compile the `libft.a` library file.
* to utilize the library file with GCC, run: `gcc filename.c -L . -lft`. Verify that your `libft.a` file is in the project directory when compiling.
