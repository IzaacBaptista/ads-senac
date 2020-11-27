package ExerciciosExtras.exercicios.arrayecollections;

import java.util.ArrayDeque;
import java.util.Deque;

public class StackCollection {
    public static void main(String[] args) {
        Deque<String> stack = new ArrayDeque<>();

        stack.add("Primeira entrada"); // Retorna true/false
        stack.push("Segunda entrada"); // Adiciona e trata exceção
        stack.push("Terceira entrada"); // Adiciona e trata exceção

        // Retorna Nulo com fila vazia
        System.out.println(stack.peek());
        System.out.println(stack.peek());
        System.out.println(stack.peek());

        // Retorna Exceção com fila vazia
        System.out.println(stack.element());
        System.out.println(stack.element());
        System.out.println(stack.element());

        // Verifica tamanho
        System.out.println(stack.size());

        // Retorna e remove da fila
        System.out.println(stack.poll()); // Nulo com fila vazia
        System.out.println(stack.remove()); // Exceção com fila vazia
        System.out.println(stack.pop()); // Exceção com fila vazia

        // Verifica se está vazio
        System.out.println(stack.isEmpty());

        // Limpa a fila
        stack.clear();
    }
}