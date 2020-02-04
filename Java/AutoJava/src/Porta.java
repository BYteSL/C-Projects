/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author TI1-13
 */
public class Porta {
    private double anguloAbetura;
    private double anguloAberturaAtual;
    private double elevacaoVidro;
    private double elevacaoVidroMax;
    private double elevacaoVidroMin;
    private boolean existeVidro;
    private boolean portaFechada;
    private boolean portaTrancada;
    private int nivelEmbaciamento;
    private int nivelMaxEmbaciamento;
    private boolean autoDesembaciador;
    private double temperaturaDesembaciador;
    private boolean estadoErroDesembaciador;
    
    public Porta(double anguloAbetura, double anguloAberturaAtual, double elevacaoVidro, double elevacaoVidroMax, double elevacaoVidroMin, boolean existeVidro, boolean portaTrancada, int nivelEmbaciamento, int nivelMaxEmbaciamento, boolean autoDesembaciador, double temperaturaDesembaciador, boolean estadoErroDesembaciador) {
        this.anguloAbetura = anguloAbetura;
        this.anguloAberturaAtual = anguloAberturaAtual;
        this.elevacaoVidro = elevacaoVidro;
        this.elevacaoVidroMax = elevacaoVidroMax;
        this.elevacaoVidroMin = elevacaoVidroMin;
        this.existeVidro = existeVidro;
        this.portaTrancada = portaTrancada;
        this.nivelEmbaciamento = nivelEmbaciamento;
        this.nivelMaxEmbaciamento = nivelMaxEmbaciamento;
        this.autoDesembaciador = autoDesembaciador;
        this.temperaturaDesembaciador = temperaturaDesembaciador;
        this.estadoErroDesembaciador = estadoErroDesembaciador;
    }
    
    public double getAnguloAbetura() {
        return anguloAbetura;
    }

    public void setAnguloAbetura(double anguloAbetura) {
        this.anguloAbetura = anguloAbetura;
    }

    public double getAnguloAberturaAtual() {
        return anguloAberturaAtual;
    }

    public void setAnguloAberturaAtual(double anguloAberturaAtual) {
        this.anguloAberturaAtual = anguloAberturaAtual;
    }

    public double getElevacaoVidro() {
        return elevacaoVidro;
    }

    public void setElevacaoVidro(double elevacaoVidro) {
        this.elevacaoVidro = elevacaoVidro;
    }

    public double getElevacaoVidroMax() {
        return elevacaoVidroMax;
    }

    public void setElevacaoVidroMax(double elevacaoVidroMax) {
        this.elevacaoVidroMax = elevacaoVidroMax;
    }

    public double getElevacaoVidroMin() {
        return elevacaoVidroMin;
    }

    public void setElevacaoVidroMin(double elevacaoVidroMin) {
        this.elevacaoVidroMin = elevacaoVidroMin;
    }

    public boolean isExisteVidro() {
        return existeVidro;
    }

    public void setExisteVidro(boolean existeVidro) {
        this.existeVidro = existeVidro;
    }

    public boolean isPortaTrancada() {
        return portaTrancada;
    }

    public void setPortaTrancada(boolean portaTrancada) {
        this.portaTrancada = portaTrancada;
    }

    public int getNivelEmbaciamento() {
        return nivelEmbaciamento;
    }

    public void setNivelEmbaciamento(int nivelEmbaciamento) {
        this.nivelEmbaciamento = nivelEmbaciamento;
    }

    public int getNivelMaxEmbaciamento() {
        return nivelMaxEmbaciamento;
    }

    public void setNivelMaxEmbaciamento(int nivelMaxEmbaciamento) {
        this.nivelMaxEmbaciamento = nivelMaxEmbaciamento;
    }

    public boolean isAutoDesembaciador() {
        return autoDesembaciador;
    }

    public void setAutoDesembaciador(boolean autoDesembaciador) {
        this.autoDesembaciador = autoDesembaciador;
    }

    public double getTemperaturaDesembaciador() {
        return temperaturaDesembaciador;
    }

    public void setTemperaturaDesembaciador(double temperaturaDesembaciador) {
        this.temperaturaDesembaciador = temperaturaDesembaciador;
    }

    public boolean isEstadoErroDesembaciador() {
        return estadoErroDesembaciador;
    }

    public void setEstadoErroDesembaciador(boolean estadoErroDesembaciador) {
        this.estadoErroDesembaciador = estadoErroDesembaciador;
    }
    
    public void ajustarAlturaVidro(double altura) throws ParametrosForaValorException
    {
        if((elevacaoVidro + altura) > getElevacaoVidroMax())
        {
         throw new ParametrosForaValorException("Valor excedido!");
        }
        if((elevacaoVidro - altura)< 0)
        {
          throw new ParametrosForaValorException("Vidro no limite minimo");
        }
        else
        {
         elevacaoVidro += altura;
            System.out.println("Vidro fechado");
            System.out.println("Tranquilo");
        }
        
        
    }
    
    
    public void trancarPorta(boolean portaTrancada)throws MovimentosInvalidosException
    {
        if(this.portaTrancada == portaTrancada)
        {
            throw new MovimentosInvalidosException("Movimento Invalido");
        }
        else
        {
            setPortaTrancada(portaTrancada);
        }
    }

    @Override
    public String toString() {
        return "Porta{" + "anguloAbetura=" + anguloAbetura + ", anguloAberturaAtual=" + anguloAberturaAtual + ", elevacaoVidro=" + elevacaoVidro + ", existeVidro=" + existeVidro + ", portaTrancada=" + portaTrancada + ", nivelEmbaciamento=" + nivelEmbaciamento + ", nivelMaxEmbaciamento=" + nivelMaxEmbaciamento + ", autoDesembaciador=" + autoDesembaciador + ", temperaturaDesembaciador=" + temperaturaDesembaciador + ", estadoErroDesembaciador=" + estadoErroDesembaciador + '}';
    }

    public boolean isPortaFechada() {
        return portaFechada;
    }

    public void setPortaFechada(boolean portaFechada) {
        this.portaFechada = portaFechada;
    }
    
   
    
    

    
  
}
