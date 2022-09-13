package q13;

public class Dispositivo {
	
	public Dispositivo(String nome, boolean ligado) {
		super();
		this.nome = nome;
		this.ligado = ligado;
	}

	private String nome;
	
	
	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	private boolean ligado;

	public boolean isLigado() {
		return ligado;
	}

	public void setLigado(boolean ligado) {
		this.ligado = ligado;
	}
	
	public void status(){
		if(this.isLigado()) {
			System.out.println(this.getNome() + "| Ligado |");
		} else {
			System.out.println(this.getNome() + "| Desligado |");
		}
	
	
	

	}
}
