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
public class Complemento {
    private String nomeComplemento;
    private String descricao;
    private ArrayList<Propriedade> propriedades;

    public Complemento(String nomeComplento, String descricao, ArrayList<Propriedade> propriedades) {
        this.nomeComplemento = nomeComplento;
        this.descricao = descricao;
        this.propriedades = propriedades;
    }

    public String getNomeComplento() {
        return nomeComplemento;
    }

    public void setNomeComplento(String nomeComplento) {
        this.nomeComplemento = nomeComplento;
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
        String complemento="";
        
        complemento+="Nome:";
        complemento+=nomeComplemento;
        complemento+="\n";
        complemento+="Descrição:";
        complemento+=descricao;
        complemento+="\n";
        complemento+="Propriedades:";
        complemento+="\n";
        complemento+=propriedades;
        complemento+="\n";
        
        return complemento;
    }
    
    
    
}
