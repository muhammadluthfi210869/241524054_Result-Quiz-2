#include "ElmtList.h"
#include <stdio.h>
#include <stdlib.h>
#include "Elmtlist.c"

int main() {
    address First = Nil;

    // 1. Masukan bilangan 7 sebagai elemen pertama {insert first}
    insertAtFirst(&First, 7);
    printf("1. Insert 7 at first: ");
    printList(First);

    // 2. Masukan bilangan 11 sebagai elemen kedua {insert last}
    insertAtLast(&First, 11);
    printf("2. Insert 11 at last: ");
    printList(First);

    // 3. Masukan bilangan 9 di antara bilangan 7 dan 11 {insert after}
    insertAfter(&First, 9, 7);
    printf("3. Insert 9 after 7: ");
    printList(First);

    // 4. Masukan bilangan 5 di awal list {insert first}
    insertAtFirst(&First, 5);
    printf("4. Insert 5 at first: ");
    printList(First);

    // 5. Masukan bilangan 13 di akhir list {insert last}
    insertAtLast(&First, 13);
    printf("5. Insert 13 at last: ");
    printList(First);

    // 6. Hapus elemen terakhir (bilangan 13) pada list {delete last}
    deleteLast(&First);
    printf("6. Delete last (13): ");
    printList(First);

    // 7. Hapus bilangan 7 pada list
    deleteByInfo(&First, 7);
    printf("7. Delete 7: ");
    printList(First);

    // 8. Hapus elemen pertama (bilangan 5) pada list {delete first}
    deleteFirst(&First);
    printf("8. Delete first (5): ");
    printList(First);

    // 9. Hapus semua elemen list deret bilangan ganjil
    deleteAll(&First);
    printf("9. Delete all: ");
    printList(First);

    return 0;
}