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
	

				Type 			Constant Examples		printf chars
					
					
  				char			'a','\n'			%c
				_Bool			 0, 1				%i, %u
				short int		 --				%hi, %hx, %ho
				unsigned short int  	 --				%hu, %hx, %ho
				int			 12, -97, 0xFFEO, 0177		%i, %x, %o
				unsigned int		 12u, 100u, 0XFFu		%u, %x, %o
				long int 		 12L, -2001, 0xffffL		%li, %lx, %lo
				unsigned long int 	 12UL, 100ul, 0xffeeUL		%lu, %lx, %lo
				long long int 		 0xe5e5e5e5LL, 500ll		%lli, %llx
				unsigned long long int 	 12ull, 0xffeeULL		%llu, %llx, %llo
				float			 12.34f, 3.le-5f		%f, %e, %g, %a
				double 			 12.34, 3.le-5			%f, %e, %g, %a
				long double		 12.34l, 3.le-5l		%Lf, %Lg
				


							Command Line Arguments 

- There are times when a program is developed yhat requires the user to enter a small amount of information at the terminal 
- This information might consist of a number indicating the triangular number that you want to have calculated or a word that you want 
  to have looked up in a dictionary 
  
 - Two ways of handling this 
 	- Requesting the data from the user 
	- supply the information to the program at the time the program is executed(command-line-arguments)
	
- We know that the main() function is a special program in C
	- Entry point of the program 
	
- When main() is called by the runtime system, two arguments are actually passed to the function 
	- the first argument(argc for argument count) is an integer value that specifies the number of arguments typed on the cmd
	- the second argument(argv for argument vector) is an array of character pointers(Strings)
	

- The first entryin this array is a pointer to the name of the program that is executing 


								Operators
								
- Operators are functions that use a symbolic name 
	- perform mathematical or logical functions 
	
	
- Operators are predefined in C, just like they are in most other languages, and most operators tend to be combined with the infix style 

- A logical Operator (sometimes called a "Boolean operator") is an operator that returns a Boolean result that's based on the Boolean 
  result of one or two other expressions 
  
 - An arithmetic operator is a mathematical function that takes two operands and performs a calculation on them 
 
 - Other operators include assignment, relational(<,>,!=),bitwise(<<,>>,~)
 
 							Expressions and Statements 
							
- Statements form the basic program steps of C, and most statements are constructed from expressions 

- An expression consists of a combinatioin of operators and operands 
	- operands are what an operator operates on 
	- operands can be constants, variables, or combinations of the two
	- every expression has a value 
	
	-6
	4+21
	a*(b + c/d)/20
	q= 5*2
	x = ++q%3
	q>3
	
	
Statements are the building blocks of a program(declaration)
	A program is a series of statements with special syntax ending with a semicolon(simple statements)
	A complete instruction to the computer 
	
Declaration Statement: int Jason;
Assignment Statement: Jason = 5;
Function Call Statement: printf("Jason")
Structure Statement: while(Jason < 20) Jason = Jason + 1;
Return Statement: return 0;


- two or more statements grouped together by 
  enclosing them in braces(block)
  
  						
						int index = 0;
						while(index < 10)
						{
							printf("hello");
							index = index + 1;
						}
						
						Basic Operators 
						
- An arithmetic operator is a mathematical function that takes two operands and performs a calculation on them 

