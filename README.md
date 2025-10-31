# Desafio Super Trunfo - Nível Mestre

**Feito por:** Luiz Fellipe Rodrigues da Silva

---

Esse foi o meu projeto para a matéria, agora finalizado com o **Nível Mestre** do desafio Super Trunfo.

Meu foco principal de estudos é em Python, então fazer esse trabalho em C foi um desafio de verdade. Chegar até o nível final e fazer o projeto evoluir foi uma experiência muito legal para aprender os fundamentos da linguagem, desde o básico até o uso de lógica de comparação.

### O que o código faz agora:

* Ele ainda cadastra as duas cartas, mas agora o campo "População" aceita números bem maiores, para não dar erro.
* Ele continua calculando a **Densidade** e o **PIB per Capita**, como no nível anterior.
* A maior mudança é que ele agora calcula o **"Super Poder"** de cada carta (que é uma soma de todos os atributos).
* No final, ele mostra a **batalha**: o programa compara cada atributo das duas cartas (quem tem mais população, maior PIB, etc.) e diz qual carta venceu em cada rodada.
* Para a Densidade, a regra é invertida (o menor vence), e o código também faz essa checagem.

### Para testar

É só usar os comandos abaixo no terminal:

**Compilar o código:**
`gcc CartasSuperTrunfo.c -o programa`

**Rodar o programa:**
`./programa`

---
---

## Descrição Original do Desafio (Fornecida pela MateCheck)

### Desafio Super Trunfo - Países - Cadastro das Cartas

Bem-vindo ao desafio "Super Trunfo - Países"! No jogo Super Trunfo, os jogadores comparam as propriedades das cartas para determinar a mais forte. O tema deste Super Trunfo é "Países," onde você comparará as propriedades das cidades.
A empresa MateCheck contratou você para desenvolver a parte inicial do jogo, que consiste no cadastro das cartas.
O desafio está dividido em três níveis: Novato, Aventureiro e Mestre, com cada nível adicionando mais complexidade ao anterior. Você deve escolher qual desafio quer realizar.

**Atenção:**
O nível Novato do desafio é focado apenas no cadastro das cartas, utilizando as funções scanf para ler os dados e printf para exibi-los.

---
### Nível Novato

No nível Novato, você iniciará criando o sistema básico do jogo Super Trunfo com o tema "Países". As cartas serão divididas por estados, cada um com quatro cidades.
Cada país será dividido em oito estados, identificados pelas letras de A a H. Cada estado terá quatro cidades, numeradas de 1 a 4. A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).

**Objetivo:**

Criar cartas representando cidades, contendo as seguintes propriedades:
- População
- Área
- PIB
- Número de pontos turísticos

**Funcionalidades do Sistema:**

- O sistema permitirá ao usuário cadastrar cartas de cidades, inserindo manualmente os dados via terminal de comando.
- Após o cadastro, o sistema exibirá os dados de cada cidade de forma clara e organizada.

**Entrada e Saída de Dados:**

- O usuário insere os dados de cada carta interativamente.
- Após o cadastro, os dados são exibidos com todas as propriedades da cidade, uma por linha.

---
### Nível Aventureiro

**Calculando Densidade Populacional e PIB per Capita**

No nível básico, você criou um sistema para cadastrar as cartas do Super Trunfo. Agora, vamos adicionar mais detalhes e complexidade ao nosso jogo! Neste nível, você implementará a lógica para calcular e exibir duas novas propriedades importantes para cada cidade: a densidade populacional e o PIB per capita.

**O que você vai fazer**

Aprimore o programa em C que você criou no nível básico. O programa continuará lendo as mesmas informações do usuário (estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos) para duas cartas. A diferença é que, agora, seu programa também deve:

- **Calcular a Densidade Populacional:** Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.
- **Calcular o PIB per Capita:** Divida o PIB da cidade pela sua população. O resultado será o PIB per cima, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.
- **Exibir os Resultados:** Além de exibir as informações lidas do usuário (como no nível básico), seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade. Formate os valores de ponto flutuante com duas casas decimais.

**Exemplo de Saída:**
Carta 1: Estado: A ... Densidade Populacional: 8102.47 hab/km² PIB per Capita: 56724.32 reais


**Requisitos funcionais**
- Manter as funcionalidades do nível básico (leitura e exibição dos dados das cartas).
- Calcular e exibir corretamente a densidade populacional e o PIB per Capita para cada cidade.

**Requisitos não funcionais**
- Manter os requisitos não funcionais do nível básico (usabilidade, legibilidade, corretude).
- Eficiência: O programa deve realizar os cálculos de forma eficiente.

**Simplificações para o nível intermediário**
- Você ainda só precisa lidar com duas cartas.
- Continue sem usar estruturas de repetição (for, while) ou estruturas de decisão (if, else).

---
### Nível Mestre

**Batalha de Cartas no Super Trunfo**

Prepare-se para o desafio final! Agora que você já sabe cadastrar cartas e calcular atributos importantes, é hora de colocar suas cartas para lutar! Neste nível avançado, você implementará a lógica de comparação entre duas cartas do Super Trunfo, determinando a vencedora de cada atributo e introduzindo o conceito de "Super Poder". Prepare-se para usar todo o seu conhecimento de operadores relacionais, modificadores de tipo e conversão de tipos em C!

**O que você vai fazer**

Seu programa em C deve agora permitir ao usuário inserir os dados de duas cartas, assim como nos níveis anteriores, mas com uma mudança importante: a população agora deve ser armazenada como `unsigned long int` para acomodar números maiores. As demais informações permanecem com os mesmos tipos. Após a leitura dos dados, seu programa deverá:

- **Calcular a Densidade Populacional e o PIB per Capita:** Assim como no nível intermediário, calcule e armazene esses valores.
- **Calcular o Super Poder:** Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). Armazene o Super Poder como `float`. Atenção: Preste muita atenção na conversão de tipos ao somar valores de tipos diferentes!
- **Comparar as Cartas:** Compare as duas cartas atributo por atributo (exceto estado, código e nome), incluindo o Super Poder. Lembre-se: para a densidade populacional, a carta com o menor valor vence; para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.
- **Exibir os Resultados das Comparações:** Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2), exibindo o resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).

**Exemplo de Saída (após a entrada dos dados):**
Comparação de Cartas: População: Carta 1 venceu (1) ... Densidade Populacional: Carta 2 venceu (0) ... Super Poder: Carta 1 venceu (1)


**Requisitos funcionais**
- Manter as funcionalidades dos níveis básico e intermediário.
- Calcular corretamente o Super Poder para cada carta.
- Comparar corretamente as cartas atributo por atributo.
- Exibir os resultados das comparações de forma clara e organizada.

**Requisitos não funcionais**
- Manter os requisitos não funcionais dos níveis anteriores.

**Entregando seu projeto**
- Continue usando o mesmo repositório do GitHub dos níveis anteriores.
- Atualize o arquivo do seu código.
- Compile e teste.
- Faça commit e push.
- Envie o link do repositório.

Parabéns por chegar ao nível avançado!
Equipe de Ensino - MateCheck