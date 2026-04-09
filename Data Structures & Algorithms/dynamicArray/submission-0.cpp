class DynamicArray {
public:
    int* arr;
    int length;
    int cap;

    DynamicArray(int capacity) {
        if(capacity > 0){
            arr = new int[capacity];
            length = 0;
            cap = capacity;
        }
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if(length+1 > cap)
            resize();

        arr[length] = n;
        length++;
    }

    int popback() {
        int v = arr[length-1];
        length--;
        return v;
    }

    void resize() {
        cap = 2 * cap;
        int *tmp = arr;
        int *arr2 = new int[cap];
        for(int i = 0; i < length; i++){
            arr2[i] = arr[i];
        }
        arr = nullptr;
        arr = arr2;
        delete tmp;
    }

    int getSize() {
        return length;
    }

    int getCapacity() {
        return cap;
    }
};
