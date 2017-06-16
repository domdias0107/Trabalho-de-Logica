#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*Geraldo Dias da Silva
Primeiro Período de Técnico em informática - IF
*/
// Largura do propt:

/*
Enviar o trabalho para: robson.souza.cl@gmail.com
até o dia 18/06 23:59
Assunto: Trabalho Lógica Informática
Nome do Arquivo: Geraldo_Dias.zip
*/
/*Tabela de cores:
 0 = Preto        8 = Cinza
 1 = Azul         9 = Azul claro
 2 = Verde        A = Verde claro
 3 = Verde-água   B = Verde-água claro
 4 = Vermelho     C = Vermelho claro
 5 = Roxo         D = Lilás
 6 = Amarelo      E = Amarelo claro
 7 = Branco       F = Branco brilhante*/
//Opçoes de matar ou não um adversario.
void assacinato(char name[]);
/*Caso o player mate algum ser humano,
trouxa ou bruxo. Aparecerá uma advertencia.*/
void assacino(char name[]);
//O player vai se deparar com um basilisco.
void Basilisco(char name[]);
/*Caso o player escolha a capa.
Capa é uma das reliquias*/
void Capa(char name[]);
//Neste void, descrevo o encontro com os centauros.
void centauros(char name[]);
//Caso o player queira saber qual o casa ele pentence em hogwarts.
void Chapeu(char name[]);
//Caso ele queira fugir ou desistir.
void covarde(char name[]);
//Neste void estou dizendo o que deve acontecer, caso o player encontre um dementador.
void dementador(char name[]);
/*Para quando ele tiver que duelar.
Neste void todos os feiticos são letais.*/
void duelos(char name[]);
//O que aconte quando o player se depara com a lendria esfinge.
void esfinge(char name[]);
/*Sempre que o player acertar uma resposta,
feita pela esfinge.*/
void esfingecerta(char name[]);
/*Tem a mesma função do void anterior, mas
serve para quando o player estiver errado*/
void esfingeerrada(char name[]);
//Aqui acontecem a maior parte das aventuras.
void floresta(char name[]);
//Este é o fim da floresta.
void florestafim(char name[]);
//Fim de jogo.
void go(char name[]);
//Grifinório
void gry(char name[]);
//Quando o player vencer, o jogo, contarei a história horiginal do livo "Harry Potter e as reliquias da morte de J.K."
void Historia(char name[]);
//Lufa-lufa
void hulf(char name[]);
//Onde é dado a situacao em que o player se encontra
void inicio(char name[]);
//Aqui, vou criar o primeiro desafio dentro da floresta.
void Ladrao(char name[]);
/*Aqui se encontra a punição, caso ele decida usar
uma das maldições que são proibidas pelo ministério da Magia.*/
void maldicoes(char name[]);
//Este void é para controlar o encontro do player com a Morte.
void Morte(char name[]);
//Caso o player tente nadar
void nadar(char name[]);
//Opçoes com as consequencias.
void opcoes(char name[]);
/*Parabeniza o player, quando o toma uma atitude que
pelos padrões da nossa sociede, são vistas como honraveis.*/
void parabens(char name[]);
/*Este será mostrado, caso o player use um escolha a pedra.
A Pedra também é uma reliquia da Morte.*/
void Pedra(char name[]);
/*Nesta void, está o simbolo das reliquias da morte.
O nome dela, é em homenagem ao sobre nomes dos irmaos do conto.*/
void Peverel();
//Corvinal
void rav(char name[]);
//O que o player consegue fazer quando chega no rio.
void rio(char name[]);
//Sonserina
void sly(char name[]);
/* Este será mostrado, quando o player escolher a varinha.
A varinha é uma das reliquias da morte*/
void Varinha(char name[]);
//Quando o player ganhar o jogo, vai aparecer o seguinte void para ele:
void Vencedor(char name[]);

int main(){
	    char name[21];
	    int idade;

    //Regras:
	printf("Regras:\n");
	printf("1 - Quando for pedido palavras, todas as letras deverao ser minusculas\n");
	printf("2 - As configurações da janela de exibição, devem ser (no minimo):\n Largura: 145\n Altura: 25.\n");

	//Aqui o player se apresenta para mim.
    printf("Agora que ja conheceis as regras, vamos nos conhecer um pouco mais.\n");
    printf("Meu nome é Cronos, e eu apenas observo os fatos, e relato o que eu observei.\n");
    printf("Mas me diga:\n");
    printf("\n\nQual o seu nome?\n");
    scanf("%s", name);
    printf("Quantos anos voce tem?\n");
    scanf("%d", idade);
    //Esse jogo eh apenas para maiores, segundo as leis bruxas:
    if(idade>=17){
    //Neste primeiro momento, estou dialogando e colocando o senário para o player.
    printf("Muito bem, sir %s. Seja bem vindo ao jogo das reliquias da morte.\n", name);
    Peverel();
    printf("Pronto para comecar?\n");
    printf("Entao vamos la\n");
     printf(" voce eh um feiticeiro muito poderoso e esta caminhando por uma estrada tortuosa.\n");
    inicio(name);
    }
    else{
        printf("Lamentamos, mas apenas bruxos maiores podem jogos este game.");
    }

    return 0;
}

void assacinato(char name[]){
    printf("1 - Mata-lo.\n");
    printf("2 - Deixa-lo ali e ir em bora.\n");
    printf("3 - Deixa-lo vivo, mas esconde-lo para a proteção dele.\n");
}

void assacino(char name[]){
    printf("Voces mataram uma pessoa, lembre tudo tem volta.\n");
    printf("Tome cuidado.\n");
    printf("Pode proseguir.\n");
    florestafim(name);
}

