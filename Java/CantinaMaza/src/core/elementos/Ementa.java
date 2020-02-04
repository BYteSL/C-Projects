package core.elementos;


import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author TI1-13
 */
public class Ementa {
    private Date data;
    private ArrayList<Entrada> entradas = new ArrayList<>();
    private ArrayList<Sobremesa> sobremesas = new ArrayList<>();
    private ArrayList<Prato> pratos = new ArrayList<>();
    private ArrayList<Complemento> complemtentos = new ArrayList<>();
    private ArrayList<Bebida> bebidas = new ArrayList<>();
    
    public Ementa(Date data) {
        this.data = data;
    }    
    
    /**
     * Esta função permite obter a data para a ementa atual.
     * 
     * @return Retorna a referida data.
     */
    public Date getData() {
        return data;
    }

    /**
     *
     * @param data
     */
    public void setData(Date data) {
        this.data = data;
    }

    public void inserirSobremesa(Sobremesa sobremesa){
        this.sobremesas.add(sobremesa);
    }
    public void apagarSobremesa(Sobremesa sobremesa){
        this.sobremesas.remove(sobremesa);
    }
    
    public void inserirPrato(Prato prato){
        this.pratos.add(prato);
    }
    public void apagarPrato(Prato prato){
        this.pratos.remove(prato);
    }
    
    public void inserirEntrada(Entrada entrada){
        this.entradas.add(entrada);
    }
    public void apagarEntrada(Entrada entrada){
        this.entradas.remove(entrada);
    }
    
    public void inserirComplemento(Complemento complemento){
        this.complemtentos.add(complemento);
    }
    public void apagarComplementos(Complemento complemento){
        this.complemtentos.remove(complemento);
    }
    public void inserirBebidas(Bebida bebida){
        this.bebidas.add(bebida);
    }
    public void apagarBebida(Bebida bebida){
        this.bebidas.remove(bebida);
    }
    
    @Override
    public String toString() {
        String ementa="";
        
        ementa+="EMENTA\n";
        ementa+=new SimpleDateFormat("yyyy-MM-dd").format(data);
        ementa+="\n\n";
        ementa+="Complemento\n";
        ementa+=complemtentos;
        ementa+="\n\n";
        ementa+="Entrada\n";
        ementa+=entradas;
        ementa+="\n\n";
        ementa+="Bebidas\n";
        ementa+=bebidas;
        ementa+="\n\n";
        ementa+="Pratos\n";
        ementa+=pratos;
        ementa+="\n\n";
        ementa+="Sobremesas\n";
        ementa+=sobremesas;
        ementa+="\n\n";
        
        return ementa;
    }
  
}
