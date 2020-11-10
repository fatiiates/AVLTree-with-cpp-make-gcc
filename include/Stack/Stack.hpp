/**
* @file Stack.hpp
* @description Yığıt veri yapısı başlık dosyası tanımları.
* @course Uzaktan Eğitim - Grup B - 1. Öğretim - BSM 207
* @assignment 2. Ödev - 1. Final Ödevi
* @date 22.08.2020 20:32
* @author Fatih ATEŞ
*/

#ifndef STACK_HPP
#define STACK_HPP

#include "Node.hpp"

class Stack{
  private:
    STACKNode* topOfStack;

  public:
    Stack();
    bool isEmpty() const;
    void push(const char&);
    const char top() const;
    void pop();
    void makeEmpty();
    friend ostream& operator<<(ostream&, Stack*);
    ~Stack();
};

#endif
