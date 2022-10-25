/*
	author: S. M. Shahriar Nirjon
	last modified: August 8, 2008
*/
# include "iGraphics.h"

int score=0,life=10,part=0;
int t=12000;
double showtime,bs=.01,ba=0.0006;
int ball_x=50.0, ball_y=900.0,rod_x=500,rod_y=0;
int a=0,b=255,c=0;
int dx, dy;
char showScore[1000],showTime[1000],showScore2[1000],LIFE[1000];
/* 
	function iDraw() is called again and again by the system.
*/

void iDraw()
{
	//place your drawing codes here	

	if(part==0)
	{
		iClear();
		iSetColor(0,0,100);
		iFilledRectangle(0,0,1300,700);
		iShowBMP(400,250,"name.bmp");
		iSetColor(255,255,0); //white button color
		iText(580,70,"CLICK TO PLAY");
		iText(100,70,"Avoid red balls");
		iText(900,70,"Collect balls before time");
	}
	
	else if(part==1)
	{

	iClear();
	
	iSetColor(a, b, c);
	iFilledCircle(ball_x, ball_y, 20);
	iSetColor(0,0,255);
	iFilledRectangle(rod_x,rod_y,200,15);
	
	iSetColor(255, 255, 255);
	iText(10, 680, "Press left and right arrow to move, p for pause, r for resume, END for exit.");
	sprintf_s(showScore,"SCORE : %d",score);
	sprintf_s(showTime,"TIME  : %0.2lfs",t/100.0);
	sprintf_s(LIFE,"LIFE  : %d",life);
	iText(50,650,showScore); // Show score
	iText(50,600,LIFE); // Show score
	iText(1140,650,showTime); // Show gameplayime
	}
	else if(part==3)
	{
		iClear();
		iSetColor(255,255,0); //white button color
		sprintf_s(showScore,"YOUR SCORE : %d",score);
		iText(600,350,showScore);
		iText(600,500,"Click To Play Again");
		iText(600,600,"Press end to exit");

	}

}


/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/* 
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
		if(part!=1)
		{
		score=0,life=10,part=0;
		t=12000;
		showtime,bs=.01,ba=0.0006;
		ball_x=50.0, ball_y=900.0,rod_x=500,rod_y=0;
		a=0,b=255,c=0;
		dy=4;
		showScore[1000],showTime[1000],showScore2[1000],LIFE[1000];
		}
		part=1;
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
	if(key == 'p')
	{
		//do something with 'q'
		iPauseTimer(0);
	}
	if(key == 'r')
	{
		iResumeTimer(0);
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
	if(key == GLUT_KEY_LEFT)
		{
			if(rod_x!=0) rod_x-=20; 
		}
	if(key == GLUT_KEY_RIGHT)
		{
			if(rod_x!=1100) rod_x+=20;
		}
	//place your codes for other keys here
}

void ballChange(){
	if(part==1)
	{
	ball_y -= dy; 
		if(ball_y < 0)
		{
			if(rod_x<=ball_x+20 && rod_x+200>=ball_x+20 && b==255) score++;
			else if(rod_x<=ball_x+20 && rod_x+200>=ball_x+20 && a==255) life--;
			else if((rod_x>ball_x+20 || rod_x+200<ball_x+20)&&b==255) life--;
			ball_y=1000;
			ball_x=100+rand()%800;
			if(ball_x%5==0) a=255,b=0;
			else a=0,b=255;
			if(score<=10) dy=8;
			else if(score<=15) dy=12;
			else if(score>15) dy=16;
		}

t-=2;
if(t==0) part=3;
else if(life==0) part=3;

	}
}

int main()
{
	//place your own initialization codes here. 
	iSetTimer(5, ballChange);
	dy = 4;
	iInitialize(1300, 700, "BallGame");
	return 0;
}	