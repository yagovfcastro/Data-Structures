typedef struct skip_list SkipList;
typedef struct nodulo No;

static int gerar_level();
SkipList* criaSkipList();
int vaziaSkipList(SkipList* skp);
int insereSkipList(SkipList** skp, int chave);
int removeSkipList(SkipList** skp, int chave);
int buscaSkipList(SkipList* skp, int chave);
void liberaSkipList(SkipList** skp);
void imprimeSkipList(SkipList* skp);


