#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    cout.sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    string line1, temp;
    getline(cin, line1);
    istringstream iss1(line1);
    vector<int> v1;
    while (getline(iss1, temp, ' ')) v1.push_back(stoi(temp));

    int s = v1[0], p = v1[1];

    string line2;
    getline(cin, line2);

    string line3;
    getline(cin, line3);
    istringstream iss2(line3);
    vector<int> v2;
    while (getline(iss2, temp, ' ')) v2.push_back(stoi(temp));

    int arr[91] = {0}, arr_cnt[91] = {0};
    arr['A'] = v2[0];
    arr['C'] = v2[1];
    arr['G'] = v2[2];
    arr['T'] = v2[3];

    int from = 0, to = p, cnt = 0;
  
    for (int i = from; i < to; i++) {
        arr_cnt[line2[i]] += 1;
    }

    if (arr_cnt['A'] >= arr['A'] &&
        arr_cnt['C'] >= arr['C'] &&
        arr_cnt['G'] >= arr['G'] &&
        arr_cnt['T'] >= arr['T']) cnt++;

    while (to < s) {
        arr_cnt[line2[from]] -= 1;
        arr_cnt[line2[to]] += 1;

        from++;
        to++;

        if (arr_cnt['A'] >= arr['A'] &&
            arr_cnt['C'] >= arr['C'] &&
            arr_cnt['G'] >= arr['G'] &&
            arr_cnt['T'] >= arr['T']) cnt++;
    }

    cout << cnt;

    return 0;
}