void Basilisco(char name[]){
    char resposta[4];
    int respostas;

    printf("Voce percebeu varias aranhas andando em uma direcao so, como se estivessem fugindo de algo.\n");
    printf("Voce deseja saber o por que?\n");
    printf("S - Sim\n");
    printf("N - Nao\n");
    scanf("%c",&resposta[0]);

    if(resposta[0]=='S'){
        printf("Quando voce se aproximou, percebeu que um grande pele de cobra estava solta no chao por varios metros.\n");
        printf("E que havia pelo caminho um tanto bom  animais mortos,\n");
        printf(" e outro tanto petrificados.\n");
        printf("Tem certeza que deseja continuar?\n");
        printf("S - Sim\n");
        printf("N - Nao\n");
        scanf("%c", &resposta[1]);

        if(resposta[1]=='S'){
            printf("Voce caminhou por mais um instante, quando viu um grande animal dormindo em cima de uma pedra.\n");
            printf("Este animal se parece uma grande serpente, deseja continuar?\n");
            printf("S - Sim\n");
            printf("N - Nao\n");
            scanf("%c", &resposta[2]);

            if(resposta[2]=='S'){
                printf("Ao se aproximar mais, viu que a pele do animal era grossa como o couro de um crocodilo, talvez ate mais.\n");
                printf("Deseja tocar no animal?\n");
                printf("S - Sim\n");
                printf("N - Nao\n");
                scanf("%c", &resposta[3]);

                if(resposta[3]=='S'){
                	srand((unsigned)time(NULL));
                	respostas=1+(rand()%2);
                	if(respostas==1){
                    	printf("Quando voce o tocou, o animal acordou.\n");
                    	printf("Voce viu que ele tinha belos olhos amarelos.\n");
                    	printf("Era na verdade um Basislisco. E como voce olhou diretamente nos olhos dele, voce acabou morrendo.\n");
                    	go(name);
                	}

                	else{
                		printf("Quando voce o tocou, o animal acordou.\n");
                    	printf("Porem, voce pelo reflexo de uma poca de agua que avia no chao, que ele tinha belos olhos amarelos.\n");
                    	printf("Era na verdade um Basislisco. E como voce olhou indiretamente nos olhos dele, voce acabou petrificado.\n");
                    	go(name);
                	}

                }

                else{
                    printf("Entao saia dai o mais rapido possivel.\n");
                    floresta(name);
                }
            }

            else{
                printf("Entao saia dai o mais rapido possivel.\n");
                floresta(name);
            }
        }

        else{
            printf("Entao saia dai o mais rapido possivel.\n");
            floresta(name);
        }
    }

    else if(resposta[0]=='n'){
        printf("Entao saia dai o mais rapido possivel.\n");
        floresta(name);
    }

    else{
    	printf("Opcao invalida");
    }
}

void Capa(char name[]){
    printf("Leia a historia e conheça o seu destino.");
    Historia(name);
    printf("\n\n\n");
}

void centauros(char name[]){

    int respostas[3];

    printf("Voce ouviu um barulho ao longe.\n");
    printf("Parece pessoas montando cavalos.\n");
    printf("Acho melhor voce achar a fonte deste estranho barulho.\n");
    printf("Para a sua seguranca.\n");
    printf("\n 1 - Olhar a fonte do barulho.\n");
    printf("2 - Deixar para lá e seguir o meu caminho.\n");
    scanf("%d", &respostas[0]);

    if(respostas[0]==1){

        //Quando o player, resolver olhar a causa do barulho.
        if(respostas[0]==1){
             printf("Voce foi olhar, o que estava provocando os barulhos.\n");
             printf("Mas quando voce os avistou, percebeu que eram centauros.\n");
             printf("Voce tentou nao fazer barulho e se afastar.\n");
             srand((unsigned)time(NULL));
	         respostas[1]=1+(rand()%2);

            //O player esbarra em um hipogrifo
            if(respostas[1]==1){
                   printf("Mas quando voce tentou se afastar, esbarrou em um hipogrifo que comecou a gritar.\n");
                   printf("Logo os centauros vieram correndo em sua direcao atras do hipogrifo.\n");
                   printf("Quando os centauros chegaram, comecaram a brigar com o hipogrifo e tentar amarra-lo.\n");
                   printf("Porem ainda nao te viram");
                   printf("O que deseja fazer?\n");
                   printf("1 - Aproveitar a confusao e fugir para bem longe dali.\n");
                   printf("2 - Ficar quieto e ver o que acontece.\n");
                   scanf("%d",&respostas[2]);

                    /*O player baterá de frente com um centauro.
                    De qualquer maneira ele perde.*/
                    if (respostas[2]==1){
                       printf("Ao tentar fugir, voce deu de frente com um centauro que estava\n");
                       printf("vigiando o perimetro para que os outros nao fossem atacados.\n");
                       printf("E ele nao esta com cara de bons amigos, nao.");
                       printf("O que deseja fazer?");
                       printf("1 - Lutar\n");
                       printf("2 - Render-se\n");
                       scanf("%d",&respostas[3]);

                       //O player morre
                       if(respostas[3]==1){
                          printf("Infelizmente, voce estava em menor numero.\n");
                          printf("Os centauros te escravisaram.\n");
                          go(name);
                       }

                        //O player vira escravos de centauros
                         else{
                            printf("Os centauros te aprisionaram.\n");
                            printf("Confiscaram a sua varinha e pisaram nela, até que se quebrassem.\n");
                            go(name);
                         }
                    }


            else if(respostas[1]==2){
                printf("Depois de um bom tempo, os centauros foram embora.\n");
                printf("Aproveite a oportunidade e fuja.\n");
                florestafim(name);
            }

            else {
                 printf("Opcao invalida, tente novamente.");
                 centauros(name);

            }
         }
        //Neste caso, o player terá sorte e sairá com vida.
        else if(respostas[1]==2){
             printf("Para a sua sorte ninguem te viu, aproveite e fuja");
        }

        else{
             printf("Opcao invalida, tente mais uma vez.");
             centauros(name);
        }
    }

       else if(respostas[0]==2){
         printf("Sabia decisão.");
         printf("Continue seu caminho");
         floresta(name);
          }

       else{
         printf("Resposta invalida");
         printf("Tente novamente");
         centauros(name);
            }
    }
       else if(respostas[0]==2){
         printf("Sabia decisão.");
         printf("Continue seu caminho");
         floresta(name);
          }

       else{
         printf("Resposta invalida");
         printf("Tente novamente");
         centauros(name);
        }
}

