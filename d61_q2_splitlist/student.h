
// void splitList(list<T>& list1, list<T>& list2) {
//     iterator it2;
//     it2 = mHeader;
//     if (mSize == 0) return;
//     int n = mSize / 2 + (mSize % 2);
//     for (int i = 0; i < n; i++) it2++;
//     list1.mHeader->prev->next = mHeader->next;
//     mHeader->next->prev = list1.mHeader->prev;
//     list1.mHeader->prev = it2.ptr;
//     list2.mHeader->prev->next = it2.ptr->next;
//     it2.ptr->next->prev = list2.mHeader->prev;
//     mHeader->prev->next = list2.mHeader;
//     list2.mHeader->prev = mHeader->prev;
//     list1.mSize += n;
//     list2.mSize += mSize - n;
//     it2.ptr->next = list1.mHeader;
//     mHeader->next = mHeader->prev = mHeader;
//     mSize = 0;
// }