/**
 * 
 * @author Dariel
 *
 * 
 */
public class Camion {
	private Contenedor<Generico> contenido;
	protected double capacidad;
	
	public Camion(double cap){
	        this.capacidad = cap;
			this.contenido = new Contenedor<Generico>(cap);
	}  

	public boolean guardar(Generico elemento){
			return this.contenido.guardar(elemento);
	}	
}
