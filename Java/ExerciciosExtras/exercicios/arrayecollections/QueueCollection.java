package ExerciciosExtras.exercicios.arrayecollections;

import java.util.LinkedList;
import java.util.Queue;

public class QueueCollection {
    public static void main(String[] args) {
        Queue<String> queue = new LinkedList<>();

        queue.add("Primeira entrada"); // Adiciona e trata exceção
        queue.offer("Segunda entrada"); // Retorna true/false

        System.out.println(queue);

        // Retorna Nulo com fila vazia
        System.out.println(queue.peek());
        System.out.println(queue.peek());
        System.out.println(queue.peek());

        // Retorna Exceção com fila vazia
        System.out.println(queue.element());
        System.out.println(queue.element());
        System.out.println(queue.element());

        // Verifica tamanho
        System.out.println(queue.size());

        // Retorna e remove da fila
        System.out.println(queue.poll()); // Nulo com fila vazia
        System.out.println(queue.remove()); // Exceção com fila vazia

        // Verifica se está vazio
        System.out.println(queue.isEmpty());

        // Limpa a fila
        queue.clear();
    }
}