#include <iostream>
using namespace std;

// definicao de tipo
struct NO {
	int valor;
	NO* prox;
};

NO* primeiro = NULL;

// headers
void menu();
void inicializar();
void exibirQuantidadeElementos();
void exibirElementos();
void inserirElemento();
void excluirElemento();
void buscarElemento();
NO* posicaoElemento(int numero);
//--------------------------


int main()
{
	menu();
}

void menu()
{
	int op = 0;
	while (op != 7) {
		system("cls"); // somente no windows
		cout << "Menu Lista Ligada";
		cout << endl << endl;
		cout << "1 - Inicializar Lista \n";
		cout << "2 - Exibir quantidade de elementos \n";
		cout << "3 - Exibir elementos \n";
		cout << "4 - Buscar elemento \n";
		cout << "5 - Inserir elemento \n";
		cout << "6 - Excluir elemento \n";
		cout << "7 - Sair \n\n";

		cout << "Opcao: ";
		cin >> op;

		switch (op)
		{
		case 1: inicializar();
			break;
		case 2: exibirQuantidadeElementos();
			break;
		case 3: exibirElementos();
			break;
		case 4: buscarElemento();
			break;
		case 5: inserirElemento();
			break;
		case 6: excluirElemento();
			break;

		case 7:
			return;
		default:
			break;
		}

		system("pause"); // somente no windows
	}
}

void inicializar()
{

	// se a lista já possuir elementos
	// libera a memoria ocupada
	NO* novo = (NO*)malloc(sizeof(NO));
	NO* aux = primeiro;
	NO* primeiro = NULL;
	NO* ultimo = NULL;
	while (aux != NULL) {
		NO* paraExcluir = aux;
		aux = aux->prox;
		free(paraExcluir);
	}


	primeiro = NULL;
	ultimo = NULL;

	NO* primeiro = NULL;
	NO* ultimo = NULL;

	if (primeiro == NULL) {
		primeiro = novo;
		ultimo = novo;
	}
	else {
		ultimo->prox = novo;
		ultimo = novo;

	}

	cout << "Lista inicializada \n";

}

void exibirQuantidadeElementos() {

	int nElementos = 0;
	NO* aux = primeiro;
	while (aux != NULL) {
		nElementos++;
		aux = aux->prox;
	}
	cout << "Quantidade de elementos: " << nElementos << endl;

}

void exibirElementos()
{
	if (primeiro == NULL) {
		cout << "Lista vazia \n";
		return;
	}
	else {
		cout << "Elementos: \n";
		NO* aux = primeiro;
		while (aux != NULL) {
			cout << aux->valor << endl;
			aux = aux->prox;
		}
	}
}

void inserirElemento()
{
	// aloca memoria dinamicamente para o novo elemento

	NO* novo = (NO*)malloc(sizeof(NO));
	NO* atual = primeiro;
	NO* anterior = NULL;
	NO* ultimo;



	if (primeiro == NULL)
	{
		while (atual != NULL && atual->valor < novo->valor)

			anterior = atual;
		atual = atual->prox;
		return;
	}

	if (atual != NULL && atual->valor == novo->valor) {
		cout << "Esse elemento já existe na lista. Digite um novo elemento";
	}



	cout << "Digite o elemento: ";
	cin >> novo->valor;
	novo->prox = NULL;

	if (anterior == NULL)
	{
		primeiro = novo;
	}
	else (anterior != NULL)
	{
		// procura o final da lista
		while{
			anterior->prox = novo;
			novo->prox = atual;
		}

	}

	void excluirElemento() {
		NO* atual = primeiro;
		NO* anterior = NULL;
		NO* ultimo = NULL;

		if (primeiro == NULL) {
			std::cout << "Lista vazia";
			return;
		}

		while (atual != NULL && atual->valor != excluir) {
			anterior = atual;
			atual = atual->prox;
		}

		if (atual == NULL) {
			std::cout << "Elemento não encontrado";
			return;
		}

		// Caso 1: o nó a ser excluído é o primeiro
		if (anterior == NULL) {
			primeiro = atual->prox;
			if (atual == ultimo) {
				ultimo = NULL;
			}
			delete atual;
			std::cout << "Elemento excluído (era o primeiro)";
		}
		// Caso 2: o nó está no meio ou no fim
		else {
			anterior->prox = atual->prox;
			if (atual == ultimo) {
				ultimo = anterior;
			}
			delete atual;
			std::cout << "Elemento excluído.\n";
		}
	}


	while (atual->valor != excluir) {

		anterior* atual* ultimo;
		atual = atual->prox;
	}

	if (ultimo->valor == excluir && anterior == NULL) {

		primeiro = ultimo->prox;



	}

	else if (ultimo->valor == excluir)
	{

		NO* aux = atual;
		anterior->prox = atual->prox;
		free(aux);

		cout << "numero excluido";
	}

}


