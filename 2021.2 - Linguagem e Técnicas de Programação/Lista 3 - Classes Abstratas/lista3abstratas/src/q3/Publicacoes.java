package q3;

public abstract class Publicacoes {
	public abstract void ImprimirInformaçoes();
	
	private String Titulo;
	private int ano;
	private String autores;
	private String areaPesquisa;
	private Pesquisa pesquisaassoc;
	public String getTitulo() {
		return Titulo;
	}
	public void setTitulo(String titulo) {
		Titulo = titulo;
	}
	public int getAno() {
		return ano;
	}
	public void setAno(int ano) {
		this.ano = ano;
	}
	public String getAutores() {
		return autores;
	}
	public void setAutores(String autores) {
		this.autores = autores;
	}
	public String getAreaPesquisa() {
		return areaPesquisa;
	}
	public void setAreaPesquisa(String areaPesquisa) {
		this.areaPesquisa = areaPesquisa;
	}
	public Pesquisa getPesquisaassoc() {
		return pesquisaassoc;
	}
	public void setPesquisaassoc(Pesquisa pesquisaassoc) {
		this.pesquisaassoc = pesquisaassoc;
	}
	
	
	
	

}
