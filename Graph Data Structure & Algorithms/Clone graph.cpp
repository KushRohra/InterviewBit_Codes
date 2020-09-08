/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
UndirectedGraphNode *Solution::cloneGraph(UndirectedGraphNode *node)
{
    if(node==NULL)
        return NULL;  
    unordered_map<UndirectedGraphNode*, UndirectedGraphNode*> mp;
    mp[node]=new UndirectedGraphNode(node->label);
    queue<UndirectedGraphNode*> q;
    q.push(node);
    while(!q.empty())
    {
        UndirectedGraphNode *p=q.front();
        q.pop();
        for(int i=0;i<p->neighbors.size();i++)
        {
            if(mp.count(p->neighbors[i])==0)
            {
                mp[p->neighbors[i]]=new UndirectedGraphNode(p->neighbors[i]->label);
                q.push(p->neighbors[i]);
            }
            mp[p]->neighbors.push_back(mp[p->neighbors[i]]);
        }
    }
    return mp[node];
}

