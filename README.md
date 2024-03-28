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
|S|String of Characters|
|%|Character %|
|I or D|Integers in base 10|

## Possible errors

|Return|Conditions|Output|
|------|----------|------|
|Return -1|When the format is NULL or when the format is only 1 character and is equal to : %|Nothing|
|Return NULL lenght|When the format is the a string and is NULL|(null)|

## Examples

```
#include "main.h"
int main(void)
_printf("String:[%s]\n", "I am a string !");
Return (0);
```

Output

```String:[I am a string !]```