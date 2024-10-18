# Checkignore

Simple C++ program to check if a file is inside of a gitignore.

## Running it

You will need a c++ compiler and then just do:

```cpp
g++ main.cpp -o main
```

```cpp
./main <filename> <file_to_search>
```

Example:

```cpp
./main ./.gitignore .env
```
