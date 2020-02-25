# C Language


				 Preprocessor 

Preprocessor statements are identified by the presence of a pound sign,#, 
which must be the first non-space character on the line 

Our first "challenge" used a preprocessor directive, specifically the 
the #include directive 
the #include its a preprocessor command 

we will utilize the preprocessor to:
create are own constants and macros with the #define statement 
build your own library files with #include statement
make more powerful programs with the conditional #ifdef,#endif,#else, and 
#ifndef statements 

Library is just using existing code 
all the preprocessors directives help for the efficiency of the code 
run before the compiler 
The include is a preprocessor directive 
Anything that starts with # symbol is a preprocessor command 

these preprocessor directives can be anywhere but most usually are in top 

similar to import statement in java 
In the above example, the compiler is instructed to "include" in your 
programm the contents of the file with the name stdio.h
called a header file because it is usually included at the head of 
a program source file
.h extension 
Just tell i want some code in my c file 

 				Header 

Header files define information about some of the functions that are provided
by that file

stdio.h is the standard C library header and provides functionality for 
displaying output, among many other things 
we need to include this file in a program when using the printf() function 
from the standard library
stdio.h contains the information that the compiler needs to understand what 
printf() means, as well as other functions that deal with input and output 
stdio, is short for standard input/output 

Other examples are reading and writing to the console , read write files 
all sorts of different things networking code many many different libs 

header files specify information that the compiler uses to integrate any 
predefined functions within a program

You will be creating your own header files for use with your programs 

Header files allow you to reuse functionality written in c 

Syntax

header file names are case sensitive on some systems, so you should always 
write them in lowercase 

Two ways to #include header files in a program
	Using angle brackets(#include<Jason.h>)
		Tells the preprocessor to llok for file in one or more
		standard system directories
	 Using double quotes(#include "Jason.h")
		Tells the  preprocessor to first look in the current dir

Every C compiler that conforms to the C11 standard will have a set of 
standard header files supplied with it 

Header file include many different things 

executable code normally goes into a source code file not a header file 