void Chapeu(char name[]){
    char hogwarts[2];
    int Sly, Gry, Hulf, Rav, trouxa, resultado, cont;
    int resposta[2];
    system("color ac");
    printf("Tudo bem, vamos la.\n");
    printf("Voce responderá uma serie de perguntas e respostas, que tem como objetivo achar quais sao as suas qualidades.\n");
    printf("Responda sinceramente.\n");
    printf("\nSeus amigos te acham...\n");
    //A sequencia das casas são: Trouxas, sly, rav, hulf e gry.
    while(cont==6){
            //1ª pergunta
            printf("1 - Bonito\n");
            printf("2 - Orgulhoso\n");
            printf("3 - Inteligente\n");
            printf("4 - Leal\n");
            printf("5 - Corajoso\n");
            scanf("%d", &resposta[1]);

            if(resposta[1]==1){
                trouxa++;
                trouxa=trouxa+trouxa;
            }

            else if(resposta[1]==2){
                Sly++;
                Sly=Sly+Sly;
            }

            else if(resposta[1]==3){
                Rav++;
                Rav=Rav+Rav;
            }

            else if(resposta[1]==4){
                Hulf++;
                Hulf=Hulf+Hulf;
            }

            else{
                Gry++;
                Gry=Gry+Gry;
            }

            cont++;

             // 2ª Pergunta
            printf("\n\nO que voce busca na vida?\n");
            printf("1 - Fama\n");
            printf("2 - Poder\n");
            printf("3 - Conhecimento\n");
            printf("4 - Amizades\n");
            printf("5 - Gloria\n");
            scanf("%d", &resposta[1]);

            if(resposta[1]==1){
                trouxa++;
                trouxa=trouxa+trouxa;
            }

            else if(resposta[1]==2){
                Sly++;
                Sly=Sly+Sly;
            }

            else if(resposta[1]==3){
                Rav++;
                Rav=Rav+Rav;
            }

            else if(resposta[1]==4){
                Hulf++;
                Hulf=Hulf+Hulf;
            }

            else{
                Gry++;
                Gry=Gry+Gry;
            }
            cont++;

            //3ª Pergunta
            printf("\n\nQual desses animais voce prefere?\n");
            printf("1 - Macacos\n");
            printf("2 - Cobra\n");
            printf("3 - Texugo/ guaxinim\n");
            printf("4 - Passaros\n");
            printf("5 - Gatos\n");
            scanf("%d", &resposta[1]);

            if(resposta[1]==1){
                trouxa++;
                trouxa=trouxa+trouxa;
            }

            else if(resposta[1]==2){
                Sly++;
                Sly=Sly+Sly;
            }

            else if(resposta[1]==3){
                Rav++;
                Rav=Rav+Rav;
            }

            else if(resposta[1]==4){
                Hulf++;
                Hulf=Hulf+Hulf;
            }

            else{
                Gry++;
                Gry=Gry+Gry;
            }
            cont++;

            //4ª pergunta
            printf("\n\nQual combinação de cores voce prefere?\n");
            printf("1 - Rosa e roxo\n");
            printf("2 - Verde e prateado\n");
            printf("3 - Azul e preto\n");
            printf("4 - Amarelo e preto\n");
            printf("5 - Amarelo e vermelho\n");
            scanf("%d", &resposta[1]);

            if(resposta[1]==1){
                trouxa++;
                trouxa=trouxa+trouxa;
            }

            else if(resposta[1]==2){
                Sly++;
                Sly=Sly+Sly;
            }

            else if(resposta[1]==3){
                Rav++;
                Rav=Rav+Rav;
            }

            else if(resposta[1]==4){
                Hulf++;
                Hulf=Hulf+Hulf;
            }

            else{
                Gry++;
                Gry=Gry+Gry;
            }
            cont++;

            //5ª pergunta
            printf("\n\nQual seria o trabalho ideal para voce?\n");
            printf("1 - Que envolva trabalhar com computador e tecnologia\n");
            printf("2 - Ganhe muito dinheiro em um escritorio estravagante\n");
            printf("3 - Um que envolva história, diferentes culturas e religioes\n");
            printf("4 - Trabalhar com criancas ou animais\n");
            printf("5 - Muito variado e respeitado. Assim eu nao me entendiarei facilmente\n");
            scanf("%d", &resposta[1]);

            if(resposta[1]==1){
                trouxa++;
                trouxa=trouxa+trouxa;
            }

            else if(resposta[1]==2){
                Sly++;
                Sly=Sly+Sly;
            }

            else if(resposta[1]==3){
                Rav++;
                Rav=Rav+Rav;
            }

            else if(resposta[1]==4){
                Hulf++;
                Hulf=Hulf+Hulf;
            }

            else{
                Gry++;
                Gry=Gry+Gry;
            }
            cont++;

            //6ª pergunta
            printf("\n\nO que faria se um ladrao entrasse na sua casa?\n");
            printf("1 - Chamaria a policia\n");
            printf("2 - Fingiria ser um ladrao tambem e ofereceria ajuda\n");
            printf("3 - Faria um plano para fugir do perigo\n");
            printf("4 - Faria tudo que o ladrao quise-se\n");
            printf("5 - Enfrentaria o ladrao\n");
            scanf("%d", &resposta[1]);

            if(resposta[1]==1){
                trouxa++;
                trouxa=trouxa+trouxa;
            }

            else if(resposta[1]==2){
                Sly++;
                Sly=Sly+Sly;
            }

            else if(resposta[1]==3){
                Rav++;
                Rav=Rav+Rav;
            }

            else if(resposta[1]==4){
                Hulf++;
                Hulf=Hulf+Hulf;
            }

            else{
                Gry++;
                Gry=Gry+Gry;
            }
            cont++;
    }

    if(trouxa>Sly){
        if(trouxa>Rav){
            if(trouxa>Hulf){
                if(trouxa>Gry){
                    printf("Infelizmente, voce eh um trouxa.\n");
                    printf("Por isso nao pode estudar em Hogwarts.\n");
                    printf("Fim de jogo.");
                }
                else{
                    gry(name);
                }
            }
            else{
                if(Hulf>Gry){
                    hulf(name);
                }
                else{
                    gry(name);
                }
            }
        }
        else{
            if(Rav>Hulf){
                if(Rav>Gry){
                    rav(name);
                }
                else{
                    gry(name);
                }

            }
            else{
                if(Hulf>Gry){
                    hulf(name);
                }
                else{
                    hulf(name);
                }
            }
        }
    }
    else if(Sly>trouxa){
        if(Sly>Rav){
            if(Sly>Hulf){
                if(Sly>Gry){
                    sly(name);
                }
                else{
                    gry(name);
                }
            }
            else{
                if(Hulf>Gry){
                    hulf(name);
                }
                else{
                    gry(name);
                }
            }
        }
        else{
            if(Rav>Hulf){
                if(Rav>Gry){
                    rav(name);
                }
                else{
                    gry(name);
                }
            }
            else{
                if(Hulf>Gry){
                    hulf(name);
                }
                else{
                    gry(name);
                }
            }
        }

    }
    else{
        printf("Entao, isso eh tudo pessoal.\n");
    }

}

