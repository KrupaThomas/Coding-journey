#include<iostream>
#include<unordered_map>

using namespace std;

class LRU_Cache
{
    public:
    class node{
        public:
        int key;
        int val;
        node* next;
        node* prev;

        node(int _key, int _val)
        {
            key = _key;
            val = _val;
            next = NULL;
            prev = NULL;
        }
    };

    node* head = new node(-1,-1);
    node* tail = new node(-1,-1);

    int cap;

    LRU_Cache(int capacity)
    {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }

    unordered_map<int,node*>m;

    void addnode(node* newnode)
    {
        node *temp = head->next;
        newnode->next = temp;
        newnode->prev = head;
        head->next = newnode;
        temp->prev = newnode;
    }

    void deletenode(node* delnode)
    {
        node* delprev = delnode->prev;
        node* delnext = delnode->next;
        delprev->next = delnext;
        delnext->prev = delprev;
    }

    int get(int _key)
    {
        int res;
        if(m.find(_key)!=m.end())
        {
            node * resnode = m[_key];
            res = resnode->val;

            m.erase(_key);
            deletenode(resnode);

            addnode(new node(_key, res));
            return res;

        }
        return -1;
    }

    void put(int _key, int _val)
    {
        if(m.find(_key) != m.end())
        {
            node* existingnode = m[_key];
            m.erase(_key);
            deletenode(existingnode);
        }

        else if(m.size() == cap)
        {
            m.erase(tail->prev->key);
            deletenode(tail->prev);
                
        }

        addnode(new node(_key, _val));
        m[_key] = head->next;
     }

};

int main()
{

    LRU_Cache Cache(3);
    Cache.put(1,10);
    Cache.put(3,15);
    Cache.put(2,12);
    cout<<Cache.get(3)<<endl;
    Cache.put(4,20);
    cout<<Cache.get(2)<<endl;
    Cache.put(4,25);
    cout<<Cache.get(1)<<endl;

    return 0;
}