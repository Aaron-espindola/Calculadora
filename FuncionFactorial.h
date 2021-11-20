int factoreal(int A, int B){
    int fact = 1;


    for (A; A > 1; A--){
        fact = fact *A;
    };

    printf("El factoreal de %d = %d\n",A, fact);
    
    for (B; B > 1; B--){
        fact = fact *B;
    };
    printf("El factoreal de %d = %d\n",B, fact);
}