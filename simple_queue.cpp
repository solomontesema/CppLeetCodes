#include <iostream>
#include <queue>

using namespace std;

int main() {
  queue<int> q;

  // Adding elements to the queue
  q.push(10);
  q.push(20);
  q.push(30);

  // Printing the front and back elements of the queue
  cout << "Front element: " << q.front() << endl;
  cout << "Back element: " << q.back() << endl;

  // Removing elements from the queue
  q.pop();
  cout << "Front element after popping: " << q.front() << endl;

  // Checking if the queue is empty
  if (q.empty()) {
    cout << "The queue is empty." << endl;
  } else {
    cout << "The queue is not empty." << endl;
  }

  return 0;
}

