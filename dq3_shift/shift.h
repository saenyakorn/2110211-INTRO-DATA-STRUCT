// void shift(int k) {
//     k = k - mSize * (k / (int)mSize);
//     if (k < 0) k += mSize;
//     for (int i = 0; i < k; i++) {
//         T tmpData = front();
//         iterator it = begin();
//         iterator tmp(it.ptr->next);
//         it.ptr->prev->next = it.ptr->next;
//         it.ptr->next->prev = it.ptr->prev;
//         delete it.ptr;
//         mSize--;
//         node* n = new node(tmpData, end().ptr->prev, end().ptr);
//         end().ptr->prev->next = n;
//         end().ptr->prev = n;
//         mSize++;
//     }
// }