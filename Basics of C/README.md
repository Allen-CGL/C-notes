# Basics of C 
 Introduction about C
 
## Data Types and Variables
int:
1. Used for variables that will store intergers.
2. Always take up 4 bytes (32 bits) of memory. Meaning the range of values they can store is necessarily limited to 32 bits worth of information.

unsigned int:
1. Unsigned is a qualifier that can be applied to certain types (including int), which effectively doubles the positive range of variables that type, at the cost of disallowing any negative values.
2. Other qualifiers like short, long, and const. 

char:
1. Used for variables that will store single characters.
2. Always take up 1 byte of memory (8 bits). This mean the range of values they can store is necessarily limited to 8 bits worth of information.
3. ASCII, which is a mapping of characters like A, B, C, etc...... to numeric values in the positive side of this range.

float:
1. Used for variables that will store floating-point values, also known as real numbers.
2. Always take up 4 bytes of memory (32 bits).
3. With 32 bits of precision, some of which might be uesed for an interger part, we are limited in how precise we can be.

double:
1. Used for variables that will store floating-point values, also known as real numbers.
2. They are double precision, meaning always take up 8 bytes of memory (64 bits).
3. Comparing to float, double allows us to be specify much more precise real numbers.

void:
1. It's a type, but not a data type.
2. Function can have void return type, which just menas they don't return a value.
3. The parameter list of a function can also be void. It simply means that the function takes no parameters.
4. Placeholder for "nothing".

bool:
1. Data type which is used for variables that will store either true or false.

string:
1. Data type which is used for variables that will store a series of characters, which programmers typically call a string.
2. Including things such as words, sentences, paragraphs, and the like.

[Data Types and Variable]([https://www.google.com](https://github.com/Allen-CGL/C-notes/blob/88fff88d762b0cf21fd88e2c2d7db208da5b6aff/Basics%20of%20C/Data%20Types%20and%20Variables.c))
