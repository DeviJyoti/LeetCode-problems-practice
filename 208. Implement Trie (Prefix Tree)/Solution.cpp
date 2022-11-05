//LINK:-https://leetcode.com/problems/implement-trie-prefix-tree/

class Trie {
public:
      vector<Trie*>children;
      bool isLeaf;
    Trie() {
        
        this->isLeaf=false;
        vector<Trie*>temp(26,nullptr);
        children=temp;
        
    }
    
    void insert(string key) {
        Trie* curr=this;
         for(char ch : key)
        {
            int index=ch-'a';
            if(curr->children[index]==NULL)
            {
                curr->children[index]= new Trie();

            }
            curr=curr->children[index];

        }
    
    curr->isLeaf=true;
        
    }
    
    bool search(string key) 
    {
        Trie* curr=this;
        for(char ch:key)
        {  
            int index=ch-'a';
            if(curr->children[index]==NULL) return false;
            curr=curr->children[index];

        }
     return curr->isLeaf;
        
    }
    
    
    bool startsWith(string key)
    {
        Trie* curr=this;
        for(char ch:key)
        {  
            int index=ch-'a';
            if(curr->children[index]==NULL) return false;
            curr=curr->children[index];

        }
        
     return true;
        
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