void dementador(char name[]){
    int respostas[2];

    printf("Pense na sua lembranca mais feliz, para que voce possa conjurar o Patrono.\n");
    printf("Aperte 1, para continuar\n");
    scanf("%d",&respostas[0]);
    if(respostas[0]=1){
        printf("Expecto Patronum\n");
        srand((unsigned)time(NULL));
        respostas[1]=1+(rand()%2);

        if(respostas[1]==1){
            printf("O dementador te alcancou e te beijou.\n");
            go(name);
        }

        else if(respostas[1]==2){
            printf("Voce conseguiu espulsar o dementador.\n");
            printf("Continue.\n");
            florestafim(name);
        }
    }
    else{
        printf("Comando invalido.\n tente novamente.\n");
        dementador(name);
    }
}

void duelos(char name[]){
	 //Cada vetor, se refere diretamente a camada em que estamos no void.
    int respostas[3];

    printf("1 - Avada Kedavra\n");
    printf("2 - Crusius\n");
    printf("3 - Imperius\n");
    printf("4 - Sectumsempra\n");
    printf("5 - Bombarda\n");
    printf("6 - Estupefaça\n");
    printf("7 - Expelliarmus\n");
    printf("8 - Petrificus Totalus\n");
    printf("9 - Serpensortia\n");
    printf("10 - Accio Varinha\n");
    scanf("%d", &respostas[0]);

        // O player morre.
    if(respostas[0]<=3){
         maldicoes(name);
    }

	//O player tem permissão para continuar.
    else if((respostas[0]==4)&&(respostas[0]==5)){
        assacino(name);
    }

    //O player tem permissão para continuar.
    else if(respostas[0]==6){
        printf("Quando voce estuporou ele, o ladrao bateu com a cabeca em uma pedra e morreu.\n");
        printf("Mas ele sabia dos riscos, quando quis comecar a duelar.");
        printf("Pode prosseguir\n");
        florestafim(name);
    }

     else if((respostas[0]==10)&&(respostas[0]==7)){
        printf("Voce conseguiu desarmar o ladrao e ele saiu correndo.\n");
        printf("Parabens pela vitória, continue.\n");
        florestafim(name);
    }

	else if(respostas[0]==8){
        printf("Voces deixaram o ladrao petrificado.\n");
        printf("O que deseja fazer?\n");
        assacinato(name);
        scanf("%d",&respostas[1]);

        //O player matou o ladrão
        if(respostas[1]==1){
            assacino(name);
        }

        //O player não matará o ladrão
        else{
            parabens(name);
        }
    }
}

void esfinge(char name[]){

    char resposta[50];
    int respostas[2];

        printf("Voce foi atras da moca e a viu entrar em uma caverna.\n");
        printf("Quando voce entrou na caverna, viu que aquela bela moca havia se tornado uma freoz esfinge.\n");
        printf("Ela preservava seu rosto de mulher, mas tem um corpo de leao e assas como de aguia.\n");
        printf("Antes que voce e seus irmaos pudessem pensar em fugir, ela disse:\n");
        system("color 0c");
        printf("Quer chegar ao outro lado do rio?\n");
        printf("O unico caminho que te leva ao seu destino, passa por mim.\n");
        printf("Te farei uma pergunta, se errar morrerá, mas se acertar podera passar.\n");
        printf("Pronto ou nao, la vamos nos.\n");
        //Esta função, irá determinar qual eniguima o player deverá responder.
        srand((unsigned)time(NULL));
		respostas[0]=1+(rand()%7);

		//Enigma do estranho animal
		if(respostas[0]==1){
            printf("O que eh que a mulher casada tem mais larga que a solteira?\n");
            fflush(stdin);
            fgets(resposta, 50, stdin);//gets(resposta);

            if(resposta[0]=='a'&&resposta[1]==' '&&resposta[2]=='c'&&resposta[3]=='a'&&resposta[4]=='s'&&resposta[5]=='a'){
                esfingecerta(name);
            }
            else{
                esfingeerrada(name);
            }
        }
        //Qual o nome da criatura?
        else if(respostas[0]==2){
            printf("Durante o dia eu queimo como o fogo");
            printf("Mas a noite sou fio como a neve.");
            printf("Quem eu sou?");
            fflush(stdin);
            fgets(resposta, 50, stdin); //gets(resposta);

            if(resposta[0]=='O'&&resposta[1]==' '&&resposta[2]=='d'&&resposta[3]=='e'&&resposta[4]=='s'&&resposta[5]=='e'&&resposta[6]=='r'&&resposta[7]=='t'&&resposta[8]=='o'){
                esfingecerta(name);
            }

            else{
                esfingeerrada(name);
            }
        }
        //O que eu sou?
        else if(respostas[0]==3){
            printf("Tenho furos a direita e a esquerda,\n");
            printf("Tenho furos em cima e em baixo,\n");
            printf("E mesmo assim retenho agua.\n");
            printf("O que eu sou?\n");
            fflush(stdin);
            fgets(resposta, 50, stdin);//gets(resposta);

            if(resposta[0]=='e'&&resposta[1]=='s'&&resposta[2]=='p'&&resposta[3]=='o'&&resposta[4]=='n'&&resposta[5]=='j'&&resposta[6]=='a'){
                esfingecerta(name);
            }

            else{
                esfingeerrada(name);
            }
        }

        //A mais magnigica criatura.
        else if(respostas[0]==4){
            printf("Se morro, renasco,\n");
            printf("Quado ao fim da vida chego em chamas me consumo.\n");
            printf("Se me fizer chorar, suas chagas vao se curar.\n");
            printf("Quem sou eu?");
            fflush(stdin);
            fgets(resposta, 50, stdin);//gets(resposta);

            if(resposta[0]=='f'&&resposta[1]=='e'&&resposta[2]=='n'&&resposta[3]=='i'&&resposta[4]=='x'){
                esfingecerta(name);
            }

            else{
                esfingeerrada(name);
            }
        }
        //Deus Cronos
        else if(respostas[0]==5){
            printf("Eu vi as primeiras particulas se chocarem.\n");
            printf("Eu vi o universo se formar.\n");
            printf("Eu vi cada especie evoluir.\n");
            printf("Eu te vi nascer.\n");
            printf("Eu te vi crecer.\n");
            printf("Eu vejo cada coisa que voce faz.\n");
            printf("Eu verei sua morte.\n");
            printf("Verei a morte do universo.\n");
            printf("Quem sou eu?\n\n");
            fflush(stdin);
            fgets(resposta, 50, stdin);//gets(resposta);

                if(resposta[0]=='t'&&resposta[1]=='e'&&resposta[2]=='m'&&resposta[3]=='p'&&resposta[4]=='o'){
                    esfingecerta(name);
                }

                else{
                    esfingeerrada(name);
                }
        }

        //O assassinos e as salas
        else{
            printf("Um assassino foi condenado a morte,\n");
            printf("Ele então tem que escolher entre tres salas:\n");
            printf("A sala 1 esta cheia de focos de incendio.\n");
            printf("A sala 2 esta cheia de assassinos com armas carregadas.\n");
            printf("A sala 3 esta cheia de leoes que nao comem a tres meses.\n");
            printf("Qual a sala mais segura para ele?\n");
            scanf("%d",&respostas[1]);

            if(respostas[1]==1){
                esfingeerrada(name);
            }

            else if(respostas[1]==2){
                esfingeerrada(name);
            }

            else if(respostas[1]==3){
                esfingecerta(name);
            }

            else{
            	printf("Opcao invalida.\n");
            	printf("Tente novamente.\n");
            	esfinge(name);
            }

        }

    }

