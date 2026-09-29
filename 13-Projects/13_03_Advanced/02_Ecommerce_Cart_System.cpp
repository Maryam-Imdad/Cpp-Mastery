#include <bits/stdc++.h>
using namespace std;

/*
    13_03_Advanced / 02_Ecommerce_Cart_System.cpp
    RESUME PROJECT #5 - STL MASTERY
    This single project uses EVERYTHING from Chapter 9 STL

    map -> Product Catalog (ID -> Product)
    unordered_map -> Cart (Fast O(1))
    set -> Wishlist (Unique)
    priority_queue -> Top Selling (Max Heap)
    vector + algorithm -> Search, Sort, Filter
*/

struct Product {
    int id;
    string name;
    double price;
    int soldCount;
};

map<int, Product> catalog; // Sorted by ID automatically
unordered_map<int, int> cart; // productId -> quantity (Fast)
set<int> wishlist; // Only unique product IDs
// priority_queue for Top Selling: pair<soldCount, productId>
priority_queue<pair<int,int>> topSelling;

void addProductToCatalog(){
    Product p;
    cout << "ID: "; cin >> p.id;
    cout << "Name: "; cin.ignore(); getline(cin, p.name);
    cout << "Price: "; cin >> p.price;
    cout << "Sold Count: "; cin >> p.soldCount;
    catalog[p.id]=p;
    topSelling.push({p.soldCount, p.id});
    cout << "Product Added to Catalog!" << endl;
}

void viewCatalog(){
    if(catalog.empty()){ cout << "Catalog Empty!" << endl; return; }
    cout << left << setw(6) << "ID" << setw(20) << "Name" << setw(10) << "Price" << "Sold" << endl;
    cout << string(50,'-') << endl;
    for(auto &pair : catalog){
        auto &p = pair.second;
        cout << left << setw(6) << p.id << setw(20) << p.name << setw(10) << p.price << p.soldCount << endl;
    }
}

void addToCart(){
    int id, qty;
    cout << "Product ID: "; cin >> id;
    if(catalog.find(id)==catalog.end()){ cout << "Product not in catalog!" << endl; return; }
    cout << "Quantity: "; cin >> qty;
    cart[id] += qty; // unordered_map O(1)
    cout << "Added to Cart!" << endl;
}

void viewCart(){
    if(cart.empty()){ cout << "Cart Empty!" << endl; return; }
    double total=0;
    cout << "\n--- Your Cart (unordered_map) ---" << endl;
    for(auto &c : cart){
        Product &p = catalog[c.first];
        double sub = p.price * c.second;
        cout << p.name << " x " << c.second << " = " << sub << endl;
        total+=sub;
    }
    cout << "Total Bill: Rs. " << total << endl;
}

void addToWishlist(){
    int id; cout << "Product ID for wishlist: "; cin >> id;
    if(catalog.find(id)==catalog.end()){ cout << "Not found!" << endl; return; }
    if(wishlist.insert(id).second) cout << "Added to Wishlist (set)!" << endl;
    else cout << "Already in Wishlist! (set prevents duplicate)" << endl;
}

void viewWishlist(){
    cout << "\n--- Wishlist (set - unique & sorted) ---" << endl;
    for(int id : wishlist) cout << catalog[id].name << " - Rs." << catalog[id].price << endl;
}

void showTopSelling(){
    if(topSelling.empty()){ cout << "No sales data!" << endl; return; }
    auto top = topSelling.top(); // Max Heap
    cout << "\n🔥 Top Selling Product: " << catalog[top.second].name
         << " | Sold: " << top.first << " units" << endl;
}

void sortByPrice(){
    vector<Product> v;
    for(auto &p : catalog) v.push_back(p.second);
    sort(v.begin(), v.end(), [](Product &a, Product &b){ return a.price < b.price; });
    cout << "\n--- Sorted by Price (Low to High) - Using lambda comparator ---" << endl;
    for(auto &p : v) cout << p.name << " - Rs." << p.price << endl;
}

void searchProduct(){
    string keyword; cout << "Search keyword: "; cin >> keyword;
    cout << "Results:" << endl;
    for(auto &pair : catalog){
        if(pair.second.name.find(keyword)!=string::npos){
            cout << pair.second.name << " - Rs." << pair.second.price << endl;
        }
    }
}

int main(){
    cout << "====== ECOMMERCE CART - STL MASTERY ======" << endl;
    cout << "map + unordered_map + set + priority_queue + vector + sort + lambda" << endl;
    int ch;
    while(true){
        cout << "\n1.Add to Catalog 2.View Catalog 3.Add to Cart 4.View Cart 5.Wishlist Add 6.Wishlist View 7.Top Selling 8.Sort by Price 9.Search 10.Exit\nChoice: ";
        cin >> ch;
        if(ch==1) addProductToCatalog(); else if(ch==2) viewCatalog(); else if(ch==3) addToCart();
        else if(ch==4) viewCart(); else if(ch==5) addToWishlist(); else if(ch==6) viewWishlist();
        else if(ch==7) showTopSelling(); else if(ch==8) sortByPrice(); else if(ch==9) searchProduct();
        else if(ch==10) break; else cout << "Invalid!" << endl;
    }
}