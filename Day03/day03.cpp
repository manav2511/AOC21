#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void part1() {
	ifstream inp("input.txt");
    vector<string> bin;

    string b;
    while (inp >> b) {
        bin.push_back(b);
    }

    int n = bin.size();
    std::map<int, int> mp0;
    std::map<int, int> mp1;

    for (int i = 0; i < n; ++i)
    {
    	int k = bin[i].size();
    	for (int j = 0; j < k; ++j)
    	{
    		if ((bin[i][j] - '0') == 0) mp0[j]++;
    		else mp1[j]++;
    	}
    }

    string gmrate, eprate;
    for (int i = 0; i < mp0.size(); ++i)
    {
        if (mp0[i] > mp1[i]) { gmrate += "0"; eprate += "1"; }
        else { gmrate += "1"; eprate += "0"; }
    }

    cout << stoi(gmrate, nullptr, 2)*stoi(eprate, nullptr, 2) << "\n";
}

void part2() {
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    part1();
    part2();

    return 0;
}