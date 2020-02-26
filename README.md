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

				Displaying Output 

In our first challenge, you should have noticed that there was a line of code that included the word "printf"

printf() is a standard library function 

use the include directive and use the output through the printf function 

printf can be used for debugging 

				
				Reading input from the terminal 
				
Very useful to ask the user to enter data into a program 
	via the terminal/console 
	
The C library contains several inputs functions, and scanf() is the most general of them 
	can read a variety of formats 
	
Reads the input from the standard input stream stdin and scans that input according to the format provided
	format can be a simple constant string, but you can specify %s, %d, %c, %f etc, to read strings, integer,character or floats
	
if the stdin is input from the keyboard then text is read in because the keys generate text characters: letters, digits and punctuation
	when you enter the integer 2014, you type the characters 2 0 1 and 4
	if you want to store that as numerical value rather than as a string, your program has to convert the string 
	character-by-character to a numerical value and this is the job of the scanf function 
	
scanf

the printf() function uses variable name, constants and expressions as its argument list
the scanf() function uses pointers to variables

Remember these 3 rules about scanf:
	1) returns the number of items that is succesfully reads
	2) If you use scanf() to read a value for one of the basic variable types we've discussed, precede the variable name with an &
	3) if you use scanf() to read a string into a character array, don't use an &
	
When a program uses scanf to gather input from the keyboard, it waits for yu to input some text
	when you enter some text and press enter, then program proceeds and reads the input 
	
String is a word 

Integer is a number 

					Data Types

-Remember that a program needs to store the instructions of its program and the data that its acts upon while your computer is 
executing that program 

	- This information is stored in memory RAM 
	- RAM's contents are lost when the computer is turned off
	- Hard Drives store persistent data 
	
-You can think of RAM as an ordered sequence of boxes 

	- the box is full when it represents 1 or the box is empty when it represents 0
	- each box represents one binary digit, either 0 ro 1 (true and false)
	- each box is called a bit 
	
-bits in memory are grouped into sets of eight(byte)
	- each byte has been labeled with a number (address)
	- the address of a byte uniquely references that byte in your computer's memory 
	
-Again, memory consists of a large number of bits that are in groups of eight(called bytes)and each byte has a unique address

					Variables 

-The true power of programs you create is their manipulation of data 
	- So, we need to understand the different data types you can use, as well as how to create and name variables
	
- Constants re types of data that do not change and retain their values throughout the life of the program

- Variables are types of data may change or be assigned values as the program runs 

- Variables are the names you give to computer memory locations which are used to store values in a computer program

- For example, assume you want to store two values 10 and 20 in your program and at later stage, you want to use these 2 values:
	-Create variables with appropriate names
	-Store tour values in those 2 varibales
	-Retrieve and use the stored values from the varibales 
	
							Naming Varibales
							
- The rules for naming varibales in C is that all names must begin with a letter or underscore(_)and can be followed by any combination
  of letters(upper or lowercase), underscores, or the digits 0-9 
 
 - Use meaningful names when selecting varibale names
 	- Can dramatically increase the readability of a program and pay off in the debug and documentation phases

							Data Types 
							
- Some types of data in programs are numbers, letters or words
	- Computer needs a way to identify and use these different kinds 
	
- A data type represents a type of the data which you can process using your program
	- examples include ints, floats, doubles, e.t.c
	- also correspond to byte sizes on the platform of your program

primitive data types are types that are not objects and store all sorts of data

							Declaring Variables 
							
- Declaring a variable is when tou specify the type of the variable followed by the variable name
	- specifies to the compiler how a particular variable will be used by the program
	
- for example, the keyword int is used to declare the basic integer variable
	- type-specifier variable-name;
	