void buscarElemento()
{


	int n;
	cout << "Digite o valor que deseja buscar:  ";
	cin >> n;

	if (aux->valor == numero) {

		cout << "ENCONTRADO" << endl;
		return;
	}

	vector<int> v(n);
	cout << "Digite os " << n << " valores:" << endl;
	for (int i = 0; i < n; i++) {
		cout << "  v[" << i << "] = ";
		cin >> v[i];
	}

	int valor;
	cout << "Digite o valor que deseja buscar: ";
	cin >> valor;
    // Substitua a linha problemática por uma declaração válida de variável antes de usar 'cin >> valor;'
    // Exemplo de correção dentro da função buscarElemento():

    int valor;
    cout << "Digite o valor que deseja buscar: ";
    cin >> valor;
	bool encontrado = false;
	int posicao = -1;
	for (int i = 0; i < n; i++) {
		if (v[i] == valor) {
			encontrado = true;
			posicao = i;
			break;
		}
	}

	if (aux->valor == numero) {

		cout << "ENCONTRADO: " << posicao << endl;
	}
	else (aux->valor > numero) {
		cout << "Não encontrado" << endl;
	}
}

int main() {
	buscarElemento();
	return 0;
}


}



// Correções aplicadas:
// - Inicialização de variáveis locais
// - Inclusão de ; onde faltava
// - Definição de identificadores ausentes
// - Remoção de código C++ não suportado (vector)
// - Correção de ortografia para "posição" e "main"
// - Ajuste de escopo e lógica das funções

#include <iostream>
using namespace std;

// definição de tipo
struct NO {
    int valor;
    NO* prox;
};

NO* primeiro = NULL;

// headers
void menu();
void inicializar();
void exibirQuantidadeElementos();
void exibirElementos();
void inserirElemento();
void excluirElemento();
void buscarElemento();
NO* posicaoElemento(int numero);
//--------------------------

int main()
{
    menu();
}

void menu()
{
    int op = 0;
    while (op != 7) {
        system("cls"); // somente no windows
        cout << "Menu Lista Ligada";
        cout << endl << endl;
        cout << "1 - Inicializar Lista \n";
        cout << "2 - Exibir quantidade de elementos \n";
        cout << "3 - Exibir elementos \n";
        cout << "4 - Buscar elemento \n";
        cout << "5 - Inserir elemento \n";
        cout << "6 - Excluir elemento \n";
        cout << "7 - Sair \n\n";

        cout << "Opcao: ";
        cin >> op;

        switch (op)
        {
        case 1: inicializar();
            break;
        case 2: exibirQuantidadeElementos();
            break;
        case 3: exibirElementos();
            break;
        case 4: buscarElemento();
            break;
        case 5: inserirElemento();
            break;
        case 6: excluirElemento();
            break;
        case 7:
            return;
        default:
            break;
        }

        system("pause"); // somente no windows
    }
}

void inicializar()
{
    NO* aux = primeiro;
    while (aux != NULL) {
        NO* paraExcluir = aux;
        aux = aux->prox;
        free(paraExcluir);
    }
    primeiro = NULL;
    cout << "Lista inicializada \n";
}

