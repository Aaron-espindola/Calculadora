int factoreal(int A, int B){
    int factA = 1;
    int factB= 1;

    for (A; A > 1; A--){
        factA = factA *A;
    };

    printf("El factoreal de %d = %d\n",A, factA);
    
    for (B; B > 1; B--){
        factB = factB *B;
    };
    printf("El factoreal de %d = %d\n",B, factB);
    
}