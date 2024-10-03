#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
  cout.sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);
  
  string firstLine, temp;
  getline(cin, firstLine);
  istringstream iss1(firstLine);
  
  vector<int> iv1;
  while (getline(iss1, temp, ' ')) iv1.push_back(stoi(temp));
  
  string numbers;
  getline(cin, numbers);
  istringstream iss2(numbers);
  
  vector<int> iv2;
  while (getline(iss2, temp, ' ')) iv2.push_back(stoi(temp));
  
  int from, to;
  for (int i = 0; i < iv1[1]; i++) {
    cin >> from >> to;
    
    int sum = 0;
    for (int j = (from - 1); j <= (to - 1); j++) sum += iv2[j];
    cout << sum << "\n";
  }
  
  return 0;
}