#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> balances;
    for (int i=0; i < 10; ++i){
        balances.push_back(0);
        balances.front() += 100;
        balances.back() += 100;
    }
    
    std::cout << balances.front() << std::endl;
    std::cout << balances.back() << std::endl;
}
