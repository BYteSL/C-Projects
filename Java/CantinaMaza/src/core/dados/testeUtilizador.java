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
import core.elementos.Propriedade;
import core.elementos.Sobremesa;
import core.elementos.TipoEntrada;
import core.elementos.TipoPrato;
import core.exceptions.LimiteAtingidoException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;

/**
 *
 * @author TI1-13
 */
public class testeUtilizador {
    public static void main(String[] args) {
        
        
        
        ArrayList<Propriedade> props = new ArrayList<>();
        props.add(new Propriedade("CALORIAS", 1100.0));
        props.add(new Propriedade("SAL", 10540.0));
        props.add(new Propriedade("GORDURAS SATURADAS", 1010.0));
        props.add(new Propriedade("LIPIDOS", 1040.0));
        props.add(new Propriedade("CARBONO", 1020.0));
        
        ArrayList<Propriedade> props2 = new ArrayList<>();
        props2.add(new Propriedade("CALORIAS", 1100.0));
        props2.add(new Propriedade("SAL", 10540.0));
        props2.add(new Propriedade("GORDURAS SATURADAS", 1010.0));
        props2.add(new Propriedade("LIPIDOS", 1040.0));
        props2.add(new Propriedade("CARBONO", 1020.0));
        
        ArrayList<Propriedade> props3 = new ArrayList<>();
        props3.add(new Propriedade("CALORIAS", 210.0));
        props3.add(new Propriedade("SAL", 120.0));
        props3.add(new Propriedade("GORDURAS SATURADAS", 14.0));
        props3.add(new Propriedade("LIPIDOS", 17.0));
        props3.add(new Propriedade("CARBONO", 11.0));
        
        //ENTRADAS
        Entrada entrada1 = new Entrada("Gelatina de morango", "Não presta",new TipoEntrada("Gelatina"), props);
        
        //FIM ENTRADAS
        
        //Pratos 
        Prato pc1 = new Prato(new TipoPrato("Carne"),"Arroz de Pato", 0001);
        Prato pc2 = new Prato(new TipoPrato("CARNE"), "ROJÕES A MODA DO PORCO", 0002);
        Prato po1 = new Prato(new TipoPrato("OPÇÃO"), "EMPADÃO DE CARNE", 0003);
        Prato po2 = new Prato(new TipoPrato("OPÇÃO"), "ARROZ DE PATO", 0004);
        Prato pd1 = new Prato(new TipoPrato("DIETA"), "PEIXE MAGRO DIET", 0005); 
        Prato pd2 = new Prato(new TipoPrato("DIETA"), "PEIXE COZIDO", 0006); 
      //FIM Pratos
      
      //SOBREMESAS
        Sobremesa sobre1 = new Sobremesa("Gelatina da tia Teresinha Gostosa", "Não Presta", props);
        Sobremesa sobre2 = new Sobremesa("guloseima", "bom", props);
      //FIM SOBREMESAS
        
        
        
      //COMPLEMENTOS
        Complemento cmp1 = new Complemento("Bolinhos de Bacalhau", "Bolinhos feitos com bacalhau", props);
        
      //FIM COMPLEMENTOS
        
      //Bebidas
        Bebida beb1 = new Bebida("Coca-cola","Bebida gaseificada", props2);
        Bebida beb2 = new Bebida("Pepsi","Bebida gaseificada", props3);
        Bebida beb3 = new Bebida("Agua das Pedras","Bebida sem gas", props);
        
      //Fim Bebidas
      
      //EMENTAS
        Ementa m1 = null;
        try{
            m1 = new Ementa(new SimpleDateFormat("yyyy-MM-dd").parse("2015-05-05"));
            m1.inserirEntrada(entrada1);
            m1.inserirComplemento(cmp1);
            m1.inserirPrato(pc2);
            m1.inserirPrato(po1);
            m1.inserirPrato(pd1);
            m1.inserirSobremesa(sobre2); 
            m1.inserirBebidas(beb1);
            m1.inserirBebidas(beb2);
            m1.inserirBebidas(beb3);            
        }catch(ParseException ex){
            System.out.println(ex.getMessage());
        }
        //ARRAY PRATOS
        ArrayList<Prato> prat1 = new ArrayList<>();
        Prato p1 = new Prato(new TipoPrato("Carne"),"Feijoada", 0001);
        Prato p2 = new Prato(new TipoPrato("Peixe"),"Enrabalo", 0002);
        p1.setLimite(4);
        p2.setLimite(1);
        prat1.add(p1);
        prat1.add(p2);
        //ARRAY ENTRADAS
        
        
        
        //ARRAY BEBIDA
        
        
        
        
        //ARRAY SOBREMESA
        
        
        
        
        //ARRAY COMPLEMENTOS
        
        
        
        
        // NA CLASSE RESERVA CRIAR METODOS PARA INTRODUZIR A EMENTA, ENTRADA, BEBIDA, SOBREMESA,COMPLEMENTOS.
        

      //FIM EMENTAS
        Reserva reserva = null;
           
        reserva = new Reserva(prat1);
        
        try{
            reserva.addPrato(p1);
            reserva.addPrato(p2);
 
        }
        catch(LimiteAtingidoException ex){
            System.out.println(ex.toString());
        }
        
        
        System.out.println(reserva.toString());
    }
}