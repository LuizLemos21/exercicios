package q3;

public class Cordenador {
	private String nome;
	private String email;
	private String instituicao;
	private String endContato;
	private String func;
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public String getEmail() {
		return email;
	}
	public void setEmail(String email) {
		this.email = email;
	}
	public String getInstituicao() {
		return instituicao;
	}
	public void setInstituicao(String instituicao) {
		this.instituicao = instituicao;
	}
	public String getEndContato() {
		return endContato;
	}
	public void setEndContato(String endContato) {
		this.endContato = endContato;
	}
	public String getFunc() {
		return func;
	}
	public void setFunc(String func) {
		this.func = func;
	}
	
	public void getCord() {
		System.out.println("INFORMAÇÕES DO CORDENADOR:");
		
		System.out.println("Nome: "+this.nome);
		System.out.println("Email: "+this.email);
		System.out.println("Instituição: "+this.instituicao);
		System.out.println("Endereço de Contato: "+this.endContato);
		System.out.println("Função: "+this.func);
	}

}
