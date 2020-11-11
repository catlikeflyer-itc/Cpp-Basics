# C++ Basics
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