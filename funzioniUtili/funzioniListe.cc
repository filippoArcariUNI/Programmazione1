void insert(List *&l, List *node, int value) {
    if (node != nullptr) {
        node->info = value;
        node->next = nullptr;

        if (l == nullptr) {
            l = node; 
        } else {
            List *temp = l;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = node; 
        }
    } else {
        cout << "Error" << endl;
    }
}

void insertRec(List *&l, List *node, int value) {
    if (node != nullptr) {
        node->info = value;
        node->next = nullptr;

        if (l == nullptr) {
            l = node; 
        } else {
            if (l->next == nullptr) {
                l->next = node;
            } else {
                insert(l->next, node, value);
            }
        }
    } else {
        cout << "Error" << endl;
    }
}