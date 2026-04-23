package exe8_horario;

public class Horario {
    private int hora;
    private int minuto;
    private int segundo;

    // Construtor: recebe apenas hora, minuto/segundo = 0
    public Horario(int hora) {
        this(hora, 0, 0);
    }

    // Construtor: recebe hora, minuto e segundo
    public Horario(int hora, int minuto, int segundo) {
        atualizarHorario(hora, minuto, segundo);
    }

    // Sets (atualizacoes)
    public void atualizarHora(int hora) {
        if (!validarHora(hora)) {
            throw new IllegalArgumentException("Hora invalida: " + hora);
        }
        this.hora = hora;
    }

    public void atualizarMinuto(int minuto) {
        if (!validarMinuto(minuto)) {
            throw new IllegalArgumentException("Minuto invalido: " + minuto);
        }
        this.minuto = minuto;
    }

    public void atualizarSegundo(int segundo) {
        if (!validarSegundo(segundo)) {
            throw new IllegalArgumentException("Segundo invalido: " + segundo);
        }
        this.segundo = segundo;
    }

    public void atualizarHorario(int hora, int minuto, int segundo) {
        if (!validarHora(hora) || !validarMinuto(minuto) || !validarSegundo(segundo)) {
            throw new IllegalArgumentException(
                    "Horario invalido: " + hora + ":" + minuto + ":" + segundo
            );
        }
        this.hora = hora;
        this.minuto = minuto;
        this.segundo = segundo;
    }

    // Gets (consultas)
    public int getHora() {
        return hora;
    }

    public int getMinuto() {
        return minuto;
    }

    public int getSegundo() {
        return segundo;
    }

    public String getHorarioCompleto() {
        return String.format("%02d:%02d:%02d", hora, minuto, segundo);
    }

    // Validacoes (valores validos)
    public static boolean validarHora(int hora) {
        return hora >= 0 && hora <= 23;
    }

    public static boolean validarMinuto(int minuto) {
        return minuto >= 0 && minuto <= 59;
    }

    public static boolean validarSegundo(int segundo) {
        return segundo >= 0 && segundo <= 59;
    }

    // Diferenca em minutos (considera segundos)
    public static double diferencaEmMinutos(Horario h1, Horario h2) {
        long s1 = h1.totalSegundos();
        long s2 = h2.totalSegundos();
        return Math.abs(s1 - s2) / 60.0;
    }

    private long totalSegundos() {
        return (long) hora * 3600L + (long) minuto * 60L + (long) segundo;
    }

    @Override
    public String toString() {
        return getHorarioCompleto();
    }
}

