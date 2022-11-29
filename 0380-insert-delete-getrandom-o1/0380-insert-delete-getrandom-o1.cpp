class RandomizedSet {
public:
    vector<int> v;
    map<int,int> m;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(m.find(val)==m.end())
        {
            
            v.push_back(val);
            m[val]=v.size()-1;
            return true;
        }
        else
        {
            return false;
        }
    }
    
    bool remove(int val) {
        if(m.find(val)==m.end())
        {
            return false;
        }
        else
        {
            v[m[val]]=v[v.size()-1];
            m[v[v.size()-1]]=m[val];
            v.pop_back();
            m.erase(val);
            return true;
        }
    }
    
    int getRandom() {
        if(v.size()>0)
        return v[(rand()%v.size())];
        else
            return -1;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */