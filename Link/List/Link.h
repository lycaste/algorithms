//
//  Link.h
//  List
//
//  Created by ly on 15/6/11.
//  Copyright (c) 2015年 ly. All rights reserved.
//

#ifndef List_Link_h
#define List_Link_h

#include <iostream>
using namespace std;
#pragma mark 定义结构体
template <class T>
struct DNode {

public:
    T value;
    DNode * pre;
    DNode * next;
public:
   
    DNode(){}
    DNode(T t,DNode *pre,DNode *next)
    {
        this->value = t;
        this->pre   = pre;
        this->next  = next;
        
    }
    
    
};
#pragma mark 定义类

template <class T >
class DoubleLink {

public:
    DoubleLink();
    ~DoubleLink();
    
    int size();
    int is_empty();
    
    
    int insert(int index,T t);
    
    int del(int index);
private:
    int count;
    DNode<T> *phead;
    DNode<T> *get_node(int index);
};





#pragma mark 构造函数
template <class T>
DoubleLink<T>::DoubleLink():count(0) {
    phead = new DNode<T>();
    phead->pre = phead->next = phead;
}






#pragma mark 析构函数
template <class T>
DoubleLink<T>::~DoubleLink() {
    DNode *ptmp;
    DNode<T> *pnode = phead->next;
    while (pnode != phead) {
        ptmp = pnode;
        pnode = pnode->next;
        delete ptmp;
    }
    delete phead
    phead = nullptr
}




#pragma mark 插入
template <class T >
int DoubleLink<T>::insert(int index,T t ) {
    
}





#prama mark  查询函数
template <class T >
DNode<T>* DoubleLink<T>::get_node(int index) {
    if (index < 0 || index >= count) {
        cout<<"wrong count"
    }
    
    if (index < count/2) {
        
        int i = 0;
        DNode<T> *pindex = phead->next
        while (i ++ < index) {
            pindex = pindex->next
        }
        return pindex;
    }
    
    int j = 0
    int rindex = count - index - 1;
    DNode<T> *prindex = phead->pre;
    while (j++ < rindex) {
        prindex = pindex-> pre;
    }
    
    return prindex;
}




#endif
