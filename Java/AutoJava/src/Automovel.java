/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author TI1-13
 */
public class Automovel {
    private String marca;
    private String modelo;
    private double quilometragem;
    private double contaRotacoes;
    private int nivelCombustivel;
    private Pneu pneuFrenteDireito;
    private Pneu pneuFrenteEsquerdo;
    private Pneu pneuTrasDireito;
    private Pneu pneuTrasEsquerdo;
    private int nivelOleo;
    private int estadoOleo;

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public double getQuilometragem() {
        return quilometragem;
    }

    public void setQuilometragem(double quilometragem) {
        this.quilometragem = quilometragem;
    }

    public double getContaRotacoes() {
        return contaRotacoes;
    }

    public void setContaRotacoes(double contaRotacoes) {
        this.contaRotacoes = contaRotacoes;
    }

    public int getNivelCombustivel() {
        return nivelCombustivel;
    }

    public void setNivelCombustivel(int nivelCombustivel) {
        this.nivelCombustivel = nivelCombustivel;
    }

    public Pneu getPneuFrenteDireito() {
        return pneuFrenteDireito;
    }

    public void setPneuFrenteDireito(Pneu pneuFrenteDireito) {
        this.pneuFrenteDireito = pneuFrenteDireito;
    }

    public Pneu getPneuFrenteEsquerdo() {
        return pneuFrenteEsquerdo;
    }

    public void setPneuFrenteEsquerdo(Pneu pneuFrenteEsquerdo) {
        this.pneuFrenteEsquerdo = pneuFrenteEsquerdo;
    }

    public Pneu getPneuTrasDireito() {
        return pneuTrasDireito;
    }

    public void setPneuTrasDireito(Pneu pneuTrasDireito) {
        this.pneuTrasDireito = pneuTrasDireito;
    }

    public Pneu getPneuTrasEsquerdo() {
        return pneuTrasEsquerdo;
    }

    public void setPneuTrasEsquerdo(Pneu pneuTrasEsquerdo) {
        this.pneuTrasEsquerdo = pneuTrasEsquerdo;
    }

    public int getNivelOleo() {
        return nivelOleo;
    }

    public void setNivelOleo(int nivelOleo) {
        this.nivelOleo = nivelOleo;
    }

    public int getEstadoOleo() {
        return estadoOleo;
    }

    public void setEstadoOleo(int estadoOleo) {
        this.estadoOleo = estadoOleo;
    }

    @Override
    public String toString() {
        return "Automovel{" + "marca=" + marca + ", modelo=" + modelo + ", quilometragem=" + quilometragem + ", contaRotacoes=" + contaRotacoes + ", nivelCombustivel=" + nivelCombustivel + ", pneuFrenteDireito=" + pneuFrenteDireito + ", pneuFrenteEsquerdo=" + pneuFrenteEsquerdo + ", pneuTrasDireito=" + pneuTrasDireito + ", pneuTrasEsquerdo=" + pneuTrasEsquerdo + ", nivelOleo=" + nivelOleo + ", estadoOleo=" + estadoOleo + '}';
    }
    
    
}