void esfingecerta(char name[]){
    printf("Meus Parabens, voce deve ser um corvino nato.\n");
    printf("Sua resposta esta correta, pode seguir o seu caminho.\n");
    florestafim(name);
}

void esfingeerrada(char name[]){
    printf("Voce errou miseravelmente e por isso foi devorado.");
    go(name);
}

void floresta(char name[]){
	int respostas[4];
    char resposta[3];

    //Estou dando a oportunidade do player desitir.
    //Se eu fosse ele, aceitaria.
    printf("Voce esta na floresta, deseja continuar?\n");
    printf("S - Sim\n");
    printf("N - Nao\n");
    scanf("%c",&resposta[0]);

    //Caso o player queira continuar, ele cairá dentro deste if. Onde acontecerá a maior parte do jogo.
    if(resposta[0]=='S'){
    	while(respostas[0]==6){
    		//Esta formula é para deixar o jogo mais dinamico.
            srand((unsigned)time(NULL));
			respostas[1]=1+(rand()%6);

            //Primeiro desafio, será selecionado aleatóriamente. E nele se o player enfrentará um ladrão.
            if(respostas[1]==1){
                Ladrao(name);
            }

            //Neste segundo desafio, o player deve enfentar dementadores.
            else if (respostas[1]==2){

                printf("Voce percebeu que o tempo começou a ficar frio.\n");
                printf("Sentiu como se a felicidade fosse embora e que voce nunca mais seria feliz.\n");
                printf("Quando voce olhou a sua volta percebeu que um dementador estava vindo em sua direcao.\n");
                printf("Deseja conjurar o patrono?\n");
                printf("S - Sim\n");
                printf("N - Nao\n");
                scanf("%c",&resposta[1]);

                if(resposta[1]=='S'){
                    dementador(name);
                }

                else{
                    printf("O dementador te alcancou e te beijou.\n");
                    go(name);
                }
            }

            //Neste terceiro desafio, o player, deve enfrentar alguns centauros.
            else if(respostas[1]==3){
                centauros(name);
            }

            //Neste quarto desafio, o player vai enfrentar a lendaria esfinge.
            else if(respostas[1]==4){
                printf("Depois de caminhar por um bom tempo, voce viu uma jovem e bela donzela, correndo em meio a mata.\n");
                printf("Voce deseja ir atras dela?");
                printf("S - Sim");
                printf("N - Nao");
                scanf("%c",&resposta[2]);

                if(resposta[2]=='S'){
                        esfinge(name);
                    }

                else{
                        floresta(name);
                    }

            }

            //Agora, nesta quinta opção, ele tera que enfrentar um basilisco.
            else{
               Basilisco(name);
           }

    	}

    }


   	//Caso o user não queira continuar na floresta.
   	else if(resposta[0]=='N'){
 		printf("Tudo bem continue.\n");
        inicio(name);
   	}

   	else{
   		printf("opcao invalida, tente novamente.\n");
   		floresta(name);
   	}

}

void florestafim(char name[]){
	printf("Depois de caminhar por mais um tempo, o Sol já se punha\n");
    printf("e voce já estava quase sem esperanca de achar um novo caminho.\n");
    printf("Quando de repende, voce avistou ao longe uma estrada.\n");
    printf("Entao mais que depressa, voce correu ate ela. Pensando:\n");
    printf("''Se ha uma estrada talvez haja uma ponte''\n");
    printf("Mas quando voce chegou na estrada, percebeu que todo este tempo, voce ficou andando em voltas.\n");
    printf("Sim! Voce voltou no rio.\n");
    printf("E agora, o que deseja fazer, Sir %s?\n", name);
    opcoes(name);
}

void go(char name[]){
	int replay;
	system("color 0c");
printf(" ********            ***           ***          ***   **********    ********\n");
printf(" *********          *****          ****        ****   **********    *********\n");
printf("**       **        **   **         ** **      ** **   **            **      **\n");
printf("**       **       **     **        **  **    **  **   **            **     **\n");
printf("**               ***********       **   ******   **   *******       ********\n");
printf("**   *******    *************      **    ****    **   *******       ****\n");
printf("**     ***     **           **     **            **   **            ** **\n");
printf(" ********     **             **    **            **   **********    **  **\n");
printf(" *******     **               **   **            **   **********    **   **\n");
printf("\n\n");
printf(" ********    **               **   *********    ********\n");
printf(" *********    **             **    *********    *********\n");
printf("**       **    **           **     **           **      **\n");
printf("**       **     **         **      **           **     **\n");
printf("**       **      **       **       *******      ********\n");
printf("**       **       **     **        *******      ****\n");
printf("**       **        **   **         **           ** **\n");
printf(" *********          *****          *********    **  **\n");
printf(" ********            ***           *********    **   **\n");
    printf("\n\nSir %s Voce deseja tentar novamente?\n", name);
    printf("1 - Sim\n");
    printf("2 - Nao\n");
    scanf("%d", &replay);

    if(replay==1){
        main();
    }
    else{
        printf("Game Over");
    }

}

void gry(char name){
    printf("Parabens, Sir %s voce e um Grifinorio\n", name);
    printf("Casa de homens e mulher Corajosos.\n");
    printf("Se está em busca de aventuras, esta certamente eh a sua casa.\n");
    printf("Seja bem vindo a Hogwarts.\n");
    printf("Fim de jogo");
}

