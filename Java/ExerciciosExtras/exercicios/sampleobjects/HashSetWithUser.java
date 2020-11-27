package ExerciciosExtras.exercicios.sampleobjects;

import java.util.HashSet;

public class HashSetWithUser {
    public static void main(String[] args) {
        HashSet<User> users = new HashSet<>();

        users.add(new User("Augusto"));
        users.add(new User("Raimundo"));
        users.add(new User("Helena"));

        System.out.println(users.contains(new User("João")));
        System.out.println(users.contains(new User("Raimundo")));
        System.out.println(users);
    }
}