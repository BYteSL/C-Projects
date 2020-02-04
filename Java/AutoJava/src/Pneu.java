/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author TI1-13
 */
public class Pneu {
 
    private String modelo;
    private String marca;
    private double larguraJante;
    private double alturaPneu;
    private double alturaPiso;
    private double alturaPisoRecomendada;
    private double minimoAlturaPiso;
    private double pressao;
    private double pressaoMaxima;
    private double pressaoRecomendada;
    private double pressaoMinima;
    private int posicaoMontagemNoCarro; /// 1-Fd 2-Fe 3-Td 4-Te 5-Spl
    private double kmRodadoChuva;
    private double kmRodadoSeco;
    private double kmRodadoAlcatrao;
    private double kmRodadoTerra;
    private int nivelRuido;
    private double nivelConsumo;
    private String TipoPneu;
    private boolean estadoErroPneu;
    
    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public double getLarguraJante() {
        return larguraJante;
    }

    public void setLarguraJante(double larguraJante) {
        this.larguraJante = larguraJante;
    }

    public double getAlturaPneu() {
        return alturaPneu;
    }

    public void setAlturaPneu(double alturaPneu) {
        this.alturaPneu = alturaPneu;
    }

    public double getAlturaPiso() {
        return alturaPiso;
    }

    public void setAlturaPiso(double alturaPiso) {
        this.alturaPiso = alturaPiso;
    }

    public double getMinimoAlturaPiso() {
        return minimoAlturaPiso;
    }

    public void setMinimoAlturaPiso(double minimoAlturaPiso) {
        this.minimoAlturaPiso = minimoAlturaPiso;
    }

    public double getPressao() {
        return pressao;
    }

    public void setPressao(double pressao) {
        this.pressao = pressao;
    }
    

    public double getPressaoMaxima() {
        return pressaoMaxima;
    }

    public void setPressaoMaxima(double pressaoMaxima) {
        this.pressaoMaxima = pressaoMaxima;
    }

    public double getPressaoMinima() {
        return pressaoMinima;
    }

    public void setPressaoMinima(double pressaoMinima) {
        this.pressaoMinima = pressaoMinima;
    }

    public int getPosicaoMontagemNoCarro() {
        return posicaoMontagemNoCarro;
    }

    public void setPosicaoMontagemNoCarro(int posicaoMontagemNoCarro) {
        this.posicaoMontagemNoCarro = posicaoMontagemNoCarro;
    }

    public double getKmRodadoChuva() {
        return kmRodadoChuva;
    }

    public void setKmRodadoChuva(double kmRodadoChuva) {
        this.kmRodadoChuva = kmRodadoChuva;
    }

    public double getKmRodadoSeco() {
        return kmRodadoSeco;
    }

    public void setKmRodadoSeco(double kmRodadoSeco) {
        this.kmRodadoSeco = kmRodadoSeco;
    }

    public double getKmRodadoAlcatrao() {
        return kmRodadoAlcatrao;
    }

    public void setKmRodadoAlcatrao(double kmRodadoAlcatrao) {
        this.kmRodadoAlcatrao = kmRodadoAlcatrao;
    }

    public double getKmRodadoTerra() {
        return kmRodadoTerra;
    }

    public void setKmRodadoTerra(double kmRodadoTerra) {
        this.kmRodadoTerra = kmRodadoTerra;
    }

    public int getNivelRuido() {
        return nivelRuido;
    }

    public void setNivelRuido(int nivelRuido) {
        this.nivelRuido = nivelRuido;
    }

    public double getNivelConsumo() {
        return nivelConsumo;
    }

    public void setNivelConsumo(double nivelConsumo) {
        this.nivelConsumo = nivelConsumo;
    }

    public String getTipoPneu() {
        return TipoPneu;
    }

    public void setTipoPneu(String TipoPneu) {
        this.TipoPneu = TipoPneu;
    }

    public boolean isEstadoErroPneu() {
        return estadoErroPneu;
    }

    public void setEstadoErroPneu(boolean estadoErroPneu) {
        this.estadoErroPneu = estadoErroPneu;
    }

    public double getPressaoRecomendada() {
        return pressaoRecomendada;
    }

    public void setPressaoRecomendada(double pressaoRecomendada) {
        this.pressaoRecomendada = pressaoRecomendada;
    }
    
    public double ajustarPressao(){
      return pressao=pressaoRecomendada;
    }
    public double getAlturaPisoRecomendada() {
        return alturaPisoRecomendada;
    }

    public void setAlturaPisoRecomendada(double alturaPisoRecomendada) {
        this.alturaPisoRecomendada = alturaPisoRecomendada;
    }
    
    public boolean checkupPneu(){
        return pressao == pressaoRecomendada &&
               alturaPiso == alturaPisoRecomendada;
    }
    
    public void ajustarPressaoRecomendada()
    {
        this.pressao = getPressaoRecomendada();
    }
    public boolean checkUpPneu()
    {
        return getPressao() == getPressaoRecomendada() &&
               getAlturaPiso() == getAlturaPisoRecomendada();
    }
    
    @Override
    public String toString() {
        return "Pneu{" + "modelo=" + modelo + ", marca=" + marca + ", larguraJante=" + larguraJante + ", alturaPneu=" + alturaPneu + ", alturaPiso=" + alturaPiso + ", minimoAlturaPiso=" + minimoAlturaPiso + ", pressao=" + pressao + ", pressaoMaxima=" + pressaoMaxima + ", pressaoMinima=" + pressaoMinima + ", posicaoMontagemNoCarro=" + posicaoMontagemNoCarro + ", kmRodadoChuva=" + kmRodadoChuva + ", kmRodadoSeco=" + kmRodadoSeco + ", kmRodadoAlcatrao=" + kmRodadoAlcatrao + ", kmRodadoTerra=" + kmRodadoTerra + ", nivelRuido=" + nivelRuido + ", nivelConsumo=" + nivelConsumo + ", TipoPneu=" + TipoPneu + ", estadoErroPneu=" + estadoErroPneu + '}';
    }
    
    public boolean equals(Object O){
        if (O instanceof Pneu)
        {
            Pneu obj = (Pneu)O;
            
            if(obj.getMarca().equals(getMarca()))
            {
                return true;
            }
        }
        return false;
    }
    public Object clone(){
        Pneu p= new Pneu();
        p.setMarca(getMarca());
        p.setModelo(getModelo());
        return p;
    }
}
