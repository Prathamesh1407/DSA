#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int a[] = {1, 1, 2, 3, 4, 4, 5};
    int b[] = {2, 3, 3, 4, 5};
    vector<int> v;
    int n = sizeof(a) / sizeof(int), k = sizeof(b) / sizeof(int);
    int i = 0, j = 0;
    while (i < n && j < n)
    {
        if (a[i] < b[j])
            i++;
        else if (a[i] > b[j])
            j++;
        else
        {
            v.push_back(a[i]);
            i++;
            j++;
        }
    }
    for (auto val : v)
    {
        cout << val << " ";
    }
    return 0;
}

/*
    class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        vector<int>ans;
        unordered_map<int,int>m;

        for(int i=0;i<nums1.size();i++)
        {
            m[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(m.find(nums2[i])!=m.end())
            {
                ans.push_back(nums2[i]);
                m.erase(nums2[i]);
            }
        }
        return ans;
    }
};


//2nd Approach
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        vector<int>ans;
        unordered_set<int>s;

        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]==nums2[j])
            {
                s.insert(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]) i++;
            else j++;
        }

        for(auto val:s) ans.push_back(val);
        return ans;
    }
};



*/