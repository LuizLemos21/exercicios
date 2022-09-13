package q21;
import q13.Dispositivo;
import java.util.ArrayList;
import q13.Ventilador;


public class Principal {

	public static void main(String[] args) {
		Quarto q = new Quarto();
		Ventilador v1 = new Ventilador("v1",true,5);
		Ventilador v2 = new Ventilador("v2",false,1);
		Ventilador v3 = new Ventilador("v3",true,2);
		Dispositivo l1 = new Dispositivo("l1",true);
		Dispositivo l2 = new Dispositivo("l2",false);
		q.setArraylamp(l1, l2);
		q.setArrayvent(v1, v2, v3);
		System.out.println("COM ARRAY:");
		q.printArraylamp();
		q.printArrayVent();
		q.Ventiladores.add(v1);
		q.Ventiladores.add(v2);
		q.Ventiladores.add(v3);
		q.Lampadas.add(l1);
		q.Lampadas.add(l2);
		System.out.println("COM ARRAYLIST:");
		for (int i = 0; i < q.Ventiladores.size(); i++) {
			Ventilador vx = (Ventilador)q.Ventiladores.get(i);
			System.out.println("Nome:"+vx.getNome()+", Ligado:"+vx.isLigado()+", Velocidade:"+vx.getVelocidade());
		}
		
		for (int i = 0; i < q.Lampadas.size(); i++) {
			Dispositivo lx = (Dispositivo)q.Lampadas.get(i);
			System.out.println("Nome:"+lx.getNome()+", Ligado:"+lx.isLigado());
		}
		
		
		
	}

}
