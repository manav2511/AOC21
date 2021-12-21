#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void part1() {
    int posx = 0;
    int posy = 0;

    string prefix;
    int k;
    ifstream inp("input.txt");
    while(inp >> prefix >> k) {
        if (prefix == "up") posy-=k;
        else if (prefix == "down") posy+=k;
        else if (prefix == "forward") posx+=k;
    }

    cout << posx*posy << "\n";
}

void part2() {
    int aim = 0;
    int posx = 0;
    int posy = 0;

    string prefix;
    int k;
    ifstream inp("input.txt");
    while(inp >> prefix >> k) {
        if (prefix == "up") aim-=k;
        else if (prefix == "down") aim+=k;
        else if (prefix == "forward") { posx+=k; posy+=(aim*k); } 
    }

    cout << posx*posy << "\n";
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    part1();
    part2();

    return 0;
}