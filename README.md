# function _printf
## Description
This is a customized function that replicates the functionality of the printf function present in the C standard library. It was developed as a project during the Holberton School course. The function takes a format string and additional arguments, produces formatted output to stdout, and returns the length of the output sent to stdout.
## Declaration
Following is the declaration for _printf function.

`int _printf(const char *format, ...)`

## Parameters
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers.

## Specifier and Output

|Specifier|Output|
|---------|------|
|C|Character|