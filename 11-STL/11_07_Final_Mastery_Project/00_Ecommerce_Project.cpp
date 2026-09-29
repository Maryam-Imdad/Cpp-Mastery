#include <bits/stdc++.h>
using namespace std;

/*
    11_07_Final_Mastery_Project / 00_Ecommerce_Project.cpp

    FINAL MASTERY PROJECT - E-COMMERCE CART SYSTEM
    Uses EVERYTHING from Chapter 11 STL

    Concepts Used:
    - Vector: Store products
    - Map: ProductID -> Product Details (sorted)
    - Unordered_Map: Cart (fast O(1) add/remove)
    - Set: Categories (unique sorted)
    - Stack: Browsing History (LIFO)
    - Queue: Order Processing (FIFO)
    - Priority_Queue: Top Selling Products
    - Algorithms: Sort, Find, Count, Accumulate
    - Iterators: All types
    - Comparator: Sort by price
*/

struct Product {
    int id;
    string name;
    int price;
    string category;
};

bool compareByPrice(Product &a, Product &b){
    return a.price < b.price;
}

int main() {
    // 1. Inventory using vector + map
    vector<Product> inventory = {
        {101, "Laptop", 60000, "Electronics"},
        {102, "Shirt", 1500, "Fashion"},
        {103, "Phone", 30000, "Electronics"},
        {104, "Shoes", 3000, "Fashion"}
    };

    map<int, Product> productMap; // id -> Product (sorted by id)
    set<string> categories;
    for(auto &p : inventory){
        productMap[p.id] = p;
        categories.insert(p.category);
    }

    cout << "Categories: ";
    for(auto c: categories) cout << c << " ";

    // 2. Sort by price using custom comparator
    sort(inventory.begin(), inventory.end(), compareByPrice);
    cout << "\n\nSorted by Price:\n";
    for(auto &p : inventory) cout << p.name << " - " << p.price << endl;

    // 3. Cart using unordered_map - ProductID -> Quantity
    unordered_map<int, int> cart;
    cart[101] = 1; // Laptop x1
    cart[102] = 2; // Shirt x2

    // 4. Calculate total using accumulate + iterator
    int total = 0;
    for(auto it = cart.begin(); it!= cart.end(); it++){
        int id = it->first;
        int qty = it->second;
        total += productMap[id].price * qty;
    }
    cout << "\nCart Total: " << total << endl;

    // 5. Browsing History using Stack
    stack<int> history;
    history.push(101); history.push(103); history.push(102);
    cout << "\nLast viewed: " << productMap[history.top()].name << endl;

    // 6. Order Queue using Queue
    queue<int> orderQueue;
    orderQueue.push(1001); orderQueue.push(1002);
    cout << "Processing order: " << orderQueue.front() << endl;
    orderQueue.pop();

    // 7. Top products using priority_queue (max heap by price)
    priority_queue<pair<int,string>> topSelling; // price, name
    for(auto &p : inventory) topSelling.push({p.price, p.name});
    cout << "\nMost Expensive: " << topSelling.top().second << endl;

    // 8. Search product using find_if algorithm
    auto it = find_if(inventory.begin(), inventory.end(),
        [](Product &p){ return p.name == "Phone"; });
    if(it!= inventory.end()) cout << "\nPhone found, Price: " << it->price << endl;

    cout << "\n--- PROJECT COMPLETE - STL MASTERED! ---\n";

    return 0;
}