#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include <iostream>

template<typename T>
struct Node {
  T data;
  Node<T> *next;
};

template<typename T>
class LinkedList {
public:
  LinkedList();

  void append(const T &a);
  bool remove(int n);
  Node<T>* search(int n);
  void display() const;
  int count() const;

private:
  Node<T> *head;
};

#include "LinkedList.tpp"

#endif
