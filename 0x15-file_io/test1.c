#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

int open_error(int openfrom, char *file_from){
    if (openfrom == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        exit(98);
    }
}

int write_error(int writeto, char *file_to, int openfrom)
{
        if (writeto == -1) {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
        close(openfrom);
        exit(99);
    }
}

int main(int argc, char *argv[])
{
    char *file_from = argv[1];
    char *file_to = argv[2];
    int openfrom, writeto;
    char buffer[BUFFER_SIZE];
    ssize_t bytes_read, bytes_written;

if (argc != 3) 
{
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
    openfrom = open(file_from, O_RDONLY);
    open_error(openfrom, file_from);
    writeto = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    write_error(writeto, file_to, openfrom);
    
    while ((bytes_read = read(openfrom, buffer, BUFFER_SIZE)) > 0) 
    {
        bytes_written = write(writeto, buffer, bytes_read);
        if (bytes_written == -1) 
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
            close(openfrom);
            close(writeto);
            exit(99);
        }
    }
    if (bytes_read == -1) 
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        close(openfrom);
        close(writeto);
        exit(98);
    }
    if (close(openfrom) == -1) 
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", openfrom);
        close(writeto);
        exit(100);
    }
    if (close(writeto) == -1) 
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", writeto);
        exit(100);
    }
    return 0;
}

