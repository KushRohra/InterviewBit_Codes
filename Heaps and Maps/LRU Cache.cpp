#include<list>
unordered_map<int, list<pair<int, int>>::iterator> m;
list<pair<int, int>> dq;
int c;
LRUCache::LRUCache(int capacity) 
{
    m.clear();
    dq.clear();
    c=capacity;
}

int LRUCache::get(int key) 
{
    auto it=m.find(key);
    if(it==m.end())
        return -1;
    else
    {
        int val=it->second->second;
        set(key, val);
        return val;
    }
}

void LRUCache::set(int key, int value) 
{
    auto it=m.find(key);
    if(it!=m.end())
        dq.erase(it->second);
    dq.push_front(make_pair(key, value));
    m[key]=dq.begin();
    if(m.size()>c)
    {
        m.erase(dq.rbegin()->first);
        dq.pop_back();
    }
}

