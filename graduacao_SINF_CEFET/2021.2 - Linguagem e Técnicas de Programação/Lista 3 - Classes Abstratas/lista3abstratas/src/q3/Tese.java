package q3;

public class Tese extends Publicacoes{
	
	private String grau;
	private String instituicao;
	
	

	public String getGrau() {
		return grau;
	}



	public void setGrau(String grau) {
		this.grau = grau;
	}



	public String getInstituicao() {
		return instituicao;
	}



	public void setInstituicao(String instituicao) {
		this.instituicao = instituicao;
	}



	@Override
	public void ImprimirInformaçoes() {
		System.out.println("Titulo: "+super.getTitulo());
		System.out.println("Ano: "+super.getAno());
		System.out.println("Autores: "+super.getAutores());
		System.out.println("Grau: "+this.grau);
		System.out.println("Instituição: "+this.instituicao);
		System.out.println("Área de pesquisa correspondente: "+ super.getAreaPesquisa());
		if(super.getPesquisaassoc()!=null) {
			super.getPesquisaassoc().ImprimirInformaçoes();
		}
	}

}
