package exe7_funcionarios;

public class Gerente extends Funcionario {
    private String departamento;
    private int senha;

    public Gerente(int id, String nome, double salario, double bonificacao, String departamento, int senha) {
        super(id, nome, salario, bonificacao);
        this.departamento = departamento;
        this.senha = senha;
    }

    public String getDepartamento() {
        return departamento;
    }

    public void setDepartamento(String departamento) {
        this.departamento = departamento;
    }

    public int getSenha() {
        return senha;
    }

    public void setSenha(int senha) {
        this.senha = senha;
    }

    @Override
    public String toString() {
        return getClass().getSimpleName() + "{" + dadosComuns() +
                ", departamento='" + departamento + '\'' +
                ", senha=" + senha +
                '}';
    }
}

