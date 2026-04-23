package exe7_funcionarios;

import java.util.ArrayList;
import java.util.List;

public class Empresa {
    private String cnpj;
    private String nome;
    private final List<Funcionario> funcionarios;

    public Empresa(String cnpj, String nome) {
        this.cnpj = cnpj;
        this.nome = nome;
        this.funcionarios = new ArrayList<>();
    }

    public String getCnpj() {
        return cnpj;
    }

    public void setCnpj(String cnpj) {
        this.cnpj = cnpj;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public List<Funcionario> getFuncionarios() {
        return new ArrayList<>(funcionarios);
    }

    public void adicionarFuncionario(Funcionario funcionario) {
        if (funcionario == null) {
            throw new IllegalArgumentException("funcionario nao pode ser null");
        }
        funcionarios.add(funcionario);
    }

    public void mostrarFuncionarios() {
        for (Funcionario f : funcionarios) {
            System.out.println(f);
        }
    }

    @Override
    public String toString() {
        return "Empresa{" +
                "cnpj='" + cnpj + '\'' +
                ", nome='" + nome + '\'' +
                ", totalFuncionarios=" + funcionarios.size() +
                '}';
    }
}

