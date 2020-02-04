/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package core.elementos;

import java.util.ArrayList;

/**
 *
 * @author TI1-13
 */
public class Bebida {
    private String nomeBebida;
    private String descricao;
    private ArrayList<Propriedade> propriedades;

    public Bebida(String nomeBebida, String descricao, ArrayList<Propriedade> propriedades) {
        this.nomeBebida = nomeBebida;
        this.descricao = descricao;
        this.propriedades = propriedades;
    }

    public String getNomeBebida() {
        return nomeBebida;
    }

    public void setNomeBebida(String nomeBebida) {
        this.nomeBebida = nomeBebida;
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

    @Override
    public String toString() {
        String bebida="";
        
        bebida+="Nome: ";
        bebida+=nomeBebida;
        bebida+="\n";
        bebida+="Descrição: ";
        bebida+=descricao;
        bebida+="\n";
        bebida+="Propriedades: ";
        bebida+=propriedades;
        bebida+="\n";
        
        return bebida;         
    }
    
    
    
}
