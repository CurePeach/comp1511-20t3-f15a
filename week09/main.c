
#include "list.h"

int main (void) {

    List list = create_list();
    print_list(list);
    
    insert_start_list(list, 3);
    insert_start_list(list, 5);
    insert_start_list(list, 1);
    print_list(list);

    return 0;
}