void Historia(char name[]){
    printf("Era uma vez, tres irmaos que estavam viajando por uma estrada deserta e tortuosa ao anoitecer.\n");
    printf("Depois de algum tempo, os irmaos chegaram a um rio muito perigoso para atravessar.\n");
    printf("Os irmaos porem eram versados em magia. Os tres irmaos simlesmente balancaram suas varinhas e fizeram uma ponte.");
    printf("Antes que pudessem atravessar a ponte, tiveram o caminho bloqueado por uma figura encapuzada.");
    printf("Era a Morte!\n");
    printf("Ela se sentiu traida. Traida porque o normal seria os viajantes de afogarem no rio.\n");
    printf("Mas a Morte era perpicaz. Ela fingiu parabenizar os tres irmaos por sua magia e disse que cada um ganharia um premio, \n");
    printf("por ter sido inteligente o bastante para evita-la.\n");
    printf("O Mais velho, pediu a Varinha mais poderosa que existi-se.\n");
    printf("E a Morte lhe deu uma varinha feita da arvore de sabugueiro.\n");
    printf("O segundo irmao, decidiu humilhar a morte ainda mais. E pediu o poder de ressucitar os entes ja falecidos.\n");
    printf("Entao a Morte apanhou uma pedra da margem do rio e a entregou a ele.\n");
    printf("Finalmente, a Morte perguntou ao terceiro irmao, um homem humilde.\n");
    printf("Ele pediu algo que o permiti-se sair daquele lugar, sem ser seguido pela morte.\n");
    printf("E a Morte de ma vontade, lhe entregou a sua propria capa da invisibilidade.\n");
    printf("O primeiro irmao, foi para uma aldeia distantes, onde com a varinha de salbugueiro na mao, assacinou outro bruxo, \n");
    printf("que nao teve nem a oportunidade de lutar.\n");
    printf("Tomado pelo poder que a Varinha das varinhas havia lhe dado, ele seguiu pra uma estalagem, onde se gabou por sua invensibilidade.\n");
    printf("Mas naquela noite, um outro bruxo roubou a varinha e por segurança, cortou a garganta do mais velho dos irmaos.\n");
    printf("E assim a morte levou o primeiro irmao.\n");
    printf("Enquanto isso, o segundo irmao viajou para casa, onde pegou a pedra e a virou tres vezes na mao.");
    printf("Para sua alegria, a moca que um dia desejara desposar antes da sua morte precoce, apareceu na sua frente.\n");
    printf("Com tudo, ela estava triste e fria. Ela nao pertencia mais ao mundo dos mortais.\n");
    printf("Enlouquecido pelo desejo, o segundo irmao se matou para unir-se a ela.\n");
    printf("Assim a morte levou o segundo irmao.\n");
    printf("Ja o terceiro irmao, a morte o procurou por muitos anos, mas jamais conseguiu encontra-lo.\n");
    printf("Somente quando atinguiu uma idade mais avançada, foi que o irmao mais novo, despiu a capa da invisibilidade e a deu para o seu filho.\n");
    printf("Ele acolheu a morte como uma velha amiga e a acompanhou de bom grado.\n");
    printf("E como iguais, partiram desta vida.\n");
    printf("Este e o conto das reliquias da morte.\n");
    printf("Aquele que tem as tres reliquias, se torna o senhor da morte.\n");
    printf("Se voce está vendo este texto, é pq vc ganhou o jogo.");
    Vencedor(name);
}

void hulf(char name[]){
    printf("Parabéns, sir %s, voce é um Lufano\n", name);
    printf("Casa de homens e mulher Leais.\n");
    printf("La certamente conquistara muitos amigos leais e bons.\n");
    printf("Seja bem vindo a Hogwarts.\n");
    printf("Fim de jogo");
}

void inicio(char name[]){

	//O primeiro obstaculo está a sua frente e ele deve fazer uma escolha.
    printf("Depois de muito caminhar, chegastes em um ponto em que a estrada esta cortada por um rio com uma forte correnteza.\n");
    printf(" E pelos lados esta uma densa floresta com fama de ter muitos ladroes e animais perigosos.\n");
    printf("My lord %s, o que desejas fazer?\n", name);
	opcoes(name);
}

