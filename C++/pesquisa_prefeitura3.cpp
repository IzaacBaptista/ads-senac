main()

{
/*
  A prefeitura de uma cidade fez uma pesquisa entre seus habitantes,
  coletando dados sobre salário e o número de filhos. A prefeitura deseja saber:
  a) a média do salário da população;
  b) a média do número de filhos;
  c) o maior salário;
  d) a percentagem de pessoas com salários até R$240,00
*/

      int pop, filhos, total_filhos=0, i, y=1;
      float sal, total_sal=0, media_sal, media_filhos, maior_sal=0, perc_sal;

      printf ("Qual a populacao da cidade..: ");
      scanf ("%d", &pop);

      for(i=1;i<=pop;i++){
      printf ("\nQual o seu salario.........: R$ ");
      scanf ("%f", &sal);
      printf ("\nQual a quantia de filhos...: ");
      scanf ("%d", &filhos);

      /* Soma dos salarios */
      total_sal = sal + total_sal;
      /* Soma dos filhos */
      total_filhos = total_filhos + filhos;
                /* Maior salario */
                if(maior_sal < sal){
                maior_sal = sal;
                }
                /* Percentagem até R$ 240,00 */
                if(sal <= 240){
                perc_sal = (y * 100) / pop;
                y++;
                }
      }
      /* Media dos salarios */
      media_sal = total_sal / pop;
      /* Media dos filhos */
      media_filhos = total_filhos / pop;

      printf ("\nA media do salario da populacao eh R$ %.2f", media_sal);
      printf ("\nA media do numero dos filhos eh %.1f", media_filhos);
      printf ("\nO maior salario eh R$ %.2f", maior_sal);
      printf ("\nA percentagem das pessoas com salarios ate R$ 240,00 eh %.1f%% ", perc_sal);

      getch();
}
