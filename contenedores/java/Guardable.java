/**
 * 
 * @author Dariel
 *
 * 
 */
public class Guardable {
	protected double volumen;
	protected String nombre;
	
	public Guardable(){}
	public Guardable(double vol, String name){
		this.volumen = vol;
		this.nombre = name;
		
	}
	public double getVol() {
		return this.volumen;
	}
	
}
