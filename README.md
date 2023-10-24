# Loops
A basic cpp codes while describing loops

## Theory:
- In Programming, sometimes there is a need to perform some operation more than once or (say) n number of times.
- Loops come into use when we need to repeatedly execute a block of statements.
- We have already stated that a loop mainly consists of three statements – initialization expression, test expression, and update 
  expression. The syntax of the three loops – For, while, and do while mainly differs in the placement of these three statements.

### Note (how the code works):
The initialization and increment statements can perform operations unrelated to the condition statement, or nothing at all – if you wish to do. But the good practice is to only perform operations directly relevant to the loop.
A variable declared in the initialization statement is visible only inside the scope of the for loop and will be released out of the loop.
Don’t forget that the variable which was declared in the initialization statement can be  modified during the loop, as well as the variable checked in the condition.

### For example:
- Suppose we want to print “Hello World” 10 times.

### Types of Loops:
- while loop
- for loop
- do-while loop

### While loop:
- While studying for loop we have seen that the number of iterations is known beforehand, i.e. 
- The number of times the loop body is needed to be executed is known to us.
- while loops are used in situations where we do not know the exact number of iterations of the loop beforehand.
- The loop execution is terminated on the basis of the test conditions.
### syntax:
```
initialization expression;
while (test_expression)
{
   // statements
 
  update_expression;
}
```

### For Loop:
- A For loop is a repetition control structure that allows us to write a loop that is executed a specific number of times.
- The loop enables us to perform n number of steps together in one line.
### syntax:
```
for (initialization expr; test expr; update expr)
{    
     // body of the loop
     // statements we want to execute
}
```
### Do while Loop:
- In Do-while loops also the loop execution is terminated on the basis of test conditions.
- The main difference between a do-while loop and the while loop is in the do-while loop the condition is tested at the end of the loop 
  body, i.e do-while loop is exit controlled whereas the other two loops are entry-controlled loops. 
- Note: In a do-while loop, the loop body will execute at least once irrespective of the test condition.
### Syntax: 
```
initialization expression;
do
{
   // statements
   update_expression;
} while (test_expression);
```
### Important Points:
- Use for a loop when a number of iterations are known beforehand, i.e.
- The number of times the loop body is needed to be executed is known.
- Use while loops, where an exact number of iterations is not known but the loop termination condition, is known.
- Use do while loop if the code needs to be executed at least once like in Menu-driven programs.

### Difference of do while loop and while loop:
- In while it first checks the condition and then execute the code.
- In do while it first executes the code and then checks the condition.

### Outcomes:
- The codes helps us to understand the use of loops and the syntax.
- It prints the last 5 digits of the prn separately.(for loop)
- It takes the input of marks from the user and the it finds and avg according to the avg it will grade.(for loop and if else)
- Prints the table of any number taken fom the user.(using while loop)
- Prints the table of any number taken fom the user.(using for loop)
- Prints the table of any number taken fom the user.(using do while loop)
- Prints the no of ones in a binary number.
