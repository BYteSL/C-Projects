/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author TI1-13
 */
public class Deposito {
private String nomeLiquido;
private double nivel;
private double capacidadeMax;

    public Deposito() {
    }

    public Deposito(String nomeLiquido, double nivel, double capacidadeMax) {
        this.nomeLiquido = nomeLiquido;
        this.nivel = nivel;
        this.capacidadeMax = capacidadeMax;
    }
    
    public String getNomeLiquido() {
        return nomeLiquido;
    }

    public void setNomeLiquido(String nomeLiquido) {
        this.nomeLiquido = nomeLiquido;
    }

    public double getNivel() {
        return nivel;
    }

    public void setNivel(double nivel) {
        this.nivel = nivel;
    }

    public double getCapacidadeMax() {
        return capacidadeMax;
    }

    public void setCapacidadeMax(double capacidadeMax) {
        this.capacidadeMax = capacidadeMax;
    }
    
    public void trocarLiquido(String nomeLiquido,double nivel)throws ParametrosForaValorException{
        if (nivel > this.getCapacidadeMax())
        {
            throw new ParametrosForaValorException("Valor excedido!");
        }
        else
        {
            setNomeLiquido(nomeLiquido);
            setNivel(nivel);
        }
    }
    public void introduzirLiquido(double quantidade)throws ParametrosForaValorException{
        if ((nivel += quantidade) > getCapacidadeMax())
        {
            throw new ParametrosForaValorException("Quantidade excedida!");
        }
        else
        {
            nivel += quantidade;
        }
    }
    public void retirarLiquido(double quantidade)throws ParametrosForaValorException{
        if (nivel == 0)
        {
            throw new ParametrosForaValorException("deposito vazio");
        }
        else
        {
            nivel -= quantidade;
        }
    }

    @Override
    public String toString() {
        return "Deposito{" + "nomeLiquido=" + nomeLiquido + ", nivel=" + nivel + ", capacidadeMax=" + capacidadeMax + '}';
    }

    
    

    
}
