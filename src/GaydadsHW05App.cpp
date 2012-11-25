#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class GaydadsHW05App : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void GaydadsHW05App::setup()
{
}

void GaydadsHW05App::mouseDown( MouseEvent event )
{
}

void GaydadsHW05App::update()
{
}

void GaydadsHW05App::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_BASIC( GaydadsHW05App, RendererGl )