void Ladrao(char name[]){
	 // Essas vetores, são proporcionalmene na ordem dos if/else's.
    int resposta[2];

    printf("Um ladrão pulou na sua frente e anunciou um assalto\n");
    printf("Voce pode lutar ou fugir\n.");
    printf("O que voce vai fazer?\n");
    system("color 34");
    printf("1 - Vou lutar como um verdadeiro Grifinório e honrar o nome e a fama de minha casa. E lutarei justa e dignamete.\n")
    printf("2 - Como um bom sonserino, vou esmagar esse verme. Como ele ousa fazer isso com um\n bruxo sangue puro como eu?\n");
    printf("3 - Sou Corvino e por isso devo fazer o mais correto e sabio.\n\t Vou entregar o que o ladrão quer e vou deixar isso para lá.\n\t Pois se eu resistir poderei ser morto.");
    scanf("%d",&resposta[0]);

    /*Aqui o player lutar com espada, se o ladrão se mostrar um trouxa(Não Bruxo) ou com a varinha, caso ele seja um bruxo.
    Esse if, corresponde a opção "1", que foi dada pelo player, anteriormente.*/
    if(resposta[0]==1){
        //Nesta formula, o ladrão será escolhido aleatóriamente pela maquina, se ele é um trouxa  ou se ele é um bruxo.
    	srand((unsigned)time(NULL));
    	resposta[1]=1+(rand()%2);
    	system("color ec");
    	//Nesta primeira opcao, o ladrao é um bruxo.
        if(resposta[1]==1){

            printf("Ao ver que o ladrao sacou uma farinha, voce tambem sacou a sua.\n");
            printf("E comecou a duelar com ele.\n");
            printf("Escolha um feitico:\n");
            duelos(name);
        }

        // Nesta segunda opção, o ladrão é um trouxa
		else if(resposta[1]==2){
        	printf("O ladrao era um trouxa e por isso desembanhou a sua espada.\n");
            printf("Ao ver que não era justo duelar com ele como bruxo, voces tambem desembanhou a sua espadas e\n");
            printf("comecou um duelo de espadas com ele.\n");
            resposta[2]=1+(rand()%3);

            /*Neste caso, era uma emboscada e o ladrão não estava sozinho.
            Então os comparças dele aparencem e ajuda o ladrao a o player.*/
            if(resposta[2]==1){
                printf("O ladrao nao estava sozinho, era uma emboscada.\n");
                printf("Agora voce esta em menor numero.\n");
                printf("Mas voce ainda nao acha justo sacar a sua varinha.\n");
                printf("Pena que os ladroes nao teram a mesma compaixao que voce.\n");
                printf("Te roubaram e depois te mataram.\n");
                go(name);
            }

            //Já aqui, o ladrão mata o player
            else if(resposta[2]==2){
                printf("Por incrivel que pareca o ladrao era um exelente espadachin.\n");
                printf("Ele conseguiu derrotar-te e roubar-te.\n");
                printf("Para ter certeza que voce nao iria atras dele, ele resolveu matar-te.");
                go(name);
            }

            //Neste caso está é a unica maneira o plaer sair vivo.
            else{
                printf("Voce conseguiu vencer esse desafio. Continue.\n\n");
                florestafim(name);
            }
        }
    }

    /*Neste caso, o player, não deve se importar se o ladrão é um trouxa ou não. Pois os Sonserinos, não se importam com isso,
    por acreditarem que são superiores aos trouxas.*/
    else if(resposta[0]==2){
        system("color 8a");
        //Neste momento, a maquina decide se o ladrão será um trouxa ou um bruxo.*/
    	resposta[1]=1+(rand()%2);
        //Caso o ladrão seja um bruxo.
        if(resposta[1]==1){
            printf("Ao ver que o ladrao sacou uma farinha, voce e seus irmaos tambem sacaram a de voces.\n");
            printf("E comecaram a duelar com ele.\n");
            printf("Escolha um feitico:\n");
            duelos(name);
        }
        //Agora caso o ladrão seja um trouxa
        else{
        printf("O ladrao era um trouxa e por isso desembanhou a sua espada.\n");
        printf("Mas logo voce pensou, dane-se este verme, quem mandou ele se meter com seres superiores a ele.\n");
        printf("E sem nem ao menos dar a oportunidade dele se denfender, voce o tranficurouem em uma lema como punicao.\n");
        printf("Pegou um puco de sal que traziam em sua bolsa, e fez um circulo em volta dele.\n");
        printf("Se foi justou ou nao, nao cabe a mim decidir. O que sei eh que voces venceram o duelo.\n");
        printf("Continuem a jornada.\n\n");
        florestafim(name);
    }
    }

   	    //Neste caso, o player não reage.
    else if(resposta[0]==3){
            resposta[1]=1+(rand()%3);

            //O ladrão se aproveita da submissão do player e o mata.
            if(resposta[1]==1){
                printf("O ladrao era um bruxo.\n");
                printf("Quando viu a sua varinha, ele quis rouba-la tambem e por fim, antes que voce pude-se reagir,\n");
                printf(" ele te esfaqueou e te matou.\n");
                go(name);
            }

            //O ladrão dá uma de Grimm (Referencia a outra série).
            else if(resposta[1]==2){
                printf("O ladrao era um trouxa, mas ele sabia sobre os bruxos.\n");
                printf("Entao quando ele viu a varinha ele matou voce, aintes que pudesse reagir.\n");
                printf("Por medo do que voces poderiam fazer com ele.\n Tente entender, para ele voce e um monstro.\n");
                go(name);
            }

            //O ladrão se acovara ao ver que os irmãos eram bruxos.
            else{
                printf("O ladrao era um trouxa, mas ele sabia sobre os bruxos.\n");
                printf("Entao quando ele viu a varinha, se amedrontou e suplicando por perdao, \n");
                printf("devolveu os seus pertences e deixou que voces passassem,\n\n");
                printf("Implorando por piedade.\n");
                printf("continue.\n");
                florestafim(name);
            }
    	}

    else{
    		Ladrao(name);
    }
}

void maldicoes(char name[]){
    printf("Voces usaram maldicoes imperdoaveis e por este motivo, o Ministerio da Magia impede que voces prossigam\n");
    go(name);
}

void Morte(char name[]){
	    int reliquia;

    printf("Voce criou uma ponte, mas antes que pudesse atravessa-la,\n");
    printf("Uma figura encapuzada apareceu na sua frente, impedindo que voce atravesse.\n\n");
    printf("Eh a morte.\n");
    printf("Ela esta furiosa porque o comum, seria voces tentar atravessar o rio nadando e se afogar.\n");
    printf("Mas ela resolveu parabenizar-lo pela vossa astucia.");
    printf("Morte:\n");
    system("color 15");
    printf("Meu jovem, um presentes vou lhe dar, pela vossa astúcia.\n");
    printf("Escolha com sabedoria.\n");
    printf("Voce pode escolher entre:\n");
    printf("1 - A varinha mais poderosa de todas.\n");
    printf("Ela te dará um poder tão grandioso, que se usar com sabedoria, poderá se tornar o maior bruxo de todoso os tempos.\n");
    printf("\n\n2 - Uma pedra que tem o poder de ressucitar os mortos. Com ela, voce poderá reviver quem voce desejar.\n");
    printf("\n\n3 - Uma capa de invisibilidade. Esta capa, te dara o poder de se esconder de qualquer um, inclusive de mim.\n");
    printf("\n O que voce desejara?\n");
    scanf("%d", &reliquia);


    if(reliquia==1){
        Varinha(name);
    }

    else if(reliquia==2){
        Pedra(name);
    }

    else{
        Capa(name);
    }
}

void nadar(char name[]){
	int x;
    system("color 03");
	srand((unsigned)time(NULL));
	x=1+(rand()%3);
	//O player é atacado por cereanos
	if(x==1){
		printf("Voce foi atacado por cereanos, e se afogou\n");
        //Cereanos tambem são conhecidos como trirons e sereias.
        go(name);
	}

   //Neste caso o player é morto por grindylows e morre.
	else if(x==2){
		printf("Voce foi cercado por grindylows e eles te puxaram para o fundo\n");
        // Grindylows, são seres aquaticos que parecem nenens da cintura para cima e pouvos da cintura para baixo.
        go(name);
	}

	//Aqui, não é nenhuma criatura que mata o player, mas sim a própria correnteza do rio.
	else{
		printf("A correnteza estava muito forte, e voce foi tragado por ela.\n");
        printf("Infelizmente voce bateu a cabeca em algumas pedras e morreu\n");
        printf("Olhando pelo lado bom, voce alimentou algumas criaturas que nadavam por ali.\n");
        printf("kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk\n");
        go(name);
	}
}

