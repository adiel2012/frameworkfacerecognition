#define _coreh
namespace core {

	class Rectangle{
	private:
		int x,y;
	public:
		int getX(){return x;};
		int getY(){return y;};
		void setX(int ax){ x=ax;}
		void setY(int ay){ y=ay;}
		Rectangle(int ax, int ay){x=ax; y=ay;}

	};

	class Iimage
	{

	};

	class IFaceRecognitor
	{
	public:
		int recognize(Iimage img, Rectangle rectangle) const;
	};

	class IFaceDetector{
	public:
		Rectangle* detect() const;
	};

	class ClassifiedImage{
		Iimage img;
		int _class;
	public:
		Iimage getIimage(){return img;}
		int getclass(){return _class;}
		void setIimage(Iimage value){ img = value;}
		void setclass(int value){_class=value;}
		ClassifiedImage(Iimage aimg,int a_class){img=aimg;_class=a_class;}
	};

	class IClassifiedImageProvoder{
		ClassifiedImage* getImages() const;
	};

}