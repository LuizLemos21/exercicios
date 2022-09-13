package q13;

public class Quarto {

	public static void main(String[] args) {
		Dispositivo lamp1 = new Dispositivo("lampada 1",true);
		Dispositivo  abj = new Dispositivo("abajour", false);
		Dispositivo lamp2 = new Dispositivo("lampada 2",true);
		Dispositivo lamp3 = new Dispositivo("lampada 3",false);
		Dispositivo ac = new Dispositivo("Ar condicionado",false);
		Ventilador v1 = new Ventilador("Ventilador 1", true, 5);
		Ventilador v2 = new Ventilador("Ventilador 2", false, 0);
		Televisão tv1 = new Televisão("TV 1",true,13,"Cabo");
		
		lamp1.status();
		lamp2.status();
		lamp3.status();
		abj.status();
		ac.status();
		v1.status();
		v2.status();
		tv1.status();
	}

}
