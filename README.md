# _printf

## Description

**_printf is a C function that prints the format of inputs and variables.**

## Usage

* %c - prints a character
* %s - prints a string
* %% - prints a module
* %d and %i - prints a integer
* %b - prints an integer in binary format
* %r - prints the string in reverse

## Examples

```C
_printf("%s", "This is an example of _printf"); # returns a string
_printf("%c", 'C'); # returns a character
_printf("%%"); # returns a '%'
_printf("%d", 10); # returns a integer
_printf("%i", 20); # returns a integer
_printf("%b", 1234); # returns '1234' into binary format
_printf("%r", "This string is printed in reverse"); # returns the reversed string
```