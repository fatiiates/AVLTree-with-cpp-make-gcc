/**
* @file Stack.cpp
* @description Yığıt veri yapısı başlık dosyası tanımları.
* @course Uzaktan Eğitim - Grup B - 1. Öğretim - BSM 207
* @assignment 2. Ödev - 1. Final Ödevi
* @date 22.08.2020 20:32
* @author Fatih ATEŞ
*/

#include "Stack.hpp"

    Stack::Stack(){
      topOfStack = NULL;
      push('O');
    }
    bool Stack::isEmpty() const{
      return topOfStack == NULL;
    }
    void Stack::push(const char& item){
      if (item != 'A' && item != 'Y' && item != 'D' && item != 'O')
        throw invalid_argument("Yigit icerisine yalnizca 'A, Y, D, O' harflerinden biri eklenebilir. Err-stack:201");
      else
        topOfStack = new STACKNode(item, topOfStack);
    }
    const char Stack::top() const{
      if(isEmpty())
        throw invalid_argument("Yigit icerisinde bir eleman bulunmuyor. Err-stack:202");
      return topOfStack->data;
    }
    void Stack::pop(){
      if(isEmpty())
        throw invalid_argument("Yigit icerisinde bir eleman bulunmuyor. Err-stack:203");
      else{
        STACKNode* tmp = topOfStack;
        topOfStack = topOfStack->next;
        delete tmp;
      }
    }
    void Stack::makeEmpty(){
      while (!isEmpty())
        pop();
    }
    ostream& operator<<(ostream& scr, Stack* right){
      if(right->isEmpty())
        scr << "Yigit icerisinde bir eleman bulunmuyor.  Err-stack:204";
      else{
        scr << "  Yigit: ";
        do{
          scr << right->top() << " ";
          right->pop();
        } while(!right->isEmpty());
      }


      return scr;
    }
    Stack::~Stack(){
      makeEmpty();
    }
