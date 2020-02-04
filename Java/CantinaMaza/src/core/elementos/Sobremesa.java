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
public class Sobremesa {
    private String nomeSobremesa;
    private String descricao;
    private ArrayList<Propriedade> propriedades;
    
    

    public String getNomeSobremesa() {
        return nomeSobremesa;
    }

    public void setNomeSobremesa(String nomeSobremesa) {
        this.nomeSobremesa = nomeSobremesa;
    }

    public String getDescricao() {
        return descricao;
    }

    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }

    public ArrayList<Propriedade> getPropriedades() {
        return propriedades;
    }

    public void setPropriedades(ArrayList<Propriedade> propriedades) {
        this.propriedades = propriedades;
    }

    public Sobremesa(String nomeSobremesa, String descricao, ArrayList<Propriedade> propriedades) {
        this.nomeSobremesa = nomeSobremesa;
        this.descricao = descricao;
        this.propriedades = propriedades;
    }
       
    @Override
    public String toString() {
        String sobremesa="";
        
        sobremesa+="Nome: ";
        sobremesa+=getNomeSobremesa();
        sobremesa+="\n";
        sobremesa+="Descrição: ";
        sobremesa+=getDescricao();
        sobremesa+="\n";
        sobremesa+="Propriedades:";
        sobremesa+=getPropriedades();
        sobremesa+="\n";
        return sobremesa;
    }

   
    
    
}
