#include <bits/stdc++.h>


using namespace std;

void findMin(int total) {
    int deno[] = {1,2,3,4,5,100,500,1000};
    vector<int> ans;
    for(int i = 9; i >= 0; i--) {
        while(total >= deno[i]) {
            total -= deno[i];
            ans.push_back(deno[i]);
        }
    }
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the amount: ";
    cin >> n;
    findMin(n);
    return 0;
}

