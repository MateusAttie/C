void ord_insert(int *v, int tam)
{//recebe o vetor v, e tamanho do vetor 
int aux;//variavel que guardara o valor  da posição do laço

                   for(i=1;i<tam;i++)//controla quantas vezes o vetor sera verificado
                   {
                                                aux=v[i];
                                                for(j=i;(j>0)&& (aux < v[j-1]);j--)
                                                                v[j]=v[j-1];
                                                v[j]=aux;                
                   }
     
}
