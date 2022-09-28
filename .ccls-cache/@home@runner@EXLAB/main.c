#include <stdio.h>

int main(void) {
  int escolha,idade = -10,ano = 0,acaba = 0;
  do{
  printf("digite 1 para prog 1 e 2 para prog 2 e 3 para prog 3 ");
  scanf("%d",&escolha);
  if(escolha == 1){
    acaba++;
    printf("digite idade: ");
    scanf("%d",&idade);
    ano = 2022 - idade;
    printf("teu ano de nascimento é : %d\n",ano);
  }
  else if(escolha == 2){
    acaba++;
    int n3,fibo,n0=0,n1 = 1;
    if(idade == -10){
    printf("idade nao foi digitada");
      return 0;
    }
    n3 = idade;
    if(n3 >= 0){
      printf("%d\n",n0);
    }
    if(n3 >= 1){
      printf("%d\n",n1);
    }
    for(int i =2;i<n3;i++){
      fibo = n0 + n1;
      n0 = n1;
      n1 = fibo;
      
      printf("%d\n",fibo);
      if(fibo > n3){ 
        return 0;
      } 
    }
  }
    else if(escolha == 3){
      int positivo,cn;
      printf("digie um numero inteiro positivo");
      scanf("%d",&positivo);
      for(int u = 1; u <= positivo; u++){
        if(positivo % u == 0){
          cn++;
        }
        
      }
      if(cn == 2) printf("é primo\n");
      else printf("n é primo\n");
    }
    }while(acaba<2);
  return 0;
}