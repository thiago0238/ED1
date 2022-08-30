#ifndef LISTA_H
#define LISTA_H


class NO
{
    int dado;
    NO *proximo;
public:
    NO();
    ~NO();
    NO(int valor);//ponteiro
    void setDado(int newDado);
    int getDado() const;
    void setProximo( NO *newProximo);
    NO* getProximo() const;
};



#endif // LISTA_H
