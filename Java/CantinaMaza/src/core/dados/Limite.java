/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package core.dados;

/**
 *
 * @author TI1-13
 */
public class Limite {
    private Object objecto;
    private double valor;

    public Limite(Object objecto, double valor) {
        this.objecto = objecto;
        this.valor = valor;
    }

    public Object getObjecto() {
        return objecto;
    }

    public void setObjecto(Object objecto) {
        this.objecto = objecto;
    }

    public double getValor() {
        return valor;
    }

    public void setValor(double valor) {
        this.valor = valor;
    }
}
