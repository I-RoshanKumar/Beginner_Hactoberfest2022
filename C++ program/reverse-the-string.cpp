#include <bits/stdc++.h>
using namespace std;

string solve(string A)
{
  stack<string> s;
  string temp = "";
  for (int i = 0; i < A.length(); i++)
  {
    if (A[i] == ' ')
    {
      if (temp != "")
      {
        s.push(temp);
        temp = "";
      }
    }
    else
    {
      temp += A[i];
    }
  }
  if (temp != "")
  {
    s.push(temp);
  }
  string ans = "";
  while (!s.empty())
  {
    ans += s.top();
    s.pop();
    if (!s.empty())
    {
      ans += " ";
    }
  }
  return ans;
}

int main()
{
  string A = "the sky is blue";
  cout << solve(A) << endl;
  return 0;
}