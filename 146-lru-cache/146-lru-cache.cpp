// class LRUCache {
//     public:
//     class node{
//         public:
//         int key;
//         int val;
//         node* next;
//         node* prev;
//         node(int _key,int _val){
//             this->key=_key;
//             this->val=_val;
//         }
//     };
//     node* head=new node(-1,-1);
//     node* tail=new node(-1,-1);
//     int cap;
//     unordered_map<int,node*> m;
    
//     LRUCache(int capacity) {
//         cap=capacity;
//         head->next=tail;
//         tail->prev=head;
//     }
//     void addnode(node * newnode){
//         node* temp=head->next;
//         newnode->next=temp;
//         newnode->prev=head;
//         head->next=newnode;
//         temp->prev=newnode;
//     }
//     void deletenode(node * delnode){
//         node* delprev=delnode->prev;
//         node* delnext=delnode->next;
//         delprev->next=delnext;
//         delnext->prev=delprev;
//     }
    
//     int get(int key) {
//         if(m.find(key)!=m.end())
//         {   node* resnode=m[key];
//             int res=resnode->val;
//             m.erase(key);
//             deletenode(resnode);//delete from dll
//             addnode(resnode);    //update right after to head so that it is recently used
//              m[key]=head->next;
//             return res;
//         }  
//         return -1;
//     }
    
//     void put(int key, int value) {
//         if(m.find(key)!=m.end()){
//             node* existingnode=m[key];
//             m.erase(key);  //delete form map
//             deletenode(existingnode);
//         }
//         if(m.size()==cap){
//             m.erase(tail->prev->val); //this is LRU cache
//             deletenode(tail->prev);
//         }
//         addnode(new node(key,value));
//         m[key]=head->next;
        
//     }
// };

// /**
//  * Your LRUCache object will be instantiated and called as such:
//  * LRUCache* obj = new LRUCache(capacity);
//  * int param_1 = obj->get(key);
//  * obj->put(key,value);
//  */


class LRUCache {
public:
    class node{
        public:
            int key;
            int val;
            node* prev;
            node* next;
            node(int key, int val){
                this->key = key;
                this->val = val;
            }
    };
    
    node* head = new node(-1,-1);         //initially create head and tail
    node* tail = new node(-1,-1);
    int capacity;
    unordered_map<int,node*> map; //to track node val and its address
    
    LRUCache(int capacity) {
        this->capacity = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    void deleteNode(node* curNode){
        node* prevNode = curNode->prev;
        node* nextNode = curNode->next;
        prevNode->next = nextNode;
        nextNode->prev = prevNode;
    }
    
    void addNode(node* curNode){
        curNode->next = head->next;
        curNode->prev = head;
        curNode->next->prev = curNode;
        head->next = curNode;
    }
    
    int get(int key) {
        if(map.find(key) == map.end()) return -1;   //if not found return -1
        node* curNode = map[key];
        int result = curNode->val;                   //if found return map[key]->val and delete and add after head and update map
        map.erase(key);
        deleteNode(curNode);
        addNode(curNode);
        map[key] = head->next;
        return result;
    }
    
    void put(int key, int value) {
        if(map.find(key) != map.end()){     //if found then delete and add and update map
            node* curNode = map[key];
            map.erase(key);
            deleteNode(curNode);
        }
        if(map.size() == capacity){
            map.erase(tail->prev->key);            //if not found,delete tails before node and add the new node and update to map
            deleteNode(tail->prev);
        }
        addNode(new node(key,value));
        map[key] = head->next;
    }
};