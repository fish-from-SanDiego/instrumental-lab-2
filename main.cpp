#include <iostream>
#include <vector>
#include <queue>

int main() {
    std::queue<int> q;
    for (int i = 0; i < 10; i++){
        q.push(i);
    }
    for (int i = 0; i < 10; i++)
    {
        int t = q.front();
        q.pop();
        std::cout << t << ' ';
    }
    
    return 0;
}