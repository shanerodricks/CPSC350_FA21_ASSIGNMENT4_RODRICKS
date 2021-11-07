template <class T>
GenStack<T>::GenStack(){
    top = NULL;
}

template <class T>
void GenStack<T>::push(T data){
    ListNode<T> *node = new ListNode<T>();
    node -> data = data;
    node -> next = top;
    top = node;
}

template <class T>
T GenStack<T>::pop(){
    if(isEmpty()){
       throw runtime_error("Stack is empty.");
    }
    T node = top -> data;
    ListNode<T> *newTop = top -> next;
    delete top;
    top = newTop;
    return node;
}

template <class T>
T GenStack<T>::peek(){
    if(isEmpty()){
        throw std::runtime_error("Stack is empty.");
    }
    return top -> data;
}

template <class T>
bool GenStack<T>::isEmpty(){
    if(top == NULL){
        return true;
    }
    else{
        return false;
    }
}