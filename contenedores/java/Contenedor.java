import java.util.LinkedList;

/**
 * 
 * @author Dariel
 *
 * 
 */
public class Contenedor<T extends Guardable> extends Generico {
	protected LinkedList <T> contenido;
	protected double capacidad;
	
	public Contenedor(double vol){
		this.volumen = vol;
		this.capacidad = this.volumen;
		contenido = new LinkedList<T>();
	}
	public boolean guardar(T elemento){
		if(elemento.getVol()<=this.capacidad){
			this.capacidad -= elemento.getVol();
			this.contenido.add(elemento);
			return true;
		}else{
			return false;
		}
	}
}
