class RandomizedSet {
public:
    vector<int> v;
    unordered_map<int,int> mp;

    RandomizedSet() {
    }
    
    bool insert(int val) {
        if(mp.find(val) != mp.end()) return false;
        v.push_back(val);
        mp[val] = v.size() - 1;
        return true;
    }
    
    bool remove(int val) {
        if(mp.find(val) == mp.end()) return false;

        v[mp[val]] = v.back();
        mp[v.back()] = mp[val];
        v.pop_back();
        mp.erase(val);
        return true;
    }
    
    int getRandom() {
        return v[rand() % v.size()];
    }
};