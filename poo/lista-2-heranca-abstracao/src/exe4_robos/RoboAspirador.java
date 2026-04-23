package exe4_robos;

public class RoboAspirador {
    public enum Status {
        LIGADO,
        ANDANDO,
        PARADO,
        DESLIGADO
    }

    private final int identificacao;
    private Status status;
    private int posicaoX;
    private int posicaoY;
    private int quantidadePo;
    private final int limitePo;

    public RoboAspirador(int identificacao, int limitePo) {
        if (limitePo <= 0) {
            throw new IllegalArgumentException("limitePo deve ser > 0");
        }
        this.identificacao = identificacao;
        this.limitePo = limitePo;

        this.status = Status.DESLIGADO;
        this.posicaoX = 0;
        this.posicaoY = 0;
        this.quantidadePo = 0;
    }

    public int getIdentificacao() {
        return identificacao;
    }

    public Status getStatus() {
        return status;
    }

    public int getPosicaoX() {
        return posicaoX;
    }

    public int getPosicaoY() {
        return posicaoY;
    }

    public int getQuantidadePo() {
        return quantidadePo;
    }

    public int getLimitePo() {
        return limitePo;
    }

    public void ligar() {
        this.status = Status.LIGADO;
    }

    public void desligar() {
        this.status = Status.DESLIGADO;
    }

    public void andar(int deltaX, int deltaY) {
        if (status == Status.DESLIGADO) {
            System.out.println("Robo " + identificacao + ": nao pode andar (desligado). Ligue primeiro.");
            return;
        }
        this.posicaoX += deltaX;
        this.posicaoY += deltaY;
        this.status = Status.ANDANDO;
    }

    public void parar() {
        if (status == Status.DESLIGADO) {
            System.out.println("Robo " + identificacao + ": nao pode parar (desligado). Ligue primeiro.");
            return;
        }
        this.status = Status.PARADO;
    }

    public void aspirar(int quantidade) {
        if (status == Status.DESLIGADO) {
            System.out.println("Robo " + identificacao + ": nao pode aspirar (desligado). Ligue primeiro.");
            return;
        }
        if (quantidade < 0) {
            System.out.println("Robo " + identificacao + ": quantidade invalida para aspirar: " + quantidade);
            return;
        }

        this.quantidadePo += quantidade;
        if (this.quantidadePo >= this.limitePo) {
            this.quantidadePo = this.limitePo;
            this.status = Status.DESLIGADO;
            System.out.println("Robo " + identificacao + ": limite de po atingido (" + limitePo + "). Desligando automaticamente.");
        }
    }

    @Override
    public String toString() {
        return "RoboAspirador{" +
                "id=" + identificacao +
                ", status=" + status +
                ", posicaoX=" + posicaoX +
                ", posicaoY=" + posicaoY +
                ", quantidadePo=" + quantidadePo +
                ", limitePo=" + limitePo +
                '}';
    }
}

