package exe7_funcionarios;

public class Funcionario {
    private int id;
    private String nome;
    private double salario; // salario mensal
    private double bonificacao; // bonificacao mensal

    public Funcionario(int id, String nome, double salario) {
        this(id, nome, salario, 0.0);
    }

    public Funcionario(int id, String nome, double salario, double bonificacao) {
        this.id = id;
        this.nome = nome;
        this.salario = salario;
        this.bonificacao = bonificacao;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public double getSalario() {
        return salario;
    }

    public void setSalario(double salario) {
        this.salario = salario;
    }

    public double getBonificacao() {
        return bonificacao;
    }

    public void setBonificacao(double bonificacao) {
        this.bonificacao = bonificacao;
    }

    public void aumentarSalario(double percentualEx) {
        this.salario += this.salario * (percentualEx / 100.0);
    }

    public double calcularProventosAnuais() {
        return (salario + bonificacao) * 12.0;
    }

    public String dadosComuns() {
        return "id=" + id +
                ", nome='" + nome + '\'' +
                ", salario=" + salario +
                ", bonificacao=" + bonificacao;
    }

    @Override
    public String toString() {
        return getClass().getSimpleName() + "{" + dadosComuns() + "}";
    }
}

