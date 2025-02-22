
typedef struct _NodoDoble{
    void *dato;
    struct _NodoDoble *next;
    struct _NodoDoble *prev;
}NodoDoble;

typedef struct _ListaDoble{
    NodoDoble *Head;
    NodoDoble *Tail;
    NodoDoble *Curr;
    int size;
} ListaDoble;

typedef struct _Paciente {
    char nombre[30];
    int tiempo_maximo_despacho; // Tiempo que tarda en pagar cada artículo
    int severidad_padecimiento; // Ticks restantes para terminar el pago
   
} Paciente;

typedef struct _Clinica {
    ListaDoble pacientes_en_espera; // Lista de clientes en espera (máximo 2)
    Paciente *paciente_atendiendo;   // Cliente actual en ejecución
} Clinica;

void ImprimirNumeros(void *dato);
void printfdatodeseado(void *dato);
void imprimirPalabras(void *dato);
void InicializarListaDoble(ListaDoble *lista);
void PushFront(ListaDoble *lista, void *item);
void PushBack(ListaDoble *lista, void *item);

NodoDoble *GetNodo(ListaDoble *lista, void *item);

NodoDoble *GetNodoPos(ListaDoble *lista, int pos);
void PushPos(ListaDoble *lista, void *item, int pos);
int BorrarPos(ListaDoble *lista, int pos);
void ImprimirLista(const ListaDoble *const, void (*func)(void *));
void LiberarLista(ListaDoble *lista);


typedef ListaDoble Pilas;

void push(Pilas *pila, void *dato);
void* pop(Pilas *pila);
int estaVacia(Pilas *pila);
void imprimirPila(Pilas *pila, void (*func)(void *));
void* Peek(Pilas *pila);

typedef ListaDoble Colas;

void pushCola(Colas *cola, void *dato);
void* popCola(Colas *cola);
void* PeekCola(Colas *cola);
int EstaVaciaCola(Colas *cola);
void imprimirCola(Colas *cola, void (*func)(void *));


void ejecutar_paciente(Paciente *cliente);
Paciente *generar_paciente();
