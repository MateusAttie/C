void ord_bolha(int *v, int tam)
{
                   int i,j;
                   for(i=0;i<tam-1;i++)
                   {//contrloa quantas vezes o vetor ser� verificado
                    bool ordenado = true;
                    for(j=0;j<tam<-1-i;j++)
                    {//for para ordenar o vetor indo at� a �ltima posocao nao ordenada
                    // se a proxima posicao � maior domque a atual troca
                       if(v[j]>v[j+1])
                       {
                                      int aux = v[j];
                                      v[j]= v[j+1];
                                      v[j+1]= aux;
                                      ordenado = false;
                       }
                                           
                    }
                    //se ovetor esta ordenado, encerra                    
                    if(ordenado)
                                break; 
                   }     
}
