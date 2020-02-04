/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author TI1-13
 */
public class DepositoOleo extends Deposito {
    
   private String nomeLiquido;
   private int estadoOleo;
   
   

    public int getEstadoOleo() {
        return estadoOleo;
    }

    public void setEstadoOleo(int estadoOleo) {
        this.estadoOleo = estadoOleo;
    }

    @Override
    public String toString() {
        return "DepositoOleo{" + "nomeLiquido=" + nomeLiquido + ", estadoOleo=" + estadoOleo + '}';
    }
   
   
    
}
