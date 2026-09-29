# C++ Interview - Master Notes - Basics to Advanced

## 1. C vs C++
- C: Procedural, no OOP, printf/scanf
- C++: OOP + Procedural, cin/cout, class, STL

## 2. Memory
- Stack: Fast, small, auto delete, for local vars
- Heap: Slow, large, manual new/delete, for dynamic

## 3. Pointer vs Reference
- Pointer: Can be NULL, can reassign, need * to access
- Reference: Cannot be NULL, cannot reassign, alias, safe

## 4. Static
- static variable: keeps value between calls, initialized once
- static function: can be called without object

## 5. Dangling Pointer - Code
int *p = new int(10);
delete p;
// p is now dangling - points to deleted memory

## 6. const
- const int x = 10; // cannot change
- const int* p = &x; // pointer to const
- int* const p = &x; // const pointer

## 7. File Handling Modes
- ios::in - read, ios::out - write (truncates)
- ios::app - append (for logs - Bank Project)
- ios::binary - binary mode (faster, for objects)
- ios::trunc - delete old content

