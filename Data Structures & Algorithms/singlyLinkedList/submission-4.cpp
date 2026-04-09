class LinkedList {
public:
struct Node{
    int data;
    Node* next;
};

Node* head;

    LinkedList() {
        head = nullptr;
    }

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
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = nullptr;
        if(head == nullptr) {
            head = newNode;
        } else {
            Node* tmp  = head;
            newNode->next = tmp;
            head = newNode;
        }
        
    }
    
    void insertTail(int val) {
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = nullptr;
        if(head == nullptr) {
            head = newNode;
        } else{
            Node* tmp  = head;
            while(tmp->next != nullptr){
                tmp = tmp->next;
            }
            tmp->next = newNode;
            //head = tmp;
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
        Node* del = curr;
        prev->next = curr->next;
        delete del;
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
