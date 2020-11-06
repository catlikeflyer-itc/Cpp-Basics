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
-Arithmetic operators perform the basic math we know
-Boolean operators check is true or false
-Coumpound asignation performs the operation on the left variable regarding the right one
-Logical operators are used to add multiple conditions
-Bitwise operators perform operations based on memory

## 
 
