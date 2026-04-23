package exe10_moradores;

public class Morador {
    private static int proximoCodigoSequencial = 1;

    private final int codigoSequencial;
    private String nome;
    private String cpf;
    private String celular;
    private String dataNascimento;
    private String sexo;
    private String bloco;
    private int apartamento;
    private String codigoAcesso;

    public Morador(String nome,
                   String cpf,
                   String celular,
                   String dataNascimento,
                   String sexo,
                   String bloco,
                   int apartamento,
                   String codigoAcesso) {
        this.codigoSequencial = proximoCodigoSequencial++;
        this.nome = nome;
        this.cpf = cpf;
        this.celular = celular;
        this.dataNascimento = dataNascimento;
        this.sexo = sexo;
        this.bloco = bloco;
        this.apartamento = apartamento;
        this.codigoAcesso = codigoAcesso;
    }

    public int getCodigoSequencial() {
        return codigoSequencial;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getCpf() {
        return cpf;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    public String getCelular() {
        return celular;
    }

    public void setCelular(String celular) {
        this.celular = celular;
    }

    public String getDataNascimento() {
        return dataNascimento;
    }

    public void setDataNascimento(String dataNascimento) {
        this.dataNascimento = dataNascimento;
    }

    public String getSexo() {
        return sexo;
    }

    public void setSexo(String sexo) {
        this.sexo = sexo;
    }

    public String getBloco() {
        return bloco;
    }

    public void setBloco(String bloco) {
        this.bloco = bloco;
    }

    public int getApartamento() {
        return apartamento;
    }

    public void setApartamento(int apartamento) {
        this.apartamento = apartamento;
    }

    public String getCodigoAcesso() {
        return codigoAcesso;
    }

    public void setCodigoAcesso(String codigoAcesso) {
        this.codigoAcesso = codigoAcesso;
    }

    @Override
    public String toString() {
        return "Morador{" +
                "codigoSequencial=" + codigoSequencial +
                ", nome='" + nome + '\'' +
                ", cpf='" + cpf + '\'' +
                ", celular='" + celular + '\'' +
                ", dataNascimento='" + dataNascimento + '\'' +
                ", sexo='" + sexo + '\'' +
                ", bloco='" + bloco + '\'' +
                ", apartamento=" + apartamento +
                ", codigoAcesso='" + codigoAcesso + '\'' +
                '}';
    }
}

