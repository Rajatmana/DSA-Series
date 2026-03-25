#include<bits/stdc++.h>
using namespace std;

int main() {

    // 🔹 1. Max Heap (default)
    priority_queue<int> maxPQ;

    // 🔹 2. Min Heap
    priority_queue<int, vector<int>, greater<int>> minPQ;

    // 🔹 Insert elements (push)
    maxPQ.push(10);
    maxPQ.push(30);
    maxPQ.push(20);

    minPQ.push(10);
    minPQ.push(30);
    minPQ.push(20);

    // 🔹 Access top element
    cout << "Max Heap Top: " << maxPQ.top() << endl; // largest
    cout << "Min Heap Top: " << minPQ.top() << endl; // smallest

    // 🔹 Size
    cout << "MaxPQ Size: " << maxPQ.size() << endl;

    // 🔹 Check empty
    if(maxPQ.empty())
        cout << "MaxPQ is empty\n";
    else
        cout << "MaxPQ is NOT empty\n";

    // 🔹 Pop (remove top element)
    maxPQ.pop();
    cout << "After pop, Max Heap Top: " << maxPQ.top() << endl;

    // 🔹 Traversing (IMPORTANT)
    // NOTE: No direct iteration, so copy required
    priority_queue<int> temp = maxPQ;

    cout << "Elements in MaxPQ: ";
    while(!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // 🔹 Swap
    priority_queue<int> pq1, pq2;
    pq1.push(1);
    pq1.push(2);

    pq2.push(100);
    pq2.push(200);

    pq1.swap(pq2);

    cout << "After swap, pq1 top: " << pq1.top() << endl;

    // 🔹 Emplace (faster than push)
    maxPQ.emplace(50);
    cout << "After emplace, top: " << maxPQ.top() << endl;

    // 🔹 Custom comparator (min heap using lambda)
    auto cmp = [](int a, int b) {
        return a > b; // min heap
    };
    priority_queue<int, vector<int>, decltype(cmp)> customPQ(cmp);

    customPQ.push(5);
    customPQ.push(1);
    customPQ.push(10);

    cout << "Custom PQ Top: " << customPQ.top() << endl;

    return 0;
}