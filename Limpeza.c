static int codigosLimpeza[5] = {11, 12, 13, 14};
static char nomeProdutoLimpeza[5][50] =
{
        {"Detergente"},
        {"Sabao em Po (1kg)"},
        {" Esponja"},
        {"Amaciante (1Lt)"}
};
static float precoLimpeza[5] = {9.5, 12.5, 1.9, 8.50};
static int repeticaoLimpeza = 4;

static float redirecionarGastoLimpeza(int codigoCompra, int quantidade)
{
    float preco = 0;

    switch(codigoCompra){
        case 11:
            preco = precoLimpeza[0];
            addItemCarrinho(nomeProdutoLimpeza[0], precoLimpeza[0], quantidade);
            break;
        case 12:
            preco = precoLimpeza[1];
            addItemCarrinho(nomeProdutoLimpeza[1], precoLimpeza[1], quantidade);
            break;
        case 13:
            preco = precoLimpeza[2];
            addItemCarrinho(nomeProdutoLimpeza[2], precoLimpeza[2], quantidade);
            break;
        case 14:
            preco = precoLimpeza[3];
            addItemCarrinho(nomeProdutoLimpeza[3], precoLimpeza[3], quantidade);
            break;
        default:
            preco = 0.0;
            break;
    }

    preco = preco * quantidade;

    return preco;
}

static float chamarMenuLimpeza()
{
    int codigoCompra = 0, quantidade, preco = 0;

    menuGenerico(codigosLimpeza, nomeProdutoLimpeza, precoLimpeza, repeticaoLimpeza);

    scanf("%d", &codigoCompra);

    if(codigoCompra == 0){
        return preco;
    }

    printf("\nQuantas unidades desse produto você deseja: ");
    scanf("%d", &quantidade);

    preco = redirecionarGastoLimpeza(codigoCompra, quantidade);

    return preco;
}
