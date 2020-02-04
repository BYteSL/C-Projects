/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author geral
 */
public class Ponto3D extends Ponto2D {
    private int z = 0;

    public int getZ() {
        return z;
    }
    
    public void moveProfundidade(int val) throws MovimentoInvalidoException, LimitesExcedidosException {
        if( (z + val) < 0){
            throw new MovimentoInvalidoException("Este movimento não é válido.");
        }
        else{
            if((z + val) >100){
                throw new LimitesExcedidosException("Passou dos limites");
            }
            else
                z += val;
        }
            
    }

    @Override
    public String toString() {
        return "Ponto3D{" + super.toString() + "z=" + z + '}';
    }
    
    
    
}
