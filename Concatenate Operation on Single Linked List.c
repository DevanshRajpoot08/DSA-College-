struct node {
    int data;
    struct node* next;
};

typedef struct node* NODE;

NODE createNode(int x) {
      NODE temp = (NODE)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    return temp;  
    
    
    
}

NODE addNode(NODE first, int x) {
    NODE temp = createNode(x);

    if (first == NULL) {
        return temp;
    }

    NODE curr = first;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = temp;
    return first;
    
    
    
    
}

}
