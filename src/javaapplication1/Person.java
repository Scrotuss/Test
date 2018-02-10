package javaapplication1;

/**
 *
 * @author Roxanji
 */
public class Person {

    private String nome;
    private int eta;

    public Person(String nome, int eta) {
        this.nome = nome;
        this.eta = eta;
    }

    void setName(String newName) {
        nome = newName;
    }
    
    String getName(){
        return nome;
    }
            
    
}
