package q23;

public class Principal {

	public static void main(String[] args) {
		int dataAtual = 30;
		Nota_Fiscal n1 = new Nota_Fiscal(102223, 15, 320.50f, "João", 38354555,220099928);
		System.out.println("Valor a pagar R$" + n1.valorAPagar(dataAtual));
	}

}
