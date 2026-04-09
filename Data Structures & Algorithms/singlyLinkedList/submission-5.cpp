class LinkedList {
public:
struct Node{
    int data;
    Node* next;
    Node(int n) : data{n}, next{nullptr}{}
};

Node* head;

    LinkedList() : head{nullptr} { }

    int get(int index) {
        if(head == nullptr) return -1;
        Node* tmp = head;
        int i = 0;
        while(tmp != nullptr){
            if( i == index) 
                return tmp->data;
            tmp = tmp->next;
            i++;
        }
        return -1;
    }

    void insertHead(int val) {
        Node* newNode = new Node(val);
        if(head == nullptr) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
        
    }
    
    void insertTail(int val) {
        Node* newNode = new Node(val);
        if(head == nullptr) {
            head = newNode;
        } else{
            Node* tmp  = head;
            while(tmp->next != nullptr){
                tmp = tmp->next;
            }
            tmp->next = newNode;
        }

    }

    bool remove(int index) {
        if(head == nullptr) return false;
        
        if(index == 0){
            Node* tmp = head;
            head = head->next;
            delete tmp;
            return true;
        }

        Node* curr = head;
        Node* prev = nullptr;

        int i = 0;
        while(curr != nullptr && i < index){
            prev = curr;
            curr = curr->next;
            i++;
        }
        if(curr == nullptr) return false;
        prev->next = curr->next;
        delete curr;
        return true;
    }

    vector<int> getValues() {
        if(head == nullptr) return {};
        Node* tmp = head;
        vector<int> ans;
        while(tmp !=  nullptr){
            ans.push_back(tmp->data);
            tmp = tmp->next;
        }
        return ans;
    }
};
