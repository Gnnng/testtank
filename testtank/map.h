#ifndef PRINT_H
#define PRINT_H

#define WINX 800
#define WINY 600
#define MAXEXISTTIME 500
#define Pi 3.1415926

typedef enum{
	NOPE,
	WALL,
	TANK,
	LASER,
	TANKBODY
} nodeObj;

typedef struct _nodeClass{
	// the type of the map
	// x,y;
	nodeObj obj;
	int id;
} nodeClass;

extern nodeClass map[WINX+1][WINY+1];
extern int counter;
extern int dx[];
extern int dy[];

//already done
void printTank(nodeClass *);
void printLaser(int i);
void printMap(int );
void printWall();
//remaing build
void setWall(int fx,int fy,int tx,int ty);
void setLongWall(int n,int *xset,int *yset);
//remaing remove
void initMap();
#endif