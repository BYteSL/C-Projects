package core.elementos;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author TI1-13
 */
public class TipoPrato{
    private final String TIPO;

    public TipoPrato(String tipo) {
        this.TIPO = tipo;  
    }

    @Override
    public String toString() {
        String tipoPrato="";
        tipoPrato+=TIPO;
        return tipoPrato;
    }
    
    
}
