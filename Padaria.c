static int codigosPadaria[5] = {31, 32, 33, 34};
static char nomeProdutoPadaria[5][50] =
{
    {"Pao de Forma"},
    {"Pao Integral"},
    {"Pao Frances(Unid)"},
    {"Sonho"}
};
static float precoPadaria[5] = {9.5, 12.5, 1.9, 8.50};
static int repeticaoPadaria = 4;

static float redirecionarGastoPadaria(int codigoCompra, int quantidade)
{
    float preco = 0;

    switch(codigoCompra){
        case 31:
            preco = precoPadaria[0];
            addItemCarrinho(nomeProdutoPadaria[0], precoPadaria[0], quantidade);
            break;
        case 32:
            preco = precoPadaria[1];
            addItemCarrinho(nomeProdutoPadaria[1], precoPadaria[1], quantidade);
            break;
        case 33:
            preco = precoPadaria[2];
            addItemCarrinho(nomeProdutoPadaria[2], precoPadaria[2], quantidade);
            break;
        case 34:
            preco = precoPadaria[3];
            addItemCarrinho(nomeProdutoPadaria[3], precoPadaria[3], quantidade);
            break;
        default:
            preco = 0.0;
            break;
    }

    preco = preco * quantidade;

    return preco;
}

static float chamarMenuPadaria()
{
    int codigoCompra = 0, quantidade, preco = 0;

    menuGenerico(codigosPadaria, nomeProdutoPadaria, precoPadaria, repeticaoPadaria);

    scanf("%d", &codigoCompra);

    if(codigoCompra == 0){
        return preco;
    }

    printf("\nQuantas unidades desse produto você deseja: ");
    scanf("%d", &quantidade);

    preco = redirecionarGastoPadaria(codigoCompra, quantidade);

    return preco;
}

