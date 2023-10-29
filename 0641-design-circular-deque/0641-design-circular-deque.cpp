class MyCircularDeque {
    int *arr;
    int front;
    int rear;
    int n;

public:
    MyCircularDeque(int k) {
        n = k;
        arr = new int[k];
        front = rear = -1;
    }

    bool insertFront(int value) {
        if ((front == 0 && rear == n - 1) || (front - rear == 1)) {
            return false;  // Deque is full.
        }

        if (isEmpty()) {
            front = 0;
            rear = 0;
        } else {
            front = (front - 1 + n) % n;
        }

        arr[front] = value;
        return true;
    }

    bool insertLast(int value) {
        if ((front == 0 && rear == n - 1) || (front - rear == 1)) {
            return false;  // Deque is full.
        }

        if (isEmpty()) {
            front = 0;
            rear = 0;
        } else {
            rear = (rear + 1) % n;
        }

        arr[rear] = value;
        return true;
    }

    bool deleteFront() {
        if (isEmpty()) {
            return false;  // Deque is empty.
        }

        if (front == rear) {
            // If there's only one element in the deque, reset it.
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % n;
        }

        return true;
    }

    bool deleteLast() {
        if (isEmpty()) {
            return false;  // Deque is empty.
        }

        if (front == rear) {
            // If there's only one element in the deque, reset it.
            front = -1;
            rear = -1;
        } else {
            rear = (rear - 1 + n) % n;
        }

        return true;
    }

    int getFront() {
        if (isEmpty()) {
            return -1;  // Deque is empty.
        }
        return arr[front];
    }

    int getRear() {
        if (isEmpty()) {
            return -1;  // Deque is empty.
        }
        return arr[rear];
    }

    bool isEmpty() {
        return front == -1 && rear == -1;
    }

    bool isFull() {
        return (front == (rear + 1) % n);
    }
};
