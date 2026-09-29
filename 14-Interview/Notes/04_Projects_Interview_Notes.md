# Resume Projects - How to Explain in Interview

## Project 1: Student Management System
Tell:
"I used vector<Student> for dynamic storage, class for encapsulation,
binary file handling for permanent storage, and STL algorithms like
sort, remove_if, max_element with lambda for sorting and topper.
Time complexity O(n log n) for sort."

If they ask: Why binary file?
Ans: Binary is faster than text and can store whole object at once with write((char*)&obj, sizeof(obj))

## Project 2: Bank Management System
Tell:
"I used class Account with private balance for security,
vector for storage, and two files: binary file for data and text file
with ios::app mode for transaction log like real banks.
Deposit/Withdraw O(n) search, can be optimized to O(log n) with map."

## Project 3: Ecommerce Cart System - BEST PROJECT
Tell:
"This project shows my STL mastery. I used:
- map for catalog because it keeps products sorted by ID (O log n)
- unordered_map for cart because cart needs fastest O(1) add/search
- set for wishlist because set automatically prevents duplicates
- priority_queue for Top Selling because it gives max in O(1) using max-heap
- vector + sort with lambda comparator for price sorting
This project combines all STL containers and shows when to use which."

