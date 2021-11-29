int factoreal(int numeroValido1,int numeroValido2){
    int numero1 = numeroValido1 ;
    int numero2 = numeroValido2;
    int factA = 1;
    int factB= 1;

    for (numeroValido1; numeroValido1 > 1; numeroValido1--){
        factA = factA * numeroValido1;
    };

    printf("El factoreal de %d es %d\n",numero1, factA);
    
    for (numeroValido2; numeroValido2 > 1; numeroValido2--){
        factB = factB * numeroValido2;
    };
    printf("El factoreal de %d es %d\n",numero2, factB); 
}
