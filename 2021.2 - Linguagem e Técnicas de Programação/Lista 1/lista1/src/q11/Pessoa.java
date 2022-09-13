package q11;
public class Pessoa {
	private String nome;
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public int getAnoNasc() {
		return anoNasc;
	}
	public void setAnoNasc(int anoNasc) {
		this.anoNasc = anoNasc;
	}
	private int anoNasc;
	public int calculaidade(int anoAtual) {
		return(anoAtual - anoNasc);
	}
}
