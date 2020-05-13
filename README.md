# tech-talk
Tech talk presentation to colleague. 

Topic:
assert()

Header file:
#include<assert.h>

Declaration:
void assert(int expression);

Behaviour:
If the expression evaluates to TRUE, then assert() does nothing. If the expression evaluates to FALSE, then assert() displays an error message on stderr and aborts the program execution.

Advantages: 

1- We will get the more descriptive message on standard error:
   Assertion failed: expression, file filename, line line number

2- We can disable the assert() calls through the program to make it faster.
   g++ -DNDEBUG test.cpp

But these are the validation at runtime. 

So, how we can do the validation on runtime. We can std::static_assert() to achive compile time validation.
