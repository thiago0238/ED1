#ifndef NO_H
#define NO_H


class NO
{
    int dado;
    NO *proximo;
    NO *anterior;
public:
    NO();
    NO(int valor);
    ~NO();
    void setDado(int newDado);
    int getDado() const;
    void setProximo( NO *newProximo);
    NO* getProximo() const;
    void setAnterior( NO *newAnterior);
    NO* getAnterior() const;
};

#endif // NO_H
