int main(void){

    int x; 
    x = 10;

    int *ponteiro; // Um ponteiro que está apontando para um inteiro
    ponteiro = &x; // Aqui ele aponta para o endereço "&" da variável x
    
    printf("%i\n", *ponteiro); // Se tirar o asterisco, ele imprime o endereço de memória
                                // Com o asterisco, acesso o valor guardado na memória
    getchar();

    return 0;
}
