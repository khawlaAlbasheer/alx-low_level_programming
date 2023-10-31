#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* read_textfile - reads a text file and prints the letters
* @filename: filename
* @letteres: number of letters to read
*
* Return: numbers of letters printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t red, wrt;
    char *buf;

    if(!filename)
        return (0);
    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);
    buf = malloc(sizeof(char) * (letters));
    if (buf == NULL)
        return (0);
    red = read(fd, buf, letters);
    if (red == -1)
        {
            free(buf);
            close(buf);
            return (0);
        }
    wrt = write(STDOUT_FILENO, buf, red);
    if (wrt == -1)
    {
        free(buf);
        close(fd);
        return (0);
    }
    close(fd);
    return (red);
}