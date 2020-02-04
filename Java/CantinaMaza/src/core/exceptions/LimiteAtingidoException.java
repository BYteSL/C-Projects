/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package core.exceptions;

/**
 *
 * @author TI1-13
 */
public class LimiteAtingidoException extends Exception {

    /**
     * Creates a new instance of <code>LimiteAtingidoException</code> without
     * detail message.
     */
    public LimiteAtingidoException() {
        super();
    }

    /**
     * Constructs an instance of <code>LimiteAtingidoException</code> with the
     * specified detail message.
     *
     * @param msg the detail message.
     */
    public LimiteAtingidoException(String msg) {
        super(msg);
    }
}
