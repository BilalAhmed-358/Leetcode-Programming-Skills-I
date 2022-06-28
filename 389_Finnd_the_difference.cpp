/*
You are given two strings s and t.

String t is generated by random shuffling string s and then add one more letter at a random position.

Return the letter that was added to t.



Example 1:

Input: s = "abcd", t = "abcde"
Output: "e"
Explanation: 'e' is the letter that was added.

Example 2:

Input: s = "", t = "y"
Output: "y"



Constraints:

    0 <= s.length <= 1000
    t.length == s.length + 1
    s and t consist of lowercase English letters.


*/
#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        char a;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for (int i = 0; i < t.size(); i++)
        {
            if (s[i] != t[i])
            {
                a = t[i];
                break;
            }
        }
        return a;
    }
};
int main()
{
}