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
public class Entrada {
    
    private String nome;
    private String descricao;
    private TipoEntrada tipo;
    private ArrayList<Propriedade> propriedades;

    public Entrada(String nome, String descricao, TipoEntrada tipo, ArrayList<Propriedade> propriedades) {
        this.nome = nome;
        this.descricao = descricao;
        this.tipo = tipo;
        this.propriedades = propriedades;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getDescricao() {
        return descricao;
    }

    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }

    public TipoEntrada getTipo() {
        return tipo;
    }

    public void setTipo(TipoEntrada tipo) {
        this.tipo = tipo;
    }

    public ArrayList<Propriedade> getPropriedades() {
        return propriedades;
    }

    public void setPropriedades(ArrayList<Propriedade> propriedades) {
        this.propriedades = propriedades;
    }

    @Override
    public String toString() {
        return "Entrada{" + "nome=" + nome + ", descricao=" + descricao + ", tipo=" + tipo + ", propriedades=" + propriedades + '}';
    }
    
    
    
}
