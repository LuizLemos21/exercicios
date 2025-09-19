package q2;

public class Principal {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Kate kate = new Kate(1000,3);
		kate.andar();
		kate.pular();
		BadFish b1 = new BadFish(200);
		BadFish b2 = new BadFish(255);
		BadFish b3 = new BadFish(245);
		MadCat m1 = new MadCat(330);
		MadCat m2 = new MadCat(355);
		Poder p1 = new Poder("SuperBark",(float) 100);
		Poder p2 = new Poder("EyeBeam",(float) 120);
		Poder p3 = new Poder("RearRocket",(float) 150);
		kate.addPoder(p1);
		kate.addPoder(p2);
		kate.addPoder(p3);
		kate.usaPoder();
		b1.isHit(kate.getMainPower());
		b2.isHit(kate.getMainPower());
		m1.isHit(kate.getMainPower());
		kate.equipaPoder(p3);
		kate.usaPoder();
		b2.isHit(kate.getMainPower());
		m1.isHit(kate.getMainPower());
		kate.equipaPoder(p2);
		kate.usaPoder();
		b1.isHit(kate.getMainPower());
		m1.isHit(kate.getMainPower());

	}

}
