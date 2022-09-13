package q2;

public class Poder {
	private String nome;

	private float dano;
	
	
	public Poder(String nome, float dano) {
		super();
		this.nome = nome;
		this.dano = dano;
	}

	public float getDano() {
		return dano;
	}

	public void setDano(float dano) {
		this.dano = dano;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}
	
	

}
