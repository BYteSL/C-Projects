/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author TI1-13
 */
public class Principal {
    public static void main(String[] args) {
        
        /*
        StringBuffer z = new StringBuffer("Yuri Lemos");
        
        System.out.println(z.insert(4, 500));
        */
        
        Deposito tank1 = new Deposito("Ajervao", 20, 50);
        
        try{
          tank1.trocarLiquido("Pirelli", 10);
        }
        catch(ParametrosForaValorException msg){
            System.out.println(msg.getMessage());
        }
        Porta port1 = new Porta(45, 30, 20, 100, 0, true, true, 0, 100, true, 27, true);
        
        try{
            port1.ajustarAlturaVidro(0);
        }
        catch(ParametrosForaValorException erro){
            System.out.println(erro.getMessage());
        }
        /*
        try{
            port1.trancarPorta(true);
        }
        catch(MovimentosInvalidosException erro){
            System.out.println(erro.getMessage());
        }*/
        System.out.println(port1.toString());
        
        
        
        
   }
}
