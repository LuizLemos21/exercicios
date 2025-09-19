package q3;

public class Principal {
	public static void main(String[] args) {
		Artigos art = new Artigos();
		Tese tese = new Tese();
		Livro livro = new Livro();
		Pesquisa pesquisa = new Pesquisa();
		
		art.setAno(2011);
		art.setAreaPesquisa("Biologia");
		art.setAutores("Anton Sheppard & Viktor Draugr");
		art.setNomePeriodico("Isto�");
		art.setNumero(13513);
		art.setTitulo("Diminui��o da Popula��o de Koalas");
		art.setVolume(12);
		
		art.ImprimirInforma�oes();
		System.out.println("--------------------------");
		pesquisa.setAno(2024);
		pesquisa.setAreaPesquisa("Geopolitica");
		pesquisa.setAutores("Craque Neto");
		pesquisa.setBibliografia("CNN News, Sputnik BR, Grupo do Zap");
		pesquisa.setDataInicio("24/02/2022");
		pesquisa.setDataTermino("31/02/2024");
		pesquisa.setDescricao("*Sample Text*");
		pesquisa.setNomePesquisa("Impactos socioculturais e finan�eiros dos conflitos ucranianos no futebol brasileiro");
		pesquisa.setTitulo("Como a Guerra na Europa afeta o Gr�mio?");
		
		Cordenador c1 = new Cordenador();
		
		c1.setEndContato("https://www.youtube.com/channel/UCwXK5KniHpmTkZJTipeBx-w/featured");
		c1.setFunc("Fil�sofo");
		c1.setInstituicao("Youtube");
		c1.setNome("Ednaldo Pereira");
		c1.setEmail("ednaldopereira435@yahoo.com");
		pesquisa.setCord(c1);
		
		pesquisa.ImprimirInforma�oes();
		System.out.println("--------------------------");
		
		livro.setAno(2025);
		livro.setAreaPesquisa("Geopolitica");
		livro.setAutores("Jailson Mendes");
		livro.setEditora("Saraiva");
		livro.setLocalPublicacao("Meu quarto");
		livro.setPesquisaassoc(pesquisa);
		livro.setTitulo("Padre Quevedo est� vivo e vai jogar no Vasco");
		livro.ImprimirInforma�oes();
		
		System.out.println("--------------------------");
		
		tese.setAno(2015);
		tese.setAreaPesquisa("Sociologia");
		tese.setAutores("Abdal, Alexandre");
		tese.setGrau("ph.D");
		tese.setInstituicao("Faculdade de Filosofia, Letras e Ci�ncias Humanas");
		tese.setTitulo("Sobre regi�es e desenvolvimento: os processos de desenvolvimento regional brasileiro..");
		tese.ImprimirInforma�oes();

		
	}
}
