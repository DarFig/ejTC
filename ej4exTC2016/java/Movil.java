/*
*v2016-8-16
*
*/



public class Movil extends Dibujable{

	
	Movil(float _x, float _y, float _z){
		super(_x, _y, _z);
	}

	@Override
	public void update(float t){
		this.x +=t;
		this.y +=t;
		this.z +=t;
	}

}
