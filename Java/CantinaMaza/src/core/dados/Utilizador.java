/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package core.dados;

import java.util.ArrayList;

/**
 *
 * @author TI1-13
 */
public class Utilizador {
    private int numeroUtilizador;
    private String nomeUtilizador;
    private String turma;
    private ArrayList<Reserva> reservas;

    public Utilizador(int numeroUtilizador, String nomeUtilizador, String turma) {
        this.numeroUtilizador = numeroUtilizador;
        this.nomeUtilizador = nomeUtilizador;
        this.turma = turma;
    }

    public int getNumeroUtilizador() {
        return numeroUtilizador;
    }

    public void setNumeroUtilizador(int numeroUtilizador) {
        this.numeroUtilizador = numeroUtilizador;
    }

    public String getNomeUtilizador() {
        return nomeUtilizador;
    }

    public void setNomeUtilizador(String nomeUtilizador) {
        this.nomeUtilizador = nomeUtilizador;
    }

    public String getTurma() {
        return turma;
    }

    public void setTurma(String turma) {
        this.turma = turma;
    }

    public ArrayList<Reserva> getReservas() {
        return reservas;
    }

    public void setReservas(ArrayList<Reserva> reservas) {
        this.reservas = reservas;
    }
    
    
}
