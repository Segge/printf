ALX Software Project on C Programming
Team Project Title: printf function

This project is all about designing custom made printf function for the c programming language. It is designed to take account of various inputs and optional arguments, just to perform similar operations like the standard printf function does. This has been named _printf.

Synopsis

This function _printf() performs the same implementation of printf function by writing to the standard output, the standard output stream with the formats and prints data.


Description

The _printf() function produces output according to a format which is described below. This function write its output to the stdout, the standard output stream. It returns the number of printed characters when the function is successful and -1 when the function fails.

The prototype for this function is
int _printf(const char format, ...);

The prototype has one mandatory format argument, and a number of other arguments.

Format of the format string:

This format string is a character string, beginning and ending with double quotes. The format string is composed of zero or more directives; ordinary characters (not %), and conversion specifications, each of which results in fetching zero or more subsequent arguments.
Each conversion specification is presented by the character % and ends with a conversion specifier. In between there may be (in this order): zero or more flags, an optional field width, an optional precision modifier, an optional length modifier, the flag characters. 

flag Characters
The character % is followed by zero or more of the following
flags:

#   For o conversions the first character of the output string is made zero (by prefixing a 0 if it was not zero already). For x and X conversions, a nonzero result has the string "0x" or "0X" respectively added.

0   (Not implemented yet) The value should be zero padded. For d, i, o, u, x, and X the converted value is padded on the left with zeros. If the 0 and - flags both appear, the 0 flag is ignored. If a precision is given with a numeric conversion, the 0 flag is ignored.

' '     (Blank Space) The argument is padded with a single blank space before a positive number or empty string produced by a signed conversion.

+	A sign (+ or -) should always be placed before a number produced with a signed conversion. By default, only negative numbers have this sign.
The field width.

-	(Minus sign, not implemented yet) The converted value is to be left adjusted on the field boundary, (Default is right justification) and padded with blanks in the right rather than on the left with blanks or zeros. This flag overrides 0 if both are given.

An optional decimal digit string (with nonzero first digit) specifying a minimum field width. If the converted value has fewer characters than the field width, it will be padded with spaces on the left if the flag - is not present, and on the right if it is present. A character * can be used instead of a decimal string. In this case, an argument passed to the function will be taken as the width value.

printf("%5d", number);
or

printf("%*d", width, number);

Precision
An optional precision, in the form of a period ('.') followed by an optional decimal digit string. A negative precision is taken as if the precision were omitted. This gives the minimum number of digits to appear for d, i, o, u, x, and X conversions, or the maximum number of characters to be printed from a string for s and S conversions. A character * can be used instead of a decimal string. In this case, an argument passed to the function will be taken as the precision value.

printf("%.3d", number);
or

printf("%.*d", precision, number);
The length modifiers

Description for Modifier
l	An integer conversion to a long int or unsigned long int argument.
h	An integer conversion to a short int or unsigned short int argument.


Conversion Specifiers
d, i	Argument int is converted to a signed decimal notation. If precision is present,it gives the minimum number of digits that must appear; if the converted value requires fewer digits, then it is padded with zeros on the left. Default precision is 1.

o, u, x, X	The argument is converted to unsigned octal (o), unsigned decimal (u), or unsigned hexamedical (x and X) notation. The letters abcdef are used for x conversion and the letters ABCDEF are used for X conversion. If precision is present, it will give the minimum number of digits that must appear; if the converted value requires fewer digits, then it will be padded with zeros. By default the precision is 1.

c	The int argument is converted to an unsigned char and the resulting character is written. The representation of characters is based off the ASCII coding.

s	The argument received is expected to be a pointer type char * to an array of characters. Characters from this array are printed up to (but not including) a null byte ('\0'). If precision is specified, then this will determine how many characters are taken into account for printing.

%	A ' % ' character is written and no conversion is made. The specification is as follows: %%.

p	A void * pointer argument is printed as hexadecimal in lower caps representing an adress in memory.

S	The argument received is expected to be a pointer type char * to an array of characters. Characters from this array are printed up to (but not including) a null byte ('\0'). Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters).

b	The argument is converted to an unsigned int value and then operated to get its binary representation (base 2).

r	The argument received is expected to be a pointer type char * to an array of characters. Characters from this array are printed in reverse order up to (but not including) a null byte ('\0').

R	The argument received is expected to be a pointer type char * to an array of characters. Characters from this array are encoded to ROT13 and printed in order up to (but not including a null byte ('\0').

Author
Omidire OluSegun & John Odusanya
