/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author geral
 */
public class TestPonto {
    public static void main(String[] args) {
        Ponto2D pt2 = new Ponto2D();
        
        Ponto3D pt3 = new Ponto3D();
        pt3 = null;
        
        try{
            pt3.moveProfundidade(20);
        }
        catch(MovimentoInvalidoException ex){
            System.out.println(ex.getMessage());
        }
        catch(LimitesExcedidosException ex1){
            System.out.println(ex1.getMessage());
        }
        catch(Exception e){
            System.out.println(e.getMessage());
        }
        
//        
//        System.out.println(pt2.toString());
//        System.out.println(pt3.toString());
    }
}
