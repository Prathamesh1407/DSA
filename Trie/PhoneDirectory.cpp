// T.C : O(n*m2)
// S.C : O(n*m)
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
class TrieNode
{
public:
    int data;
    TrieNode *children[26];
    bool isTerminal;

    TrieNode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};
class Trie
{
    TrieNode *root;
    void insertUtil(TrieNode *, string);

public:
    Trie()
    {
        root = new TrieNode('\0');
    }
    void insertWord(string);
    vector<vector<string>> getSuggestions(string);
    void printSuggestions(TrieNode *, vector<string> &, string);
};
void Trie::printSuggestions(TrieNode *curr, vector<string> &ans, string prefix)
{
    if (curr->isTerminal == true)
    {
        ans.push_back(prefix);
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        TrieNode *next = curr->children[i - 'a'];

        if (next != NULL)
        {
            prefix.push_back(i);
            printSuggestions(next, ans, prefix);
            prefix.pop_back();
        }
    }
}
vector<vector<string>> Trie::getSuggestions(string query)
{
    TrieNode *prev = root;
    string prefix = "";
    vector<vector<string>> output;
    for (int i = 0; i < query.length(); i++)
    {
        char lastch = query[i];
        prefix.push_back(lastch);
        TrieNode *curr = prev->children[lastch - 'a'];

        if (curr == NULL)
        {
            break;
        }
        else
        {
            vector<string> temp;
            printSuggestions(curr, temp, prefix);
            output.push_back(temp);
            temp.clear();
            prev = curr;
        }
    }
    return output;
}
void Trie::insertWord(string word)
{
    insertUtil(root, word);
}
void Trie::insertUtil(TrieNode *root, string word)
{
    if (word.length() == 0)
    {
        root->isTerminal = true;
        return;
    }

    int ch = word[0];

    // Assume that all the letters are in Lower Case
    TrieNode *child;
    if (root->children[ch - 'a'] != NULL)
    {
        child = root->children[ch - 'a'];
    }
    else
    {
        child = new TrieNode(ch);
        root->children[ch - 'a'] = child;
    }
    insertUtil(child, word.substr(1));
}
int main()
{
    Trie t1;
    string query = "coding";
    vector<string> contactList = {"code", "coly", "coding"};
    for (int i = 0; i < contactList.size(); i++)
    {
        t1.insertWord(contactList[i]);
    }
    vector<vector<string>> ans = t1.getSuggestions(query);
    for (auto val : ans)
    {
        for (auto val1 : val)
        {
            cout << val1 << " ";
        }
        cout << endl;
    }
    return 0;
}