void exibirQuantidadeElementos() {
    int nElementos = 0;
    NO* aux = primeiro;
    while (aux != NULL) {
        nElementos++;
        aux = aux->prox;
    }
    cout << "Quantidade de elementos: " << nElementos << endl;
}

void exibirElementos()
{
    if (primeiro == NULL) {
        cout << "Lista vazia \n";
        return;
    }
    else {
        cout << "Elementos: \n";
        NO* aux = primeiro;
        while (aux != NULL) {
            cout << aux->valor << endl;
            aux = aux->prox;
        }
    }
}

void inserirElemento()
{
    NO* novo = (NO*)malloc(sizeof(NO));
    if (novo == NULL) {
        cout << "Falha ao alocar memória.\n";
        return;
    }
    cout << "Digite o elemento: ";
    cin >> novo->valor;
    novo->prox = NULL;

    if (primeiro == NULL) {
        primeiro = novo;
        return;
    }

    NO* atual = primeiro;
    NO* anterior = NULL;

    // Inserção ordenada
    while (atual != NULL && atual->valor < novo->valor) {
        anterior = atual;
        atual = atual->prox;
    }

    // Verifica duplicidade
    if (atual != NULL && atual->valor == novo->valor) {
        cout << "Esse elemento já existe na lista. Digite um novo elemento.\n";
        free(novo);
        return;
    }

    if (anterior == NULL) {
        novo->prox = primeiro;
        primeiro = novo;
    } else {
        anterior->prox = novo;
        novo->prox = atual;
    }
}

void excluirElemento()
{
    int excluir;
    cout << "Digite o valor que deseja excluir: ";
    cin >> excluir;

    NO* atual = primeiro;
    NO* anterior = NULL;

    while (atual != NULL && atual->valor != excluir) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual == NULL) {
        cout << "Elemento não encontrado\n";
        return;
    }

    if (anterior == NULL) {
        primeiro = atual->prox;
    } else {
        anterior->prox = atual->prox;
    }
    free(atual);
    cout << "Elemento excluído.\n";
}

void buscarElemento()
{
    int numero;
    cout << "Digite o valor que deseja buscar: ";
    cin >> numero;

    NO* aux = primeiro;
    int posicao = 0;
    bool encontrado = false;
    while (aux != NULL) {
        if (aux->valor == numero) {
            encontrado = true;
            break;
        }
        aux = aux->prox;
        posicao++;
    }

    if (encontrado) {
        cout << "ENCONTRADO na posição: " << posicao << endl;
    } else {
        cout << "Não encontrado" << endl;
    }
}

// retorna um ponteiro para o elemento buscado
// ou NULL se o elemento não estiver na lista
NO* posicaoElemento(int numero)
{
    NO* aux = primeiro;
    while (aux != NULL) {
        if (aux->valor == numero) {
            break;
        }
        aux = aux->prox;
    }
    return aux;
}
// retorna um ponteiro para o elemento buscado
// ou NULL se o elemento não estiver na lista
NO* posicaoElemento(int numero)
{
	NO* aux = primeiro;
	while (aux != NULL) {
		if (aux->valor == numero)
		{
			break;
		}
		aux = aux->prox;
	}
	return aux;
}


//void excluirElemento()
//{
	//int excluir;
	//NO* atual = primeiro;
	//NO* anterior = NULL;

	//cout << "Digite o Valor que deseja excluir";
	//cin >> excluir;
	//NO* pos = posicaoElemento(excluir);

	//if (pos == NULL) {
		//cout << "numero nao existe";

	//}

	//while (atual->valor != excluir) {

		//anterior* atual;
		//atual = atual->prox;
	}

	//if (atual->valor == excluir && anterior == NULL) {

		//primeiro = atual->prox;



	}

	//else if (atual->valor == excluir)
	{

		//NO* aux = atual;
		//anterior->prox = atual->prox;
		//free(aux);

		//cout << "numero excluido";
	}

}