- A logical operator("sometimes called a "Boolean Operator") is an operator that returns a Boolean result that's based on the Boolean 	   result of one or two other expressions 

- Assignment operators set variables equal to values 
	- assigns the value of the expression at its right to the variable at its left 
	
						Arithmetic Operators in C 
						
				Operator		Description 		 `	Example
				   +			Adds 2 operands		 	 A+B = 30 
				   
				   -			Substracts second 	 	 A-B = 30
				   			operand from the first	
							
				   *			Multiplies both operands  	 A*B = 30
				   
				   /			Divide numerator by de-numerator  B/A = 2
				   
				   %			Modulus operator and remainder
				   			of after an integer division	 B%A= 0
							
				   ++			Increment operator increases 
				   			the integer value by one 	A++ = 11
							
				   --			Decrement operator decreases 
				   			the integer value by one 	A-- = 10
							
							
									Logical Operators 
							
				Operator				Description				Example 
				
				&&				Called Logical And operator.			(A&&B)is false
								If both the operands is non-zero
								,then the condition becomes true
				
				||				Called Logical OR operator.If any 
								of the operands are non-zero then the 		(A||B)is True
								condition becomes true				
				
				!				Called Logical NOT Operator.it is used 
								to reverse the logical state of its operand	!(A && B)is True
								.if a condition is true ,then logical NOT 
								operator will make it false



								Bitwise Operators 
								
- C offers bitwise logical operators and shift operators 
	- look something like the logical operators you saw earlier but are quite different
	- operate on the bits in integer values 
	
- Not used in the common program 

- One major use of the bitwise AND, &, and the bitwise OR, |, is in operations to test and set individual bits in an integer variable 
	- can use individual bits to store data that involve one of two choices 
	
- You could use a single integer variable to store several characteristics of a person.
	- store whether the person is male or female with one bit 
	- use three bits to specify whether the person can speak French, German, or italian
	- another bit to record whether the person's salary is $50,000 or more 
	- in just four  bits you have a substantial set of data recorded
	
							
			Operator			Description						Example
			
			
			&				Binary AND Opertor copies a bit to the result if it      (A&B) =12 
							exists in both operands.				
			
			|				Binary OR Operator copies a bit if it exists in either   (A | B) = 61
							operand							
							
			^				Binary XOR Operator copies the bit if it is set in one	(A^B) = 49
							operand but not both
			
			~				Binary Ones Complement Operator is unary and has the	(~A) = -61
							effect of 'flipping bits'				
			
			<<				Binary Left Shift Operator.The left operands value is 
							moved left by the num of bits specified by the right operand
			
			>>				Binary Right Shift Operator.The left operands value is 
							moved right by the number of bits specified by the right
							operand
							
							
							Type Conversions 
							
- conversion of data between different types can happen automatically (implicit conversion) by the language or explicit by the program
	- to effectively develop C programs, you must understand the rules used for the implicit conversion
	  of floating-point and integer values in C
	  
- Normally, you shouldn't mix types, but there are occasions when it useful 
	- remember, c is flexible, gives you the freedom, but, do not abuse it 
	
- Whenever a floating-point value is assigned to an integer variable in C, the decimal portion of the number gets truncated

- int x = 0;
  float f = 12.125;
  x = f; // value stored in x is the number 12, only the int portion is stored 
  
- assigning an integer variable to a floating variable does not cause any change in the value of the number
	- value is converted by the system and stored in the floating variable 
	
- when performing integer arithmetic
	- if two operands in an expression are integers then any decimal portion resulting from a division
	  operation is discarded, even if the result is assigned to a floating varibale 
	  
	- if one operand is an int and the other is a float then the operation is performed as floating point operation 
	
	
							Cast Operator 
							
- The type cast operator has a higher precedence than all the arithmetic operators except the unary minus and unary plus 

	(int)21.51 + (int)26.99
	
- is evaluated in C as 
	21 + 26 
	
							sizeof operator 
							
- You can find out how many bytes are occupied in memory by a given type by using the sizeof operator 
	- sizeof is a special keyword in C 
	- different data types are going to be presented from memory with different sizes(depend on System Architecture)
	
- sizeof is actually an operator, and not a function
	- evaluated at compile time and not at runtime, unless a varibale-length array is used in its argument 
	
- The argument to the sizeof operator can be a variable, an array name, the name of a basic data type, the name of a derived data type,
  or an expression
  
- sizeof(int) will result in the number of bytes occupied by a variable of type int 

- You can also apply the sizeof operator to an expression 
	- result is the size of the value that results from evaluating the expression 
	
- Use the sizeof operator wherever possible to avoid having to calculate and hard-code sizes into your program 


							Other Operators 
							
- the asterisk "*" is an operator that represents a pointer to a variable .
	- *a;
	
- ?: is an operator used for comparisons
	- if condition is true ? then value X : otherwise value Y 
	- name is the ternary operator
	
						Operator Precedence
						
- Opearator precedence determines the grouping of terms in an expression and decides how an expression is evaluated
	- dictates the order of evaluation when two operators share an operand 
	- certain operators have higher precedence than others 
	- for example, the multiplication operator has a higher precedence than the addition operator 
	
	x = 7 + 3 * 2;
	
- Can result in 13 or 20 dependeing on the order of each operands evaluation 

- the order of executing the various operations can make a difference, so C needs unambiguous rules for choosing what to do first 

- Each operator is assigned a precedence level 
	- multiplication and division have a higher precedence than addition and subtraction, so they are performed first 
	
- Whatever is enclosed in parenthesis is executed first, should just always use () to group expressions 


						Table(highest to lowest) 
						
			Category 		Operator		Associativity
			
			
			Postfix			()[]->.++--		Left to right
			
			Unary			+-!~++--(type)*&sizeof  Right to left
			
			Multiplicative		*/%			Left to right
			
			Additive		+-			Left to right
			
			Shift			<<>>			Left to right
			
			Relational		<<=>>=			Left to right
			
			Equality		== !=			Left to right