void opcoes(char name[]){
    int acao;
    system("color 07");
    rio(name);
    scanf("%d", &acao);

    if(acao==1){
        nadar(name);
    }

    else if(acao==2){
        floresta(name);
    }

    else if(acao==3){
        printf("Gryffindor se envergonha de voce\n");
        printf("%s, covarde. voce nao merece ser um bruxo.\n", name);
        printf("Voce envergonou a comunidade bruxa com a sua covardia,\n");
        printf("Por isso, o ministerio da magia, confiscou sua varinha.\n");
		printf("Sua varinha foi quebrada e voce não pode mais fazer feiticos.\n");
		printf("Parabens, agora voce eh tao util para o mundo bruxo, quanto um trouxa.\n");
        go(name);
    }

    //Neste else, ele cria a ponte e por isso ele se encontrará com a morte.
    else if(acao==4){
        Morte(name);
    }

    else{
    	printf("Opcao invalida.\n");
    	printf("Tente de novo\n");
    	opcoes(name);
    }
}

void parabens(char name[]){
    printf("Parabens pela decisao, prossiga\n\n");
    florestafim(name);
}

void Pedra(char name[]){
    int n;
    system("color 40");
    printf("A Morte entao pegou uma pedra do rio, lhe entregou e permitiu que voce parti-se dali.\n");
    printf("Mais rapido que pode, voce correu dali.\n");
    printf("Quando voce chegou em casa, girou a pedra tres vezes em sua mao.");
    printf("E para a sua surpresa, a jovem que um dia desejara desposar, mas que havia morrido recentemente,\n");
    printf("apareceu na sua frente, mas ela estava fria e triste. Pois nao pertencia mais ao mundo dos vivos.\n");
    system("color 00");
    for(n=0;n<101;n++){
        printf("\n");
    }
    system("color 40");
    printf("Tomado por uma forte angustia, e pelo desejo de se unir a sua amada, voce se enfocou.\n");
    printf("E assim, a Morte te enganou e te levou.\n");
    go(name);
}

void Peverel(){
    system("color 13");
printf("                            **\n");
printf("                           ****\n");
printf("                          ******\n");
printf("                         ** ** **\n");
printf("                        **  **  **\n");
printf("                       **   **   **\n");
printf("                      **    **    **\n");
printf("                     **     **     **\n");
printf("                    **    ******    **\n");
printf("                   **  ************  **\n");
printf("                  **  ***   **   ***  **\n");
printf("                 **  ***    **    ***  **\n");
printf("                **  ***     **     ***  **\n");
printf("               **   ***     **     ***   **\n");
printf("              **    ***     **     ***    **\n");
printf("             **      ***    **    ***      **\n");
printf("            **        ***   **   ***        **\n");
printf("           **          ************          **\n");
printf("          **            **********            **\n");
printf("         **                 **                 **\n");
printf("        ******************************************\n");
printf("       ********************************************\n");
}

void rav(char name[]){
    printf("Parabéns, Sir %s voce eh um Corvino\n", name);
    printf("Casa de homens e mulher Inteligentes e sabio.\n");
    printf("La talvez voce se destaque como um grande e poderoso bruxo.\n");
    go(name);
}

void rio(char name[]){
	//A opcoes de quando ele se deparar com o rio.
    printf("\n1 - Atravessar o rio nadando.\n");
    printf("2 - Entrar na floresta e achar um novo caminho.\n");
    printf("3 - Dar a meia - volta e desitir.\n");
    printf("4 - Pegar sua varinha e com seus poderes criar uma ponte para atravesar o rio.\n");

}

void sly(char name[]){
    printf("Parabéns, Sir %s voce eh um Sonserino\n", name);
    printf("Casa de homens e mulher fortes e astutos.\n");
    printf("La talvez fara grandes e poderosos amigo.\n");
    go(name);
}

void Varinha(char name[]){
	int acao;
	system("color 72");
    printf("A Morte lhe deu uma varinha da arvore de sabulgueiro.\n");
    printf("E permitiu que voce passa-se.\n");
    printf("Saindo dali, o mais rapido que podia.\n");
    printf("Voce foi para uma pequena aldeia e la se encontrou com um outro bruxo,\n");
    printf(" o qual voces tinham uma desavença antiga.");
    printf("Voce tem uma varinha poderosa e invencivel.\n");
    printf("O que deseja fazer?\n");
    printf("\n\n1 - Matar-lo.\n");
    printf("2 - Deixar para la\n");
    scanf("%d", &acao);


        if(acao==1){
            system("color 04");
            printf("Voce o matou sem nem da-lo a oportunidade de se defender.\n");
            printf("Depois foi para uma estalaria, e la se gabou por sua invensibilidade.\n");
            printf("Ao cair da noite, um outro bruxo, entrou em seu quarto e roubou a sua varinha.\n");
            printf("Para garantir que voce nao fosse atras, ele te matou.\n");
            printf("E assim, a Morte te enganou e te levou.\n");
            go(name);
        }

        else if(acao==2){
            printf("Covarde.\n");
            printf("Pense melhor.\n");
            Varinha(name);
        }

        else{
        	printf("Opcao invalida, tente de novo");
        }

}

void Vencedor(char name[]){
    int hogwarts;
    system("color 8c");
    printf(" *******          ****             *******             ****             *******    **********    *****          ***      *********\n");
    printf(" ********        ******            ********           ******            ********   **********    ******         ***     ************\n");
    printf(" ***   ***      **    **           ***   ***         **    **           ***   ***  ***           *** ***        ***    ***       ***\n");
    printf(" ***   ***     **      **          ***   ***        **      **          ***   ***  ***           ***  ***       ***   ***\n");
    printf(" *********    ************         *********       ************         *******    *******       ***   ***      ***  **************\n");
    printf(" *******     **************        *******        **************        *******    *******       ***    ***     ***   **************\n");
    printf(" ***        **            **       *** ***       **            **       ***   ***  ***           ***     ***    ***             ***\n");
    printf(" ***       **              **      ***  ***     **              **      ***    *** ***           ***      ***   ***   ***      ***\n");
    printf(" ***      **                **     ***   ***   **                **     ***   ***  **********    ***       ***  ***   ***********\n");
    printf(" ***     **                  **    ***    *** **                  **    ********   **********    ***        *******    *********\n");

    printf("Deseja fazer o teste, para saber de qual casa voce seria?\n");
    printf("1 - Sim\n");
    printf("2 - Nao\n");
    scanf("%d", &hogwarts);

    if(hogwarts==1){
        Chapeu(name);
    }
    else if(hogwarts==2){
        printf("Game Over.");
    }

    else{
        printf("Opcao invalida, tente novamente.\n");
        Vencedor(name);
    }
}
