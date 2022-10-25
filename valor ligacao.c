/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
main()
{
    int H,M,S,HI,MI,SI,HF,MF,SF,A,B;

    do{
        do{
            printf("DIGITE A HORA INICIO DA LIGACAO: ");
            scanf("%d",&HI);
            if(HI<0 || HI>24)
            {
                printf("DIGITE O VALOR DE HORAS >= 0\n");
            }
        }while(HI<0 || HI>24);

        do{
            printf("DIGITE O MINUTO DE INICIO DA LIGACAO: ");
            scanf("%d",&MI);
            if(MI<0 || MI>59)
            {
                printf("DIGITE O VALOR DE MINUTOS >= 0 OU <= 59\n");
            }
        }while(MI<0 || MI>59);

        do{
            printf("DIGITE O SEGUNDO DE INICIO DA LIGACAO: ");
            scanf("%d",&SI);
            if(SI<0 || SI>59)
            {
                printf("DIGITE O VALOR DE SEGUNDOS >=0 OU <=59\n");
            }
        }while(SI<0 || SI>59);

        HI = HI*3600;   /*HORAS PARA SEGUNDOS*/
        MI = MI*60;     /*MINUTOS PARA SEGUNDOS*/
        A = HI+MI+SI;   /*CONVERTE TUDO PARA SEGUNDOS*/

        do{
            printf("DIGITE A HORA FIM DA LIGACAO: ");
            scanf("%d",&HF);
            if(HF<0 || HF>24)
            {
                printf("DIGITE O VALOR DE HORAS >= 0\n");
            }
        }while(HF<0 || HF>24);

        do{
            printf("DIGITE O MINUTO DE FIM DA LIGACAO: ");
            scanf("%d",&MF);
            if(MF<0 || MF>59)
            {
                printf("DIGITE O VALOR DE MINUTOS >= 0 OU <= 59\n");
            }
        }while(MF<0 || MF>59);

        do{
            printf("DIGITE O SEGUNDO DE FIM DA LIGACAO: ");
            scanf("%d",&SF);
            if(SF<0 || SF>59)
            {
                printf("DIGITE O VALOR DE SEGUNDOS >=0 OU <=59\n");
            }
        }while(SF<0 || SF>59);

        HF = HF*3600;
        MF = MF*60;
        B = HF+MF+SF;

            if(A>B)
            {
                printf("DIGITE APENAS HORARIOS DE LIGACOES FEITOS NO MESMO DIA\n");
            }
                else
                {
                    A = B-A;
                    H = A/3600;     /*PROCURA QUANTAS HORAS TEVE*/
                    S = A%3600;     /*PEGA O RESTO DE SEGUNDOS PARA USAR NO CALCULO DE MINUTOS*/
                    M = S/60;       /*DIVIDE OS SEGUNDOS POR 60 PARA ACHAR OS MINUTOS*/
                    S = S-(M*60);

                    if(H==0)
                    {
                        printf("A LIGACAO TEVE DURACAO DE %dmin %dseg\n",M,S);
                    }
                        else if(H==1)
                        {
                            printf("A LIGACAO TEVE DURACAO DE %dhr %dmin %dseg\n",H,M,S);
                        }
                            else
                            {
                                printf("A LIGACAO TEVE DURACAO DE %dhrs %dmin %dseg\n",H,M,S);
                            }
                }
    }while(A>B);
}

