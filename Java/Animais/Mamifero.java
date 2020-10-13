package Animais;

public class Mamifero extends Animal{
    public String pelos;
    public void Mamar(){};
    
    @Override
    public void Locomover(){
        System.out.println("Mamifero Locomove");
    }
}
