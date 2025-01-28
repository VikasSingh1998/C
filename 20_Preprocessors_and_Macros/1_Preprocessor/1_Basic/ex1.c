Preprocessor
============
The C preprocessor is a tool that processes the source code before the actual compilation begins. 
It handles directives like #define, #include, and #ifdef to modify the code and prepare it for the compiler.

Key Features of the Preprocessor
---------------------------------
Macros: Replacing constants or inline code using #define.
File Inclusion: Including header files with #include.
Conditional Compilation: Controlling what code gets compiled with #if, #ifdef, and #ifndef.
Predefined Macros: Special macros like __FILE__ and __LINE__ provide information about the code.
=======================================================================================
=======================================================================================
1. Defining Constants with #define
------------------------------------
Example:
--------
#define PI 3.14  // Macro definition

Explanation:
#define PI 3.14: A macro replaces all occurrences of PI with 3.14 during preprocessing.
Useful for constants that are used multiple times to avoid "magic numbers."
==========================================================================================
2. Macros for Inline Functions
-------------------------------
Example:
#define SQUARE(x) ((x) * (x))  // Macro for calculating the square of a number
int result = SQUARE(5);  // Equivalent to (5) * (5)

Explanation:
SQUARE(x) is a macro that calculates the square of a number.
Macros are replaced during preprocessing, making them faster than function calls.
Tip: Be cautious with macros to avoid unintended side effects (e.g., SQUARE(a + b) expands to ((a + b) * (a + b))).
==========================================================================================
3. File Inclusion with #include
---------------------------------
Explanation:
#include <stdio.h>: Includes standard library headers.
#include "myheader.h": Includes user-defined headers.
Ensures modularity and code reusability by splitting code into separate files.
===========================================================================================










