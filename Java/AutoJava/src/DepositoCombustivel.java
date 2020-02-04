/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author TI1-13
 */
public class DepositoCombustivel extends Deposito {
   private String nomeLiquido;
   
   public String getnomeLiquido() {
        return nomeLiquido;
    }

    public void setnomeLiquido(String nomeLiquido) {
        this.nomeLiquido = nomeLiquido;
    }

    @Override
    public String toString() {
        return "DepositoCombustivel{" + "nomeLiquido=" + nomeLiquido + '}';
    }
    
}
