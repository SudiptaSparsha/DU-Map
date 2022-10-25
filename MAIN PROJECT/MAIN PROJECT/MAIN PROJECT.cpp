// MAIN PROJECT.cpp : Defines the entry point for the console application.
//

/*
	Our Project is DU map view	
*/
# include "iGraphics.h"
int part=0,location=0;

void iDraw()
{
	if(part==0){
		iClear();
		iSetColor(0,0,100);
		iFilledRectangle(0,0,1300,700);
		iShowBMP(400,100,"LOGO.BMP");
		iSetColor(255,255,0);
		iText(500,630,"WELCOME TO UNIVERSITY OF DHAKA");
		iSetColor(200,200,200);
		iText(520,40,"CLICK TO SEE THE MAP");
		
	}


	if(part==1){
		iClear();
		iSetColor(29,29,29);
		iFilledRectangle(0,0,1300,700);
		iShowBMP(200,70,"du map.BMP");
		iSetColor(0,255,255);
		iText(500,680,"MAP OF UNIVERSITY OF DHAKA");
		iSetColor(255,255,0);
		iText(0,680,"CLICK WHICH PLACE YOU WANT TO SEE");
		iText(0,660,"BY CLICKING YOU WILL ZOOM THE MAP");
		
	}
	if(part==100){
		//Upper map
		iClear();
		iSetColor(29,29,29);
		iFilledRectangle(0,0,1300,700);
		iShowBMP(200,70,"Upper.BMP");
		iSetColor(255,255,0);
		iText(0,680,"CLICK WHICH PLACE YOU WANT TO KNOW ABOUT");
		iText(0,10,"PRESS B TO BACK TO THE MAIN MAP");

		
	}
	if(part==101){
		//lower left
		iClear();
		iSetColor(29,29,29);
		iFilledRectangle(0,0,1300,700);
		iShowBMP(200,70,"lower left.BMP");
		iSetColor(255,255,0);
		iText(0,680,"CLICK WHICH PLACE YOU WANT TO KNOW ABOUT");
		iText(0,10,"PRESS B TO BACK TO THE MAIN MAP");

	}
	if(part==102){
		//lower map
		iClear();
		iSetColor(29,29,29);
		iFilledRectangle(0,0,1300,700);
		iShowBMP(200,70,"lower.BMP");
		iSetColor(255,255,0);
		iText(0,680,"CLICK WHICH PLACE YOU WANT TO KNOW ABOUT");
		iText(0,10,"PRESS B TO BACK TO THE MAIN MAP");

	}
	if(part==103){
		//lower right
		iClear();
		iSetColor(29,29,29);
		iFilledRectangle(0,0,1300,700);
		iShowBMP(200,70,"lower right.BMP");
		iSetColor(255,255,0);
		iText(0,680,"CLICK WHICH PLACE YOU WANT TO KNOW ABOUT");
		iText(0,10,"PRESS B TO BACK TO THE MAIN MAP");

	}

	if(part==2){
		iClear();
		iSetColor(0,255,255);
		iText(500,680,"It's part TWO");
		
	}

	if(part==3){
		iClear();
		iSetColor(0,255,255);
		iText(500,680,"It's part THREE");
		
	}

	if(part==4){
		iClear();
		iSetColor(0,255,255);
		iText(500,680,"It's part FOUR");
		
	}

	if(part==5){
		iClear();
		iSetColor(0,255,255);
		iText(500,680,"It's part FIVE");
		
	}

	if(part==6){
		iClear();
		iSetColor(0,255,255);
		iText(500,680,"It's part SIX");
		
	}

	if(part==7){
		iClear();
		iSetColor(0,255,255);
		iText(500,680,"It's part SEVEN");
		
	}

	if(part==8){
		iClear();
		iSetColor(0,255,255);
		iText(500,680,"It's part Eight");
		
	}

	if(part==9){
		iClear();
		iSetColor(0,255,255);
		iText(500,680,"It's part Nine");
		
	}

	if(part==10){
		iClear();
		iSetColor(0,255,255);
		iText(500,680,"It's part TEN");
		
	}

	if(part==11){
		iClear();
		iSetColor(0,255,255);
		iText(500,680,"It's part ELEVEN");
		
	}

	if(part==12){
		iClear();
		iSetColor(0,255,255);
		iText(500,680,"It's part TWELVE");
		
	}

	if(part==13){
		iClear();
		iSetColor(0,255,255);
		iText(500,680,"It's part THIRTEEN");
		
	}

	if(part==14){
		iClear();
		iSetColor(0,255,255);
		iText(500,680,"It's part FOURTEEN");
		
	}

	if(part==15){
		iClear();
		iSetColor(0,255,255);
		iText(500,680,"It's part FIFTEEN");
		
	}

	if(part==16){
		iClear();
		iSetColor(0,255,255);
		iText(500,680,"It's part SIXTEEN");
		
	}

	if(part==17){
		iClear();
		iSetColor(0,255,255);
		iText(500,680,"It's part SEVENTEEN");
		
	}

	if(part==18){
		iClear();
		iSetColor(0,255,255);
		iText(500,680,"It's part EIGHTEEN");
		
	}

	if(part==19){
		iClear();
		iSetColor(0,255,255);
		iText(500,680,"It's part NINETEEN");
		
	}

}

/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/

void iMouseMove(int mx, int my)
{
	
}

/* 
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(part==0) part =1;
		else if(part == 1){
			if(mx<=900&&my>=400) part=100;//upper map
			if(mx<=700&&my<=400) part =101;//lower left
			if(mx>700 &&mx<=1050 &&my<400) part=102; //lower map
			if(mx>1050&&my<300) part=103; //lower right
		}
		
		/*if(mx<=200&&my<=200) part=2;
		if(mx<=200&&my>=200&&my<=400) part=3;
		if(mx<=200&&my>=400&& my<=600) part=4;
		if(mx>=200&& mx<=400&&my<=200) part=5;
		if(mx>=200&& mx<=400&&my>=200&& my<=400) part=6;
		if(mx>=200&& mx<=400&&my>=400&& my<=600) part=7;
		if(mx>=400&& mx<=600&&my<=200) part=8;
		if(mx>=400&& mx<=600&&my>=200&& my<=400) part=9;
		if(mx>=400&& mx<=600&&my>=400&& my<=600) part=10;
		if(mx>=600&& mx<=800&&my<=200) part=11;
		if(mx>=600&& mx<=800&&my>=200&& my<=400) part=12;
		if(mx>=600&& mx<=800&&my>=400&& my<=600) part=13;
		if(mx>=800&& mx<=1000&&my<=200) part=14;
		if(mx>=800&& mx<=1000&&my>=200&& my<=400) part=15;
		if(mx>=800&& mx<=1000&&my>=400&& my<=600) part=16;
		if(mx>=1000&& mx<=1200&&my<=200) part=17;
		if(mx>=1000&& mx<=1200&&my>=200&& my<=400) part=18;
		if(mx>=1000&& mx<=1200&&my>=400&& my<=600) part=19;*/
	
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	if(key == 'b')
	{
		 part=1;
		
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use 
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, 
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, 
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, 
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT 
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}
	//place your codes for other keys here
}

int main()
{
	//place your own initialization codes here. 
	iInitialize(1300, 700, "DU MAP");
	return 0;
}	