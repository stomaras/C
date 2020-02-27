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
	
- We understand that C supports many different types of variables and each type of variable is used for storing kind of data
	- types that store integers
	- types that store nonintegral numerical values
	- types that store characters
	
- Some examples of basic data types in C are:
	-int
	-float
	-double
	-char
	-Bool
	
- The difference between the types is in the amount of memory they occupy and the range of values they can hold 
	- the amount of storage that is allocated to store a particular type of data
	- depends on the computer you are running (machine-dependent)
	- an integer might take up 32 bits on your computer, or perhaps it might be stored in 64
	
						Int
						
- A variable of type int can be used to contain integral values only(values that do not contain decimal places)

- A minus sign preceding the data type and variable indicates that the value is negative 

- the int type is a signed integer
	- it must be an integer and it can be positive , negative, or zero 
	
- if an integer is preceded by a zero and the letter x (either lowercase or uppercase), the value is taken as being expressed
  in hexadecimal(base 16) notation 
  
  	int rgbColor = 0xFFEF0D;

- the values 158, -10, and 0 are all valid examples of integer constants
	- no embedded spaces are permitted between the digits
	- values larger than 999 cannot be expressed using commas(12,000 must be written as 12000)
	
						Float 
						
- A variable to be of type float can be used for storing floating-point numbers(values containing decimal places) 

- the values 3., 125.8, and -.0001 are all valid examples of folating-point 
  constants that can be assigned to a variable
  
 - floating-point constants can also be expressed in scientific notation
 	- 1.7e4 is a floating-point value expressed in this notation and represents the value 1.7 x 10 to the power of 4 
	
						Double 
						
- the double type is the same as type float, only with roughly twice the precision 
	- used whenever the range provided by a float varibale is not sufficient
	- can store twice as many significant digits 
	- most computers represent double values using 64 bits 
	
- all floating-point constants are taken as double values by the C compiler 

- To explicity express a float constant, append either an f or F to the End of the number 
	- 12.5f
	
						_Bool
						
- the _Bool data type can be used to store just the values 0 or 1
	- used for indicating an on/off, yes/no, or true/false situation(binary choices)
	
- _Bool variables are used in programs that need to indicate a Boolean condition 
	- a variable of this type might be used to indicate whether all data has been read from a file 
	
- 0 is used to indicate aa false value

- 1 indicates a true value 

						Other Data Types 
						
- the int type will propably meet most of your integer needs when beginning in C 

- However, C offers many other integer types 
	- gives the programmer the option of matching a type to a particular use case
	- integer types vary in the range of values offered and in whether negative numbers can be used
	
- C offers three adjective keywords to modify the basic integer type(can also be used by itsef)
	- short, long, and unsigned
	
- The type short int, or short may use less storage than int ,thus saving space when only small numbers are needed
	-can be used when the program needs a lot of memory and the amount of available memory is limited 
	
- The type long int, or long, may use more storage than int,thus enabling you to express larger integer values 

- The type long long int, or long long may use more storage than long 
	- A constant value of type long int is formed by optionally appending the letter L(upper-or lowercase) onto the end of an 		  integer constant
		- long int numberOfPoints = 131071100L;
		
- Type specifiers can also be applied to doubles 
	-long double US_deficit_2017;
	
- A log double constant is written as a floating constant with the letter l or L immediatly following
	- 1.234e+7L
	
- The type unsigned int, or unsigned, is used for variables that have only nonnegatibe values(positive)
	- unsigned int counter;
	- the accuracy of the integer variable is extended
	
- The keyword signed can be used with any of the signed types to make your intent explicit
	- short, short int, signed short, and signed short int are all names for the same type
	
						Enums 
						
- A data type that allows a programmer to define a variable and specify the valid values that could be stored into that variable
	- can create a variable named "myColor" and it can only contain one of the primary colors, red, yellow, or blue and no other 		  values
	
- Your first have to define the enum type and give it a name
	- initiated by the keyword enum 
	- then the name of the enumereted data type 
	- then list of identifiers(enclosed in a set of curly braces) that define the permissible values that can be assigned to the 		  type 
	
- enum primaryColor { red, yellow, blue };

- variables declared to be of this data type can be assigned the values re, yellow, and blue inside the program, and no other values 

- To declare a variable to be of type enum primaryColor
	- use the keyword enum 
	- followed by the enumerated type name
	- followed by the variable list. So the statement
	
- enum primaryColor myColor, gregsColor;

- defines the two variables myColor and gregsColor to be of type primaryColor
	- the only permissible values that can be assigned to these variables are the names red, yellow and blue
	- myColor = red;

- Another example
	- enum month { January, February, March, April, May, June, July, August, September, October, November, December
		};
		
							Enums as ints 
							
- the compiler actually treats enumeration identifiers as integer constants 
	- first name in list is 0
	
- enum month thisMonth;

- thisMonth = February;

	- the value 1 is assigned to thisMonth (and not the name February) because it is the second identifier listed inside the 
	  the enumeration list 
	  
	- if you want to have a specific integer value associated with an enumeration identifier, the integer can be assigned to the
	  identifier when the data type is defined
	  
	  enum direction { up, down, left = 10, right};
	  
	  - an enumerated data type direction is defined with the values up, down, left, right
	  - up = 0 because it appears first in the list
	  - 1 to down because it appears next
	  - 10 to left because it is explicity assigned this value
	  - 11 to right because it appears immediatly after left in the list 
	  
	  					Char 
						
- Chars represent a single character such as the letter 'a', the digit character '6'. or a semicolon (';')

- Character literals use single quotes such as 'A' or 'Z'

- You can also declare char variables to be unsigned 
	- can be used to explicity tell the compiler that a particular variable is a signed quantity
	
- We will talk about a character string in another lecture, much different than a single character 

		char broiled;  /* declare a char variable */

		broiled = 'T' /*OK */
		broiled = T; /* NO! thinks T is a variable */
		broiled = "T" /*N0! Thinks "T" is a string */

	- if you omit the quotes, the compiler thinks that T is the name of a varibale 
	
	- if you use double quotes, it thinks you are using a string 
	
	- you can also use the numerical code to assign values 
	
						
							Escape Characters 
						
- C contains special characters that represent actions 
	- backspacing
	- going to the next line 
	- making the terminal bell ring ( or speaker beep)
	
- We can represent these actions by using special symbol sequences 
	- called escape sequences 
	
- Escape sequences must be enclosed in single quotes when assigned to a character variable 

char x = '\n';


						Escape Characters

						Sequence	Meaning 
 
						\a		Alert( ANSI C).
						\b		Backspace
						\f		Form feed.
						\n		Newline
						\r		Carriage return 
						\t		Horizontal tab
						\v		Vertical tab
						\\		Backslash(\)
						\'		Single quote(')
						\"		Double quote(")
						\?		Question mark(?)
						\0oo		Octal value.(o represents an octal digit)
						\xhh		Hexadecimal value.(h represents a hecadecimal digit.)
						
						
						Format Specifiers 

- format specifiers are used when displaying variables as output 
	- they specify the type of data of the variable to be displayed 
	
						int sum = 89;
						printf("The sum is %d\n",sum);
						
- The printf() function can display as output the values of variables 
	- has two items or arguments enclosed within the parentheses
	- arguments are seperated by a comma
	- first argument to the printf() routine is always the character string to be displayed 
	- along with the display of the character string, you might also frequently want to have the value of certain program variables 	  displayed
	
- The percent character inside the first argument is a special character recognized by the printf() function 
	- The character that immediatly follows the percent sign specifies what type of value is to be displayed 
  
						









