# STL - Master Notes - For Ecommerce Project Explanation

## 1. STL Components
- Containers: vector, map, set, etc.
- Algorithms: sort, find, count
- Iterators: pointer to container element

## 2. vector vs array vs list
- array: Fixed size, fast access O(1)
- vector: Dynamic, fast access O(1), slow insert middle O(n)
- list: Doubly linked list, slow access O(n), fast insert O(1)

## 3. map vs unordered_map vs set - INTERVIEW FAVORITE
- map: Sorted (Red-Black Tree), O(log n), sorted output
  Use: Contact Book - need sorted names
- unordered_map: Not sorted (Hash Table), O(1) avg, fastest
  Use: Cart - need fast search
- set: Unique + Sorted, O(log n)
  Use: Wishlist - no duplicates

## 4. When we used what in Projects?
- Student Management: vector<Student> + sort with lambda + max_element
- Contact Book: map<string,string> -> auto sorted contacts
- Bank: vector<Account> + log with ios::app
- Ecommerce: map catalog + unordered_map cart + set wishlist + priority_queue top selling

## 5. Lambda + Comparator
sort(v.begin(), v.end(), [](Product &a, Product &b){ return a.price < b.price; });

## 6. priority_queue
- Max Heap by default
- top() gives largest element in O(1)
- Used for Top Selling product

