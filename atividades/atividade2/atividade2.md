## Atividade 2 — Classificador por última letra

Dada uma lista de nomes pessoais variados, construa um classificador que identifica quais desses nomes são femininos e quais são masculinos. A opção será definida (nesse escopo, pois sabemos que existe mais diversidade no mundo real) com base na última letra do nome, então 'Bruno' deve retornar masculino e 'Bruna' deve retornar feminino.

A ideia é que não se utilize strlen, e sim os iteradores i e j para percorrer o array e as strings.

Conjunto (coloque no começo do seu código):

```c
char \*nomes[] = {
"Fernanda",
"Juliana",
"Paulo",
"Bruna",
"Larissa",
"Bruno",
"Joao",
"Tatiana",
"Antonio",
"Marcelo",
"Patricia",
"Luciana",
};
```
