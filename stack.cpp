#include <bits/stdc++.h> 
using namespace std; 
void showq(queue <int> gq) 
{ 
    queue <int> g = gq; 
    while (!g.empty()) 
    { 
        cout << '\t' << g.front(); 
        g.pop(); 
    } 
    cout << '\n'; 
} 

int main() 
{ 
    queue <int> qu; 
    qu.push(10); 
    qu.push(20); 
    qu.push(30); 

    cout << "The queue qu is : "; 
    showq(qu); 

    cout << "\nqu.size() : " << qu.size(); 
    cout << "\nqu.front() : " << qu.front(); 
    cout << "\nqu.back() : " << qu.back(); 

    cout << "\nqu.pop() : "; 
    qu.pop(); 
    showq(qu); 

    return 0; 
} 