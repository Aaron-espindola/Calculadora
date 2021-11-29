int validar(char numero1[],char numero2[]){

    for(int i=0; i <strlen(numero1) || i <strlen(numero2);i++){

        if(!(isdigit(numero1[i])) || !(isdigit(numero2[i]))) {

            printf("\nINGRESA SOLO NUMEROS\n");
            getch();
            return 0;
        }
    }
    return 1;
}