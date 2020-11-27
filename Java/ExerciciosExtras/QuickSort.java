package ExerciciosExtras;

/**
 * Encapsulates logic for the quicksort algorithm.
 * Encapsula a lógica do algorítimo quicksort
 */
public class QuickSort {
    /**
     * Sort an array by using the quicksort algorithm. Must not be null.
     * Ordena o array usando o algoritmo quicksort. Não deve ser nulo.
     * @param array The array to be sorted. O array a ser ordenado
     */
    public static final void quicksort(Integer array[]) throws Exception {
        if(array == null) {
            throw new Exception();
        }
        quicksort(array, 0, array.length - 1);
    }

    /**
     * Sort an array by using the quicksort algorithm.
     * Ordena o array usando o algoritmo quicksort.
     * @param array The array to be sorted. O array a ser ordenado.
     * @param begin The start of the region to sort. O ínicio da região de ordenação.
     * @param end The end of the region to sort. O término da região de ordenação.
     */
    private static final void quicksort(Integer array[], int begin, int end) {
        if(begin < end) {
            int pivot = partition(array, begin, end);
            quicksort(array, begin, pivot - 1);
            quicksort(array, pivot + 1, end);
        }
    }

    /**
     * Partitions an array by chosing an arbitrary pivot.
     * Particiona o array para escolher um pivô arbitrário
     * @param array The array to be sorted. O array a ser ordenado.
     * @param begin The start of the region to sort. O ínicio da região de ordenação.
     * @param end The end of the region to sort. O término da região de ordenação.
     * @return The position of the pivot. A posição do pivô.
     */
    private static final int partition(Integer array[], int begin, int end) {
        int pivot = array[end];

        int i = begin;
        // Iterates through each item, moving the pivot
        // Repete cada item, movendo o pivô
        for(int j = begin; j < end; j++) {
            if(array[j] < pivot) {
                swap(array, i, j);
                i++;
            }
        }
        swap(array, i, end);
        return i;
    }

    /**
     * Swaps two items in an array.
     * Troca dois itens de um array
     * @param array Source array. Array de origem
     * @param i First index. Primeiro índice
     * @param j Second index. Segundo índice
     */
    private static final void swap(Integer array[], int i, int j) {
        Integer aux = array[i];
        array[i] = array[j];
        array[j] = aux;
    }

    /**
     * Main function.
     * Função principal
     * @param args Command line arguments. Argumentos de linha de comando.
     */
    public static void main(String[] args) {
        Integer array[] = new Integer[] { 2, 8, 5, -60, 42, 51, 100, -6, 19 };
        try {
            quicksort(array);
            for(Integer i: array) {
                System.out.println(i);
            } 
        } catch(Exception e) {
            System.out.println("Deu ruim");
        }
    }
}
