*This activity has been created as part of the 42 curriculum by ankalini.*

# get_next_line

## Description

`get_next_line` is a C function that reads a file descriptor line by line. Each time it is called, it returns the next line from the file, including the terminating `\n` character. It returns `NULL` when there is nothing left to read or if an error occurred.

The function works both with regular files and with standard input (fd = 0).

## Instructions

### Compilation

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c
```

You can change the `BUFFER_SIZE` value to any positive integer. The function works regardless of the buffer size (1, 42, 9999, etc.).

### Files

```
get_next_line.c       — main function
get_next_line_utils.c — helper functions (ft_strlen, ft_strchr, ft_strjoin, ft_substr)
get_next_line.h       — header file with prototype and BUFFER_SIZE definition
```

### Usage example

```c
int fd = open("file.txt", O_RDONLY);
char *line;

while ((line = get_next_line(fd)) != NULL)
{
    printf("%s", line);
    free(line);
}
close(fd);
```

## Algorithm

The function is split into 3 helper functions in order to respect the 42 Norm (25 lines maximum per function):

- **`read_and_store`** — reads from the file descriptor chunk by chunk (using `BUFFER_SIZE`) and stores everything into a persistent buffer (`stock`) until a `\n` is found or the file ends.

- **`extract_line`** — extracts the first line from `stock`, including the `\n` character.

- **`clean_stock`** — removes the extracted line from `stock` so the next call to `get_next_line` starts at the right place.

### Why a static variable?

A static variable keeps its value between function calls. Without it, `stock` would be reset to `NULL` every time `get_next_line` is called, losing everything that was read beyond the first `\n`. The static variable acts as persistent memory across calls, which is the core mechanism of this project.

### Why this algorithm?

Reading a file with a fixed `BUFFER_SIZE` means a single `read()` call can contain parts of multiple lines, or only part of one line. The `stock` variable accumulates what has been read until a full line is available, then returns only that line. This avoids reading the whole file at once and handles any buffer size correctly.

## Resources

- [Static variables in C — GeeksforGeeks](https://www.geeksforgeeks.org/static-variables-in-c/)
- [read() man page](https://man7.org/linux/man-pages/man2/read.2.html)
- [File descriptors explained](https://www.computerhope.com/jargon/f/file-descriptor.htm)

### AI usage

Claude (claude.ai) was used during this project as a learning support tool — to understand concepts (static variables, file descriptors, pointer arithmetic). Claude did not write the code directly; it explained concepts and pointed out mistakes so I could correct them myself.