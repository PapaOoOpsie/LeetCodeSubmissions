class MyHashSet {
public:
    /** Initialize your data structure here. */
    vector<int> v;
    
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(!contains(key)){
            v.push_back(key);
        }
    }
    
    void remove(int key) {
        if(contains(key)){
            v.erase(find(v.begin(), v.end(), key));
        }
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return find(v.begin(), v.end(), key)!=v.end();
    }
};