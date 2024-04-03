#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include <main.h>
#include <gui/morpion_screen/MorpionView.hpp>

extern char upd_screen;
extern Croix* Croix[5];
extern Cercle* Cercle[4];
extern int turn;

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
	if(upd_screen==1){
		upd_screen=0;
		Croix[turn/2]->invalidate();
		Cercle[turn/2]->invalidate();
	}
	if(upd_screen==10){
		upd_screen=0;
		for(int i=0;i<4;i++){
			Croix[i]->invalidate();
			Cercle[i]->invalidate();
		}
		Croix[4]->invalidate();
	}
}
