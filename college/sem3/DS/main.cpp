#include <iostream>
using namespace std;


void enqueue(int value, int &rear, int &front, int queue[], int maxsize) {

    if (front == (rear + 1) % maxsize) {
        cout << "Queue overflow ";
        exit(0);
    }
    if (front == -1) {
        front = rear = 0;
        queue[rear] = value;
    } else {
        rear = (rear + 1) % maxsize;
        queue[rear] = value;
    }
}
void dequeue(int &front, int &rear, int queue[], int maxsize) {
    int value;
    if (front == -1) {
        cout << "Queue underflow";
        exit(0);
    }
    value = queue[front];
    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % maxsize;
    }
}

void displayQueue(int queue[], int front, int rear) {
    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }
}

int main() {
    int n, choice, value, front = -1, rear = -1, queue[25], maxsize = -1;
    while (1) {
        cout << "\t\t\nCIRCULAR QUEUE OPERATIONS";
        cout << "\n\t\t-------------------------";
        cout << "\n1.Enqueue";
        cout << "\n2.dequeue";
        cout << "\n3.exit";
        cout << "\nEnter your choice:";
        cin >> choice;
        switch (choice) {
        case 1: {
            if (maxsize == -1) {
                cout << "\nEnter the size of the queue: ";
                cin >> maxsize;
            }

            cout << "\nHow many Elements to enqueue?: ";
            cin >> n;
            cout << "\nEnter the elements: ";
            for (int i = 0; i < n; i++) {
                cin >> value;
                enqueue(value, rear, front, queue, maxsize);
            }

            cout << "\nThe circular queue after enqueue is :";
            displayQueue(queue, front, rear);
            break;
        }
        case 2: {
            cout << "\nHow many Elements to dequeue?: ";
            cin >> n;
            for (int i = 0; i < n; i++) {

                dequeue(front, rear, queue, maxsize);
            }
            cout << "\nThe circular queue after dequeue is :";
            displayQueue(queue, front, rear);
            break;
        }
        case 3: {
            exit(0);
        }
        }
    }
}