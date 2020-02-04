/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package core.dados;

import core.elementos.Bebida;
import core.elementos.Complemento;
import core.elementos.Ementa;
import core.elementos.Entrada;
import core.elementos.Prato;
import core.elementos.Sobremesa;
import core.exceptions.LimiteAtingidoException;
import java.util.ArrayList;

/**
 *
 * @author TI1-13
 */
public class Reserva {
    private Ementa ementa;
    private ArrayList<Prato> pratos;
    private ArrayList<Sobremesa> sobremesas;
    private ArrayList<Entrada> entradas;
    private ArrayList<Complemento> complementos;
    private ArrayList<Bebida> bebidas;

    

    public int getNumPratos(Prato prato){
        int res = 0;
        
        for(Prato p : pratos){
            if(p.getCodigo() == prato.getCodigo()){
                ++res;
            }
        }
        return res;
    }
    
    public void addPrato(Prato p) throws LimiteAtingidoException {
        if(getNumPratos(p) > p.getLimite())
            throw new LimiteAtingidoException("Vai comer merda");
    }
    
    

    public Reserva(ArrayList<Prato> pratos) {
        this.pratos = pratos;
    }
    
    public ArrayList<Prato> getPratos() {
        return pratos;
    }

    public void setPratos(ArrayList<Prato> pratos) {
        this.pratos = pratos;
    }
    
    public ArrayList<Sobremesa> getSobremesas() {
        return sobremesas;
    }

    public void setSobremesas(ArrayList<Sobremesa> sobremesas) {
        this.sobremesas = sobremesas;
    }

    public ArrayList<Entrada> getEntradas() {
        return entradas;
    }

    public void setEntradas(ArrayList<Entrada> entradas) {
        this.entradas = entradas;
    }

    public ArrayList<Complemento> getComplementos() {
        return complementos;
    }

    public void setComplementos(ArrayList<Complemento> complementos) {
        this.complementos = complementos;
    }

    public ArrayList<Bebida> getBebidas() {
        return bebidas;
    }

    public void setBebidas(ArrayList<Bebida> bebidas) {
        this.bebidas = bebidas;
    }

    @Override
    public String toString() {
        return "Reserva{" + "ementa=" + ementa + ", pratos=" + pratos + ", sobremesas=" + sobremesas + ", entradas=" + entradas + ", complementos=" + complementos + ", bebidas=" + bebidas + '}';
    }
    
    
    
}
