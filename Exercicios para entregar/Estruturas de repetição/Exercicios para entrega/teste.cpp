int main() {
    char letra;

    printf("Digite um caracter: ");
    scanf("%c", &letra);
    // a, e, i, o, u, A, E, I, O, U
    if(letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i'
       || letra == 'I' || letra == '0' || letra == 'O' || letra == 'u' || letra == 'U')
        printf("\tVogal...\n");
    else
        printf("\tConsoante\n");
}
