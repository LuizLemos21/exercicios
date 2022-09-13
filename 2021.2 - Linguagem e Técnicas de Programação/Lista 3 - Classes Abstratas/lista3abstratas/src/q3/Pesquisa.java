package q3;

public class Pesquisa extends Publicacoes {
	private String nomePesquisa;
	private String descricao;
	private String dataInicio;
	private String dataTermino;
	private String areadePesquisa;
	private Cordenador cord;
	private String bibliografia;
	
	public String getNomePesquisa() {
		return nomePesquisa;
	}
	public void setNomePesquisa(String nomePesquisa) {
		this.nomePesquisa = nomePesquisa;
	}
	public String getDescricao() {
		return descricao;
	}
	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}
	public String getDataInicio() {
		return dataInicio;
	}
	public void setDataInicio(String dataInicio) {
		this.dataInicio = dataInicio;
	}
	public String getDataTermino() {
		return dataTermino;
	}
	public void setDataTermino(String dataTermino) {
		this.dataTermino = dataTermino;
	}
	public String getAreadePesquisa() {
		return areadePesquisa;
	}
	public void setAreadePesquisa(String areadePesquisa) {
		this.areadePesquisa = areadePesquisa;
	}
	public Cordenador getCord() {
		return cord;
	}
	public void setCord(Cordenador cord) {
		this.cord = cord;
	}
	public String getBibliografia() {
		return bibliografia;
	}
	public void setBibliografia(String bibliografia) {
		this.bibliografia = bibliografia;
	}
	@Override
	public void ImprimirInformaçoes() {
		System.out.println("Titulo: "+super.getTitulo());
		System.out.println("Ano: "+super.getAno());
		System.out.println("Autores: "+super.getAutores());
		System.out.println("Nome da Pesquisa: " + this.nomePesquisa);
		System.out.println("Descrição: "+this.descricao);
		System.out.println("Área da pesquisa: "+super.getAreaPesquisa());
		System.out.println("Data de inicio: "+this.dataInicio);
		System.out.println("Data de Termino: "+this.dataTermino);
		System.out.println("Informações Biblográficas: "+this.bibliografia);
		
		cord.getCord();

	}
	
	
	

}
