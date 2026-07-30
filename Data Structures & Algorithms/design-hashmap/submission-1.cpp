class MyHashMap {
private:
    set<pair<int,int>> st;
public:
    MyHashMap() {
        
    }
    void put(int key, int value) {
        auto it = st.lower_bound({key, INT_MIN});
        if(it != st.end() && it->first == key)
            st.erase(it);
        st.insert({key, value});
    }
    
    int get(int key) {
        auto it = st.lower_bound({key, INT_MIN});
        if(it == st.end() || it->first != key)
            return -1;
        return it->second;
    }
    
    void remove(int key) {
        auto it = st.lower_bound({key, INT_MIN});
        if(it != st.end() && it->first == key)
            st.erase(it);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */