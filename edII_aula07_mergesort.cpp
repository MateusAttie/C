void meregeSort(int *v, int inicio, int fim){//MERGESORT
     int meio = 0;
     if(inicio<fim){
                    meio = floor((inicio+fim)/2);
                    mergeSort(v,inicio,meio);
                    mergeSort(v,meio+1,fim);
                    mergeSort(v,inicio,fim);
                    }
     }
