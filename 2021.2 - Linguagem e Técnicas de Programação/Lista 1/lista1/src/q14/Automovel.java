package q14;

public class Automovel {
	public Automovel(String nome) {
		this.nome=nome;
	}
	private String nome;
	
	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public void acelerar() {
		System.out.println(this.nome+" acelerando");
	}
	
	public void frear() {
		System.out.println(this.nome+" freando");
	}
	
	public void movFrente() {
		System.out.println(this.nome+" movendo para a frente");
	}
	
	public void movTras() {
		System.out.println(this.nome+" dando ré");
	}
	
	
	public void giraDireita() {
		System.out.println(this.nome+" girando para a Direita");
	}
	
	public void giraEsquerda() {
		System.out.println(this.nome+" girando para a Esquerda");
	}

}
