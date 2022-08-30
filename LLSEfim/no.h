#ifndef No_H
#define No_H


class No
{
    int dado;
     No *proximo;
 public:
     No();
     ~No();
     No(int valor);//ponteiro
     void setDado(int newDado);
     int getDado() const;
     void setProximo( No *newProximo);
     No* getProximo() const;
};

#endif // No_H
