#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
int main()
{
    std::vector<int> a {0,1,2,3,4}, b {0,1,5,6,7};
    std::unordered_set<int> t;
    std::set<int> g;
    for(auto x:a)
    {
        t.insert(x);
        g.insert(x);
    }
    for(auto x:b)
    {
        t.insert(x);
        g.insert(x);
    }
    for(auto x:t)
    {
        std::cout << x <<" ";
    }
    std::cout << std::endl;
    for(auto x:g)
    {
        std::cout << x <<" "; 
    }
}