package exe7_funcionarios;

public class Vendedor extends Funcionario {
    private final double[] vendasMensais;
    private double percentualComissao;

    public Vendedor(int id, String nome, double salario, double bonificacao, double percentualComissao) {
        super(id, nome, salario, bonificacao);
        this.vendasMensais = new double[12];
        this.percentualComissao = percentualComissao;
    }

    public double[] getVendasMensais() {
        double[] copia = new double[vendasMensais.length];
        System.arraycopy(vendasMensais, 0, copia, 0, vendasMensais.length);
        return copia;
    }

    public void setVendaMes(int mes, double totalVendas) {
        if (mes < 1 || mes > 12) {
            throw new IllegalArgumentException("mes deve estar entre 1 e 12");
        }
        vendasMensais[mes - 1] = totalVendas;
    }

    public double getPercentualComissao() {
        return percentualComissao;
    }

    public void setPercentualComissao(double percentualComissao) {
        this.percentualComissao = percentualComissao;
    }

    @Override
    public double calcularProventosAnuais() {
        double total = super.calcularProventosAnuais();
        for (double vendas : vendasMensais) {
            total += vendas * percentualComissao;
        }
        return total;
    }

    @Override
    public String toString() {
        return getClass().getSimpleName() + "{" + dadosComuns() +
                ", percentualComissao=" + percentualComissao +
                ", totalVendasAno=" + totalVendasAno() +
                '}';
    }

    private double totalVendasAno() {
        double s = 0.0;
        for (double v : vendasMensais) {
            s += v;
        }
        return s;
    }
}
