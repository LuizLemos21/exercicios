package q15;

public class Celula {
	protected static int count = 0;
	public Celula() {
		count++;
	}
	
	 public static int getInstanceCount() {
	        return count;
	    }
	

}
