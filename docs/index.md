# C++ Basics
Go to OOP in Cpp [here](oop.md)
## Compiling using g++
Write the following on the terminal:
`g++ filename.cpp -o anyname`
and then execute the file with the following in the terminal
`./anyname`

## Variables and data types
The variables in c++ shoud be always referenced before being called, the following table shows how the variables shoud be called:
| Variable | Description | Memory |
| ----------- | ----------- | ----------- | 
| Int | Whole numbers | 4 bytes |
| Float | Floating point single | 4 bytes |
| Double | Floating point double | 8 bytes |
| Char | Character | 1 bytes |
| Bool | Boolean | Null |
| Short int | Short integer | 2 bytes |
| Long int | Long integer | 8 bytes |

### Example
``` 
int main(){
    
    int i = 232323;
    float f = 3.14;
    double d = 3.14;
    short int s = 128;
    long int l = 12342455234;
    bool b = true;
    char x = 'x';
    
} 
```

## Operators
| Operator | Description |
|--------- | ----------- |
| + - * / % | Arithmetic operators |
| < > <= >= != == | Boolean operators |
| += -= *= /= %= | Compound asignation|
| ++ -- | Unitary increase/decrease |
| && \|\| | Logical operators (and / or) |
| & \| ^ ~ << >> (and, or, xor, not, left shift, right shift) | Bitwise operators
| << >> | Stream operator |
| :: | Scope operator |
| new / delete | Memory allocation / disallocation |
| & / * |  Reference / dereference |

- Arithmetic operators perform the basic math we know
- Boolean operators check is true or false
- Coumpound asignation performs the operation on the left variable regarding the right one
- Logical operators are used to add multiple conditions
- Bitwise operators perform operations based on memory

## If else statements

If else statements evaluate a given condition and execute the code if the condition is met.

They use booleans and logical conditions:

```
if (i > 10) && (i < 1) {
    """code to be executed"""
}
else if (false){
    """code to be executed"""
}
else {
    """code"""
}
```
## For loops
They iterarate a code until a determined condition is met. The loop takes three statements `for (statement 1; statement 2; statement 3):
1. Executes before the loop, normally sets the iterator variable.
2. Condition to be met is set.
3. Statement that executes after one iteration, normally sets increment of iterator.

```
for (int i = 0; i < 100; i++){
    """code to be executed"""
}

// The code above runs 100 times before stoping
```
 
## While and do while loops
While loops run until the condition set is met. It takes one statement `while (statement)`, that it's the condition.

While loops need iterators to be defined for it to not run indefinately.
```
int i = 0

while(i < 100)
{
    i++
    """code to be executed"""
}
```

Do while loops rely on the same concept, but run the code inside the `do` before executing the `while`.

```
int i = 0

do{
    """code"""
}
while(i < 100)
{
    i++
    """code to be executed"""
}

// In this case it runs the code below do before starting the loop. Do always goes first.
```

## Functions
Functions are blocks of code that can be 'reused'. They are structured as `return_type function_name(arguments)` For instance, if we'd like to make a sum, writing a function that takes two arguments will do it.
```
int sum(int a; int b)
{
    return a+b;
}
```
The function above returns an `int`, that can be obtained by adding `int a` and `int b`
- To write functions for calling them later, implement a "implementation file", with name `anyname.cpp` Always include the header file.
- To make a library to call back the functions implemented, write a header file as `anyname.h`.
### Header File
```
#include<iostream>

#pragma once
int sum(int, int);
int substract(int, int);
```
### Implementation file
```
#include"header.h"

int sum(int a; int b)
{
    return a+b;
}

int substract(int a; int b)
{
    return a-b;
}

/// You need to compile this implementation for it to work
```

## Libraries 
They are prewritten code blocks that you can reuse in your code. Also you can make your own libraries.
- Libraries written by others can be called as `#include<libname>`.
- Libraries writtwn by you can be accessed as `#include"libname.h"`.

### Namespace
Namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it.

It's basically a set of intructions on how to run the code. They are declared as following: `using namespace something;`.
- The general namespace used is called `std` --> `using namespace std;`.

## Memory assignation

The hardware of a PC consists of small components known as capacitors (saves binary values) and transistors (changes this binary values accordingly).

Each cell in the memory stores a binary value, called bit.
| Cell |
| ---- |
| 0 |
| 1 |
| bit |

Since representing each cell's index as a binary number is complicated, people decided to use the hexadecimal system. 

To further understand easily what's happening, 8 bits were grouped to form a byte.
[Structure of a byte](img/byte.png)

The operator `&` which is 'address of' retrieves the cell number where the variable was stored.
```
int main()
{
    int a = 5;
    cout << &a;
}

>>> """returns the address of the memory"""
```
Consider each cell as a house and a variable lives in it, the `&` acts as a directory to get the house address of the variable.

### Passing parameters as addresses
By doing this, the parameters used in a function are not duplicated in memory.

## Pointers

## Referencing


