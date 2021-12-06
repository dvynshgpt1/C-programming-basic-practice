    int arr[]  = {10 ,20 ,30 ,40,50,60};
    int *ptr1 = &arr;
    int *ptr2 = &(arr)+5;
    printf("%d ,%d, %d , %d", ptr1 , *ptr1 , ptr2  ,*ptr2);
    printf("\n %d", (ptr2-ptr1) , ( *ptr2-*ptr1));
    return 0 ; 