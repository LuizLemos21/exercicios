package q3;

public class Livro extends Publicacoes {
	private String editora;
	private String localPublicacao;
	
	
	
	public String getEditora() {
		return editora;
	}



	public void setEditora(String editora) {
		this.editora = editora;
	}



	public String getLocalPublicacao() {
		return localPublicacao;
	}



	public void setLocalPublicacao(String localPublicacao) {
		this.localPublicacao = localPublicacao;
	}



	@Override
	public void ImprimirInforma�oes() {
		System.out.println("Titulo: "+super.getTitulo());
		System.out.println("Ano: "+super.getAno());
		System.out.println("Autores: "+super.getAutores());
		System.out.println("Editora: "+this.editora);
		System.out.println("Local da publica��o: "+this.localPublicacao);
		System.out.println("�rea de pesquisa correspondente: "+ super.getAreaPesquisa());
		if(super.getPesquisaassoc()!=null) {
			super.getPesquisaassoc().ImprimirInforma�oes();
		}
		
	}

}
