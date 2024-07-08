#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <random>

using namespace std;

class LoadBalanceWeightedRoundRobin
{
public: 
    LoadBalanceWeightedRoundRobin()
    {
        current = -1;
    }
    ~LoadBalanceWeightedRoundRobin()
    {
    }

    bool AddServer(const string& srv, int weight)
    {
        if(weight < 1)
        {
            cout << "Weight should be equal or greater than 1." << endl;
            return false;
        }

        for(int i = 0; i < weight; i++)
        {
            servers.push_back(srv);
        }
        shuffle(servers.begin(), servers.end(), default_random_engine{});
        return true;
    }
    bool NextRequest()
    {
        if(servers.empty())
        {
            cout << "Please add servers first." << endl;
            return false; 
        }
        current = (current + 1) % servers.size();
        stats[servers[current]]++;

        return true; 
    }

    void PrintStats() const
    {
        cout << "Server Hit stats with weighted round robin: ";
        for(const auto& x : stats)
        {
            cout << endl;
            cout << x.first << ": " << x.second;
        }
        cout << endl;
    }

private:
    vector<string> servers; 
    int current;
    unordered_map<string, int> stats; 
};

int main()
{
    LoadBalanceWeightedRoundRobin lbwrr;

    lbwrr.AddServer("Server1", 1);
    lbwrr.AddServer("Server2", 3);
    lbwrr.AddServer("Server3", 2);

    for (int i = 0; i < 10; ++i) {
        lbwrr.NextRequest();
    }

    lbwrr.PrintStats();

    return 0;
}
