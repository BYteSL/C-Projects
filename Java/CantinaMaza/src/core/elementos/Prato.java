package core.elementos;


import java.util.ArrayList;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Utilizador
 */
public class Prato extends Limitavel {
    private TipoPrato tipoPrato; // Carne | Opção | Peixe | Dieta
    private String nomePrato; // O nome do prato
    private String descricaoPrato; // Pormenores do Prato
    private ArrayList<Propriedade> propriedades; // Numero de calorias em Kcal
    private int codigo;

    public Prato(TipoPrato tipoPrato, String nomePrato, int codigo) {
        this.tipoPrato = tipoPrato;
        this.nomePrato = nomePrato;
        this.codigo = codigo;
    }


    
    public void adicionarPropriedade(Propriedade p){
        propriedades.add(p);
    }
    
    public TipoPrato getTipoPrato() {
        return tipoPrato;
    }

    public void setTipoPrato(TipoPrato tipoPrato) {
        this.tipoPrato = tipoPrato;
    }
    
     public String getNomePrato() {
        return nomePrato;
    }

    public void setNomePrato(String nomePrato) {
        this.nomePrato = nomePrato;
    }
    
    public String getDescricaoPrato() {
        return descricaoPrato;
    }

    public void setDescricaoPrato(String descricaoPrato) {
        this.descricaoPrato = descricaoPrato;
    }
    
    public ArrayList<Propriedade> getPropriedades() {
        return propriedades;
    }

    public void setPropriedades(ArrayList<Propriedade> propriedades) {
        this.propriedades = propriedades;
    }

    public int getCodigo() {
        return codigo;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }

   

    public Prato(String tipoPrato, String nomePrato, String descricaoPrato, double calorias) {
        this.nomePrato = nomePrato;
        this.descricaoPrato = descricaoPrato;
    }

    @Override
    public String toString() {
        String prato="";
                
               prato+="Tipo: ";
               prato+= getTipoPrato(); 
               prato+= "\nNome: ";
               prato+= getNomePrato();
               prato+="\nPropriedades:";
               prato+=getPropriedades();
               prato+="\n";
               return prato;
                
    }
}
