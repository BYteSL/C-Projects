/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package core.elementos;

/**
 *
 * @author TI1-13
 */
public class TipoEntrada {
    private String tipo;

    public TipoEntrada(String tipo) {
        this.tipo = tipo;
    }

    public String getTipo() {
        return tipo;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    @Override
    public String toString() {
        String tipoEntrada="";
        tipoEntrada+=tipo;
        return tipoEntrada;
    }
    
    
    
    
}
