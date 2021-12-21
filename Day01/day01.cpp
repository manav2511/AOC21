#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void part1() {
    int curr, count = 0;
    int last = 10000;

    ifstream inp("input.txt");
    while(inp >> curr) {
        if(curr > last) count++;
        last = curr;
    }
    cout << count << "\n";
}

void part2() {
    ifstream inp("input.txt");
    vector<int> nums;

    int curr;
    while (inp >> curr) {
        nums.push_back(curr);
    }

    int n = nums.size();
    int sum, count = 0;
    int last = nums[0] + nums[1] +  nums[2];

    for (int i = 3; i < n; i++)
    {
        sum = last - nums[i-3] + nums[i];
        if (sum > last) { count++; }
        last = sum;
    }

    cout << count << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    part1();
    part2();

    return 0;
}