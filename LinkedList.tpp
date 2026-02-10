
template <typename T>
LinkedList<T>::LinkedList() {
  head = nullptr;
}

template <typename T>
void LinkedList<T>::append(const T &a) {
  Node<T> *newNode = new Node<T>{a, nullptr};

  if (!head) {
    head = newNode;
    return;
  }

  Node<T> *temp = head;
  while (temp->next)
    temp = temp->next;
  
  temp->next = newNode;
}

template <typename T>
bool LinkedList<T>::remove(int n) {
  if (!head)
    return false;

  if (head->data.getId() == n) {
    Node<T> *temp = head;
    head = head->next;
    delete temp;
    return true;
  }

  Node<T> *iter = head;

  while (iter->next && iter->next->data.getId() != n)
    iter = iter->next;
    
  if (iter->next) {
    Node<T> *temp = iter->next;
    iter->next = temp->next;
    delete temp;
    return true;
  }

  return false;
}

template <typename T>
Node<T>* LinkedList<T>::search(int n) {
  Node<T> *temp = head;
  
  while (temp) {
    if (temp->data.getId() == n)
      return temp;
    temp = temp->next;
  }

  return nullptr;
}

template <typename T>
void LinkedList<T>::display() const {
  Node<T> *temp = head;

  while (temp) {
    temp->data.displayInfo();
    temp = temp->next;
  }
}

template <typename T>
int LinkedList<T>::count() const {
  int a = 0;
  Node<T> *temp = head;
  
  while (temp) {
    a++;
    temp = temp->next;
  }

  return a;
}

    
