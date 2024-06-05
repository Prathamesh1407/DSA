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
    bool searchUtil(TrieNode *, string);
    bool deleteUtil(TrieNode *, string);
    bool haveChildren(TrieNode *);

public:
    Trie()
    {
        root = new TrieNode('\0');
    }
    void insertWord(string);
    bool searchWord(string);
    bool deleteWord(string);
};
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

    // Assume that all the letters are in Upper Case
    TrieNode *child;
    if (root->children[ch - 'A'] != NULL)
    {
        child = root->children[ch - 'A'];
    }
    else
    {
        child = new TrieNode(ch);
        root->children[ch - 'A'] = child;
    }
    insertUtil(child, word.substr(1));
}
bool Trie::searchWord(string word)
{
    return searchUtil(root, word);
}
bool Trie::searchUtil(TrieNode *root, string word)
{
    if (word.length() == 0)
    {
        return root->isTerminal;
    }

    char ch = word[0];
    TrieNode *child;
    if (root->children[ch - 'A'] != NULL)
    {
        child = root->children[ch - 'A'];
    }
    else
        return false;
    return searchUtil(child, word.substr(1));
}
bool Trie::haveChildren(TrieNode *root)
{
    for (int i = 0; i < 26; i++)
    {
        if (root->children[i] != NULL)
            return true;
    }
    return false;
}
bool Trie::deleteUtil(TrieNode *root, string word)
{
    if (word.length() == 0)
    {
        root->isTerminal = false;
        if (!haveChildren(root))
            return true;
    }

    TrieNode *child = root->children[word[0] - 'A'];
    if (deleteUtil(child, word.substr(1)))
    {
        delete child;
        root->children[word[0]-'A']=NULL;
    }
    if (root->isTerminal == false && haveChildren(root) == false)
    {
        return true;
    }
    else
        return false;
}
bool Trie::deleteWord(string word)
{
    if (searchWord(word))
        return deleteUtil(root, word);
    else
    {
        cout << "Word is not present";
        return false;
    }
}
int main()
{
    Trie t1;
    t1.insertWord("RAM");
    t1.insertWord("RAR");
    t1.insertWord("RAY");
    cout << t1.searchWord("RAM")<<endl;
    cout << t1.searchWord("RAR")<<endl;
    t1.deleteWord("RAM");
    t1.deleteWord("RAR");
    t1.insertWord("RAM");
    cout << t1.searchWord("RAM")<<endl;
    cout << t1.searchWord("RAR")<<endl;
    cout << t1.searchWord("RAY")<<endl;

    return 0;
}