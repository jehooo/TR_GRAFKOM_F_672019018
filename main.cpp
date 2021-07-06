//MOUSE & KEYBOARD

// Universitas Groningen Belanda

// Jehosaphat Adelar H        - 672019001
// Adar Kirenias              - 672019018
// Albertus Raditya Danang    - 672019263

// :)

// :**

#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

void init(void);
void tampil(void);
void mouse(int button, int state, int x, int y);
void keyboard(unsigned char, int, int);
void ukuran (int, int);
void mouseMotion(int x, int y);

float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool  mouseDown = false;
int is_depth;

int main (int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1500, 1000);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Universtitas Groningen Belanda");
	init();
	glutDisplayFunc(tampil);
	glutReshapeFunc(ukuran);

	glutMouseFunc(mouse);
	glutMotionFunc(mouseMotion);
	glutKeyboardFunc(keyboard);

	glutIdleFunc(tampil);
	glutMainLoop();
	return 0;
}

void init(void)
{
	glClearColor(0.5, 1.1, 1.1, 0.0);
	glMatrixMode(GL_PROJECTION);
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);
	is_depth=1;
	glMatrixMode(GL_MODELVIEW);
	glPointSize(9.0);
	glLineWidth(3.0f);
}

void tampil(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    //Pembatas 0 Tengah- Tengah
    glBegin(GL_LINES);
        glVertex2f(0,80);
        glVertex2f(0,-50);
    glEnd();

	float z=-3.5;

for(int a=1; a>=-1; a-=2){

      //Garis Jendela Balkon
    glBegin(GL_LINES);
    glColor3f(0.8274509803921569, 0.8274509803921569, 0.8274509803921569);     // WARNA ABU MUDA
    int  l5 = -99;
    for (int w = 0; w<=29; w++){
        glColor3f(1.0,1.0,1.0);
        glVertex3f(l5 *a, 53, 5.0);
        glVertex3f(l5 *a, 47, 5.0);
        l5 += 1.7;
    }
    glEnd();


    //Garis Jendela Tembok Kiri
    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    //Jendela 1
        //Atas
        //Garis Vertikal
        glVertex3f(-48 *a, 37, 5.0);
        glVertex3f(-48 *a, 19, 5.0);
        glVertex3f(-52.0 *a, 37, 5.0);
        glVertex3f(-52.0 *a, 19, 5.0);

        //Garis Horizontal
        glVertex3f(-45 *a, 25, 5.0);
        glVertex3f(-55 *a, 25, 5.0);
        glVertex3f(-45.0 *a, 31, 5.0);
        glVertex3f(-55.0 *a, 31, 5.0);


        //Bawah
        //Garis Vertikal
            glVertex3f(-48 *a, -7, 5.0);
            glVertex3f(-48 *a, 11, 5.0);
            glVertex3f(-52.0 *a, -7, 5.0);
            glVertex3f(-52.0 *a, 11, 5.0);

        //Garis Horizontal
            glVertex3f(-45 *a, -1, 5.0);
            glVertex3f(-55 *a, -1, 5.0);
            glVertex3f(-45.0 *a, 5, 5.0);
            glVertex3f(-55.0 *a, 5, 5.0);

    //Jendela 2
        //Atas
        //Garis Vertikal
        glVertex3f(-63 *a, 37, 5.0);
        glVertex3f(-63 *a, 19, 5.0);
        glVertex3f(-67.0 *a, 37, 5.0);
        glVertex3f(-67.0 *a, 19, 5.0);

        //Garis Horizontal
        glVertex3f(-75 *a, 25, 5.0);
        glVertex3f(-85 *a, 25, 5.0);
        glVertex3f(-75.0 *a, 31, 5.0);
        glVertex3f(-85.0 *a, 31, 5.0);

        //Bawah
        //Garis Vertikal
            glVertex3f(-63 *a, -7, 5.0);
            glVertex3f(-63 *a, 11, 5.0);
            glVertex3f(-67.0 *a, -7, 5.0);
            glVertex3f(-67.0 *a, 11, 5.0);

        //Garis Horizontal
            glVertex3f(-75 *a, -1, 5.0);
            glVertex3f(-85 *a, -1, 5.0);
            glVertex3f(-75.0 *a, 5, 5.0);
            glVertex3f(-85.0 *a, 5, 5.0);

    //Jendela 3
        //Atas
        //Garis Vertikal
        glVertex3f(-78 *a, 37, 5.0);
        glVertex3f(-78 *a, 19, 5.0);
        glVertex3f(-82.0 *a, 37, 5.0);
        glVertex3f(-82.0 *a, 19, 5.0);

        //Garis Horizontal
        glVertex3f(-60 *a, 25, 5.0);
        glVertex3f(-70 *a, 25, 5.0);
        glVertex3f(-60.0 *a, 31, 5.0);
        glVertex3f(-70.0 *a, 31, 5.0);

        //Bawah
        //Garis Vertikal
            glVertex3f(-78 *a, -7, 5.0);
            glVertex3f(-78 *a, 11, 5.0);
            glVertex3f(-82.0 *a, -7, 5.0);
            glVertex3f(-82.0 *a, 11, 5.0);

        //Garis Horizontal
            glVertex3f(-60 *a, -1, 5.0);
            glVertex3f(-70 *a, -1, 5.0);
            glVertex3f(-60.0 *a, 5, 5.0);
            glVertex3f(-70.0 *a, 5, 5.0);

     //Jendela 4
        //Atas
        //Garis Vertikal
        glVertex3f(-93 *a, 37, 5.0);
        glVertex3f(-93 *a, 19, 5.0);
        glVertex3f(-97.0 *a, 37, 5.0);
        glVertex3f(-97.0 *a, 19, 5.0);

        //Garis Horizontal
        glVertex3f(-90.0 *a, 25, 5.0);
        glVertex3f(-100.0 *a, 25, 5.0);
        glVertex3f(-90.0 *a, 31, 5.0);
        glVertex3f(-100.0 *a, 31, 5.0);

        //Bawah
        //Garis Vertikal
            glVertex3f(-93 *a, -7, 5.0);
            glVertex3f(-93 *a, 11, 5.0);
            glVertex3f(-97.0 *a, -7, 5.0);
            glVertex3f(-97.0 *a, 11, 5.0);

        //Garis Horizontal
            glVertex3f(-90 *a, -1, 5.0);
            glVertex3f(-100 *a, -1, 5.0);
            glVertex3f(-90.0 *a, 5, 5.0);
            glVertex3f(-100.0 *a, 5, 5.0);

        glEnd();

    //Garis Antar Pilar ke 2 dan 3
    glBegin(GL_LINES);
    glColor3f(0.8274509803921569, 0.8274509803921569, 0.8274509803921569);     // WARNA ABU MUDA
    int  x8 = (-32 + z)  * a;
    for (int w = 0; w<=4; w++){
        if(w==1) glColor3f(1.0,1.0,1.0);
        glVertex3f(x8, 0, 19.0);
        glVertex3f(x8, -8, 19.0);
        x8 += 1.5 * a;
    }
    glEnd();

    //Garis Jendela KIRI
    glBegin(GL_LINES);
    glColor3f(0.8274509803921569, 0.8274509803921569, 0.8274509803921569);     // WARNA ABU MUDA
    int  x9 = (-31 + z)  * a;
    for (int w = 0; w<=1; w++){
        glVertex3f(x9, 50, 19.0);
        glVertex3f(x9, 20, 19.0);
        x9 += 4.5 * a;
    }
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.8274509803921569, 0.8274509803921569, 0.8274509803921569);     // WARNA ABU MUDA
    int  y5 = 45;
    for (int w = 0; w<=3; w++){
        glVertex3f((-34 + z) * a, y5, 19.0);
        glVertex3f((-23 + z) * a, y5, 19.0);
        y5 -= 7;
    }
    glEnd();

    //Garis Jendela KANAN
    glBegin(GL_LINES);
    glColor3f(0.8274509803921569, 0.8274509803921569, 0.8274509803921569);     // WARNA ABU MUDA
    int  x10 = (-15 + z) * a;
    for (int w = 0; w<=1; w++){
        glVertex3f(x10, 50, 19.0);
        glVertex3f(x10, 20, 19.0);
        x10 += 4.5 * a;
    }
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.8274509803921569, 0.8274509803921569, 0.8274509803921569);     // WARNA ABU MUDA
    int  y6 = 45;
    for (int w = 0; w<=3; w++){
        glVertex3f((-18 + z) * a, y6, 19.0);
        glVertex3f((-7 + z) * a, y6, 19.0);
        y6 -= 7;
    }
    glEnd();

    //Garis Jendela TENGAH
    glBegin(GL_LINES);
    glColor3f(0.8274509803921569, 0.8274509803921569, 0.8274509803921569);     // WARNA ABU MUDA
    int  x13 = (1 + z) * a;
    for (int w = 0; w<=0; w++){
        glVertex3f(x13, 50, 19.0);
        glVertex3f(x13, 20, 19.0);
        x13 += 4.5 * a;
    }
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.8274509803921569, 0.8274509803921569, 0.8274509803921569);     // WARNA ABU MUDA
    int  y13 = 45;
    for (int w = 0; w<=3; w++){
        glVertex3f((-2 + z) * a, y13, 19.0);
        glVertex3f((5 + z) * a, y13, 19.0);
        y13 -= 7;
    }
    glEnd();

    //Pondasi
    //Tengah Utama
	glBegin(GL_QUADS);
	glColor3f(0.8274509803921569, 0.8274509803921569, 0.8274509803921569);     // WARNA ABU MUDA
	glVertex3f((0.0 + z) * a, -10.0, 20.0);
	glVertex3f((-40.0 + z) * a, -10.0, 20.0);
	glVertex3f((-40.0 + z) * a, -22.0, 20.0);
	glVertex3f((0.0 + z) * a, -22.0, 20.0);

	glColor3f(1.0, 1.0, 1.0);
	glVertex3f((0.0 + z) * a, -10.0, 20.0);
	glVertex3f((0.0 + z) * a, -10.0, 19.0);
	glVertex3f((-39 + z) * a, -10.0, 19.0);
	glVertex3f((-39 + z) * a, -10.0, 20.0);

	//Samping kiri kebelakang
    glColor3f(0.8274509803921569, 0.8274509803921569, 0.8274509803921569);     // WARNA ABU MUDA
	glVertex3f((-40.0 + z) * a, -10.0, 20.0);
	glVertex3f((-40.0 + z) * a, -22.0, 20.0);
	glVertex3f((-40.0 + z) * a, -22.0, 5.0);
	glVertex3f((-40.0 + z) * a, -10.0, 5.0);

	glColor3f(1.0, 1.0, 1.0);
    glVertex3f((-39.0 + z) * a, -10.0, 20.0);
	glVertex3f((-40.0 + z) * a, -10.0, 20.0);
	glVertex3f((-40.0 + z) * a, -10.0, 5.0);
	glVertex3f((-39.0 + z) * a, -10.0, 5.0);

	//Sebelah Kiri Tengah
	glColor3f(0.8274509803921569, 0.8274509803921569, 0.8274509803921569);     // WARNA ABU MUDA
	glVertex3f((-40.0 + z) * a, -10.0, 6.0);
	glVertex3f((-99.0 + z) * a, -10.0, 6.0);
	glVertex3f((-99.0 + z) * a, -22.0, 6.0);
	glVertex3f((-40.0 + z) * a, -22.0, 6.0);

	glColor3f(1.0, 1.0, 1.0);
    glVertex3f((-39.0 + z) * a, -10.0, 6.0);
	glVertex3f((-39.0 + z) * a, -10.0, 5.0);
	glVertex3f((-99.0 + z) * a, -10.0, 5.0);
	glVertex3f((-99.0 + z) * a, -10.0, 6.0);

	//Sebelah kiri maju dikit
    glColor3f(0.8274509803921569, 0.8274509803921569, 0.8274509803921569);     // WARNA ABU MUDA
	glVertex3f((-98.5 + z) * a, -10.0, 6.0);
	glVertex3f((-98.5 + z) * a, -22.0, 6.0);
	glVertex3f((-98.5 + z) * a, -22.0, 15.0);
	glVertex3f((-98.5 + z) * a, -10.0, 15.0);

	glColor3f(1.0, 1.0, 1.0);
	glVertex3f((-98.5 + z) * a, -10.0, 5.0);
	glVertex3f((-99.0 + z) * a, -10.0, 5.0);
	glVertex3f((-99.0 + z) * a, -10.0, 15.0);
	glVertex3f((-98.5 + z) * a, -10.0, 15.0);


	/*//Paling Kiri
    glColor3f(0.8274509803921569, 0.8274509803921569, 0.8274509803921569);     // WARNA ABU MUDA
	glVertex3f((-70.0 + z) * a, -10.0, 15.0);
	glVertex3f((-70.0 + z) * a, -22.0, 15.0);
	glVertex3f((-85.0 + z) * a, -22.0, 15.0);
	glVertex3f((-85.0 + z) * a, -10.0, 15.0);

    glColor3f(1.0, 1.0, 1.0);
	glVertex3f((-70.0 + z) * a, -10.0, 15.0);
	glVertex3f((-70.0 + z) * a, -10.0, 14.0);
	glVertex3f((-85.0 + z) * a, -10.0, 14.0);
	glVertex3f((-85.0 + z) * a, -10.0, 15.0);*/

	//Tembok Atas Kiri
	glColor3f(0.803921568627451, 0.3607843137254902, 0.3607843137254902);     // WARNA MERAH BATA
    glVertex3f((-39 + z) * a, 15.0, 19.0);
    glVertex3f((-39 + z) * a, 55.0, 19.0);
    glVertex3f((-39 + z) * a, 55.0, 5.0);
    glVertex3f((-39 + z) * a, 15.0, 5.0);

    //Tembok Atas Tengah
    glColor3f(0,0,0);     // WARNA MERAH BATA
    glVertex3f((-39 + z) * a, 15.0, 5.0);
    glVertex3f((5 + z) * a, 15.0, 5.0);
    glVertex3f((5 + z) * a, 55.0, 5.0);
    glVertex3f((-39 + z) * a, 55.0, 5.0);

	//Pilar Luar Sebelah Kiri
	glColor3f(0.803921568627451, 0.3607843137254902, 0.3607843137254902);     // WARNA MERAH BATA
	int i, x1 =-2, x2=-7;
	for (i = 0; i<=2; i++){
        if(i==1) glColor3f(1.0, 1.0, 1.0);
        glVertex3f((x1 + z) * a, -10.0, 19.0);
        glVertex3f((x2 + z) * a, -10.0, 19.0);
        glVertex3f((x2 + z) * a, 50.0, 19.0);
        glVertex3f((x1 + z) * a, 50.0, 19.0);

        //Tutup Pilar Bagian Belakang
        glVertex3f((x1 + z) * a, -10.0, 15.0);
        glVertex3f((x2 + z) * a, -10.0, 15.0);
        glVertex3f((x2 + z) * a, 15.0, 15.0);
        glVertex3f((x1 + z) * a, 15.0, 15.0);
        //Tembok Bagian 2
        glVertex3f((x1 + z) * a, -10.0, 5.0);
        glVertex3f((x2 + z) * a, -10.0, 5.0);
        glVertex3f((x2 + z) * a, 15.0, 5.0);
        glVertex3f((x1 + z) * a, 15.0, 5.0);

        x1 -=16;
        x2 -=16;
	}

    //Tutup Pilar Sebelah Kiri
	glColor3f(0.803921568627451, 0.3607843137254902, 0.3607843137254902);     // WARNA MERAH BATA
	int x3 =-7;
	for (i = 0; i<=2; i++){
        glVertex3f((x3 + z) * a, -10.0, 19.0);
        glVertex3f((x3 + z) * a, -10.0, 15.0);
        glVertex3f((x3 + z) * a, 15.0, 15.0);
        glVertex3f((x3 + z) * a, 15.0, 19.0);
        x3 -=16;
	}

	//Tutup Pilar Sebelah Kanan
    glColor3f(0.803921568627451, 0.3607843137254902, 0.3607843137254902);     // WARNA MERAH BATA
	int x4 =-2;
	for (i = 0; i<=2; i++){
        glVertex3f((x4 + z) * a, -10.0, 19.0);
        glVertex3f((x4 + z) * a, -10.0, 15.0);
        glVertex3f((x4 + z) * a, 15.0, 15.0);
        glVertex3f((x4 + z) * a, 15.0, 19.0);
        x4 -=16;
	}


	//Anak Tangga
	glColor3f(0.4117647058823529, 0.4117647058823529, 0.4117647058823529);     // WARNA ABU TUA
	float x5 =(-20 + z)  * a, x6= (-16  + z) * a, y1 = -10  ,y2= -12 , z1= 20 , z2=30;
	for (i = 0; i<=5; i++){
        glVertex3f(x5, y1, z1);
        glVertex3f(x5, y2, z1);
        glVertex3f(x6, y2, z2);
        glVertex3f(x6, y1, z2);
        x5 -= 2 * a;
        x6 -= 1.5 * a;
        y1 -= 2;
        y2 -= 2;
//        z1 += 2;
        z2 += 2;
	}

    float  x7= (-16 + z) * a, y3 = -10  ,y4= -12 , z3= 30 , z4=20;
    for (i = 0; i<=5; i++){
        glVertex3f(x7, y3, z3);
        glVertex3f(0 + (1.5 * a), y3, z3);
        glVertex3f(0 + (1.5 * a), y4, z3);
        glVertex3f(x7, y4, z3);
        z3 += 2;
        y3 -= 2;
        y4 -= 2;
        x7 -= 1.5 * a;
    }
    for (i = 0; i<=5; i++){
        glColor3f(0.6627450980392157, 0.6627450980392157, 0.6627450980392157);     // WARNA ABU GELAP
        glVertex3f((-20 + z + (i*-2)) * a, -10 - (i*2), 20);
        glVertex3f(0 * a, -10 - (i*2), 20);
        glVertex3f(0 * a, -10 - (i*2), 30+(i*2));
        glVertex3f((-16 + z + (i*-1.5)) * a, -10 - (i*2), 30+(i*2));
    }

    //Pagar
    glColor3f(0.803921568627451, 0.3607843137254902, 0.3607843137254902);     // WARNA MERAH BATA
    glVertex3f((-23 + z) * a, 0, 20);
    glVertex3f((-34 + z) * a, 0, 20);
    glVertex3f((-34 + z) * a, 0, 17);
    glVertex3f((-23 + z) * a, 0, 17);

    glVertex3f((-23 + z) * a, 2, 20);
    glVertex3f((-34 + z) * a, 2, 20);
    glVertex3f((-34 + z) * a, 0, 20);
    glVertex3f((-23 + z) * a, 0, 20);

    glVertex3f((-23 + z) * a, 2, 17);
    glVertex3f((-34 + z) * a, 2, 17);
    glVertex3f((-34 + z) * a, 0, 17);
    glVertex3f((-23 + z) * a, 0, 17);

    glVertex3f((-23 + z) * a, 2, 20);
    glVertex3f((-34 + z) * a, 2, 20);
    glVertex3f((-34 + z) * a, 2, 17);
    glVertex3f((-23 + z) * a, 2, 17);

    //Bagian Bawah
    glVertex3f((-23 + z) * a, -10.1, 19.0);
    glVertex3f((-34 + z) * a, -10.1, 19.0);
    glVertex3f((-34 + z) * a, -10.1, 17);
    glVertex3f((-23 + z) * a, -10.1, 17);

    glVertex3f((-23 + z) * a, -10.1, 19.0);
    glVertex3f((-34 + z) * a, -10.1, 19.0);
    glVertex3f((-34 + z) * a, -8, 19.0);
    glVertex3f((-23 + z) * a, -8, 19.0);

    glVertex3f((-23 + z) * a, -10.1, 17.0);
    glVertex3f((-34 + z) * a, -10.1, 17.0);
    glVertex3f((-34 + z) * a, -8, 17.0);
    glVertex3f((-23 + z) * a, -8, 17.0);

    glVertex3f((-23 + z) * a, -8, 19.0);
    glVertex3f((-34 + z) * a, -8, 19.0);
    glVertex3f((-34 + z) * a, -8, 17);
    glVertex3f((-23 + z) * a, -8, 17);

    //Bangunan Pembatas Pilar Dan Jendela Atas
    glVertex3f((-39 + z) * a, 15, 19.0);
    glVertex3f((5 + z) * a, 15, 19.0);
    glVertex3f((5 + z) * a, 20, 19.0);
    glVertex3f((-39 + z) * a, 20, 19.0);

    glVertex3f((-39 + z) * a, 50, 19.0);
    glVertex3f((5 + z) * a, 50, 19.0);
    glVertex3f((5 + z) * a, 55, 19.0);
    glVertex3f((-39 + z) * a, 55, 19.0);

    //Jeho

    //Tembok Sebelah Kiri
    glColor3f(0.803921568627451, 0.3607843137254902, 0.3607843137254902);     // WARNA MERAH BATA
    float l1 = -42.5, l2 = -45;
    for(int i = 0; i<=7; i++){
        if (i %2 != 0){
        glVertex3f(l1 *a , -10.0, 5.0);
        glVertex3f(l2 *a, -10.0, 5.0);
        glVertex3f(l2 *a, 40.0, 5.0);
        glVertex3f(l1 *a, 40.0, 5.0);
        l1 -= 2.5;
        l2 -= 2.5;
        }
        else {
        glVertex3f(l1 *a , -10.0, 5.0);
        glVertex3f(l2 *a, -10.0, 5.0);
        glVertex3f(l2 *a, 40.0, 5.0);
        glVertex3f(l1 *a, 40.0, 5.0);
        l1 -= 12.5;
        l2 -= 12.5;
        }
    }

    //Pembatas Jendela Sebelah Kiri (Tengah)
       //Bawah
        glVertex3f(-45 *a ,-10.0, 5.0);
        glVertex3f(-102.5 *a, -10.0, 5.0);
        glVertex3f(-102.5 *a, -7.0, 5.0);
        glVertex3f(-45 *a, -7.0, 5.0);

    //Tengah
        glVertex3f(-45 *a ,11.0, 5.0);
        glVertex3f(-102.5 *a, 11.0, 5.0);
        glVertex3f(-102.5 *a, 19.0, 5.0);
        glVertex3f(-45 *a, 19.0, 5.0);

    //Atas
        glVertex3f(-42.5 *a ,45, 5.0);
        glVertex3f(-102.5 *a, 45.0, 5.0);
        glVertex3f(-102.5 *a, 37.0, 5.0);
        glVertex3f(-42.5 *a, 37.0, 5.0);




	// BANGUNAN ATAS UNIV ( BALKON )

    //Tembok balkon 1
    glColor3f(0.803921568627451, 0.3607843137254902, 0.3607843137254902);     // WARNA MERAH BATA
    glVertex3f((-19 + z) * a, 55.0, 19.0);
    glVertex3f((5 + z) * a, 55.0, 19.0);
    glVertex3f((5 + z) * a, 65.0, 19.0);
    glVertex3f((-19 + z) * a, 65.0, 19.0);

    //Tembok balkon 2
    glColor3f(0.803921568627451, 0.3607843137254902, 0.3607843137254902);     // WARNA MERAH BATA
    glVertex3f((-12 + z) * a, 65.0, 19.0);
    glVertex3f((-2 + z) * a, 65.0, 19.0);
    glVertex3f((-2 + z) * a, 85.0, 19.0);
    glVertex3f((-12 + z) * a, 85.0, 19.0);

    //Tembok balkon 2 ( TRAPESIUM )
    glColor3f(0.803921568627451, 0.3607843137254902, 0.3607843137254902);     // WARNA MERAH BATA
    glVertex3f((-17 + z) * a, 65.0, 19.0);
    glVertex3f((-2 + z) * a, 65.0, 19.0);
    glVertex3f((-2 + z) * a, 80.0, 19.0);
    glVertex3f((-12 + z) * a, 80.0, 19.0);

    //Tembok balkon 3
    glColor3f(0.803921568627451, 0.3607843137254902, 0.3607843137254902);     // WARNA MERAH BATA
    glVertex3f((-5 + z) * a, 80.0, 19.0);
    glVertex3f((5 + z) * a, 80.0, 19.0);
    glVertex3f((5 + z) * a, 100.0, 19.0);
    glVertex3f((-5 + z) * a, 100.0, 19.0);

    //Tembok balkon 3 ( TRAPESIUM )
    glColor3f(0.803921568627451, 0.3607843137254902, 0.3607843137254902);     // WARNA MERAH BATA
    glVertex3f((-8 + z) * a, 85.0, 19.0);
    glVertex3f((5 + z) * a, 85.0, 19.0);
    glVertex3f((5 + z) * a, 95.0, 19.0);
    glVertex3f((-5 + z) * a, 95.0, 19.0);

    //Tembok balkon 4
    glColor3f(0.803921568627451, 0.3607843137254902, 0.3607843137254902);     // WARNA MERAH BATA
    glVertex3f((1 + z) * a, 95.0, 19.0);
    glVertex3f((5 + z) * a, 95.0, 19.0);
    glVertex3f((5 + z) * a, 115.0, 19.0);
    glVertex3f((1 + z) * a, 115.0, 19.0);

    //Tembok balkon 4 ( TRAPESIUM )
    glColor3f(0.803921568627451, 0.3607843137254902, 0.3607843137254902);     // WARNA MERAH BATA
    glVertex3f((-3 + z) * a, 95.0, 19.0);
    glVertex3f((5 + z) * a, 95.0, 19.0);
    glVertex3f((5 + z) * a, 110.0, 19.0);
    glVertex3f((1 + z) * a, 110.0, 19.0);

    //Pagar atas balkon ( ATAS )
    glColor3f(0.6470588235294118, 0.1647058823529412, 0.1647058823529412);     // WARNA COKLAT
    glVertex3f((-21 + z) * a, 63, 19);
    glVertex3f((-39 + z) * a, 63, 19);
    glVertex3f((-39 + z) * a, 63, 17);
    glVertex3f((-21 + z) * a, 63, 17);

    glVertex3f((-21 + z) * a, 65, 19);
    glVertex3f((-37 + z) * a, 65, 19);
    glVertex3f((-37 + z) * a, 63, 19);
    glVertex3f((-21 + z) * a, 63, 19);

	glVertex3f((-21 + z) * a, 65, 17);
    glVertex3f((-37 + z) * a, 65, 17);
    glVertex3f((-37 + z) * a, 63, 17);
    glVertex3f((-21 + z) * a, 63, 17);

    glVertex3f((-21 + z) * a, 65, 19);
    glVertex3f((-37 + z) * a, 65, 19);
    glVertex3f((-37 + z) * a, 65, 17);
    glVertex3f((-21 + z) * a, 65, 17);

    //Pagar atas balkon ( BAWAH )
    glColor3f(0.6470588235294118, 0.1647058823529412, 0.1647058823529412);     // WARNA COKLAT
    glVertex3f((-21 + z) * a, 55, 19);
    glVertex3f((-39 + z) * a, 55, 19);
    glVertex3f((-39 + z) * a, 55, 17);
    glVertex3f((-21 + z) * a, 55, 17);

    glVertex3f((-21 + z) * a, 57, 19);
    glVertex3f((-37 + z) * a, 57, 19);
    glVertex3f((-37 + z) * a, 55, 19);
    glVertex3f((-21 + z) * a, 55, 19);

    glVertex3f((-21 + z) * a, 57, 17);
    glVertex3f((-37 + z) * a, 57, 17);
    glVertex3f((-37 + z) * a, 55, 17);
    glVertex3f((-21 + z) * a, 55, 17);

    glVertex3f((-21 + z) * a, 57, 19);
    glVertex3f((-39 + z) * a, 57, 19);
    glVertex3f((-39 + z) * a, 57, 17);
    glVertex3f((-21 + z) * a, 57, 17);

	//PILAR KIRI

	//Pilar pagar KIRI
    glColor3f(0.5019607843137255,0,0);     // WARNA MERAH TUA
	glVertex3f((-37 + z) * a, 65, 19);
    glVertex3f((-39 + z) * a, 65, 19);
    glVertex3f((-39 + z) * a, 55, 19);
    glVertex3f((-37 + z) * a, 55, 19);

    glVertex3f((-37 + z) * a, 65, 17);
    glVertex3f((-39 + z) * a, 65, 17);
    glVertex3f((-39 + z) * a, 55, 17);
    glVertex3f((-37 + z) * a, 55, 17);

    //Tutup Pilar Pagar KIRI
	glColor3f(0.5019607843137255,0,0);     // WARNA MERAH TUA
    glVertex3f((-39 + z) * a, 55.0, 19.0);
    glVertex3f((-39 + z) * a, 65.0, 19.0);
    glVertex3f((-39 + z) * a, 65.0, 17.0);
    glVertex3f((-39 + z) * a, 55.0, 17.0);

    // ORNAMEN SEGI 3

    //Ornamen KIRI
	glColor3f(0.7176470588235294, 0.5254901960784314, 0.0431372549019608);     // WARNA BATANG EMAS
    glVertex3f((-39 + z) * a, 65.0, 19.0);
    glVertex3f((-38 + z) * a, 75.0, 18.0);
    glVertex3f((-38 + z) * a, 75.0, 18.0);
    glVertex3f((-39 + z) * a, 65.0, 17.0);

    glColor3f(0.7176470588235294, 0.5254901960784314, 0.0431372549019608);     // WARNA BATANG EMAS
    glVertex3f((-37 + z) * a, 65.0, 19.0);
    glVertex3f((-38 + z) * a, 75.0, 18.0);
    glVertex3f((-38 + z) * a, 75.0, 18.0);
    glVertex3f((-37 + z) * a, 65.0, 17.0);

    //Ornamen KANAN
    glColor3f(0.7176470588235294, 0.5254901960784314, 0.0431372549019608);     // WARNA BATANG EMAS
    glVertex3f((-21 + z) * a, 65.0, 19.0);
    glVertex3f((-20 + z) * a, 75.0, 18.0);
    glVertex3f((-20 + z) * a, 75.0, 18.0);
    glVertex3f((-21 + z) * a, 65.0, 17.0);

    glColor3f(0.7176470588235294, 0.5254901960784314, 0.0431372549019608);     // WARNA BATANG EMAS
    glVertex3f((-19 + z) * a, 65.0, 19.0);
    glVertex3f((-20 + z) * a, 75.0, 18.0);
    glVertex3f((-20 + z) * a, 75.0, 18.0);
    glVertex3f((-19 + z) * a, 65.0, 17.0);

    //Ornamen DEPAN
    glColor3f(0.7176470588235294, 0.5254901960784314, 0.0431372549019608);     // WARNA BATANG EMAS
	glVertex3f((-38 + z) * a, 75, 18);
    glVertex3f((-38 + z) * a, 75, 18);
    glVertex3f((-39 + z) * a, 65, 19);
    glVertex3f((-37 + z) * a, 65, 19);

    glColor3f(0.7176470588235294, 0.5254901960784314, 0.0431372549019608);     // WARNA BATANG EMAS
	glVertex3f((-38 + z) * a, 75, 18);
    glVertex3f((-38 + z) * a, 75, 18);
    glVertex3f((-39 + z) * a, 65, 19);
    glVertex3f((-37 + z) * a, 65, 19);

    //Tutup Pilar Pagar KANAN
	glColor3f(0.5019607843137255,0,0);     // WARNA MERAH TUA
    glVertex3f((-37 + z) * a, 55.0, 19.0);
    glVertex3f((-37 + z) * a, 65.0, 19.0);
    glVertex3f((-37 + z) * a, 65.0, 17.0);
    glVertex3f((-37 + z) * a, 55.0, 17.0);

    //Tutup Pilar Pagar ATAS
	glColor3f(0.5019607843137255,0,0);     // WARNA MERAH TUA
    glVertex3f((-37 + z) * a, 65, 19);
    glVertex3f((-39 + z) * a, 65, 19);
    glVertex3f((-39 + z) * a, 65, 17);
    glVertex3f((-37 + z) * a, 65, 17);

    //PILAR KANAN

    //Pilar pagar KANAN
    glColor3f(0.5019607843137255,0,0);     // WARNA MERAH TUA
	glVertex3f((-19 + z) * a, 65, 19);
    glVertex3f((-21 + z) * a, 65, 19);
    glVertex3f((-21 + z) * a, 55, 19);
    glVertex3f((-19 + z) * a, 55, 19);

    glVertex3f((-19 + z) * a, 65, 17);
    glVertex3f((-21 + z) * a, 65, 17);
    glVertex3f((-21 + z) * a, 55, 17);
    glVertex3f((-19 + z) * a, 55, 17);

    //Tutup Pilar Pagar KANAN
	glColor3f(0.5019607843137255,0,0);     // WARNA MERAH TUA
    glVertex3f((-19 + z) * a, 55.0, 19.0);
    glVertex3f((-19 + z) * a, 65.0, 19.0);
    glVertex3f((-19 + z) * a, 65.0, 17.0);
    glVertex3f((-19 + z) * a, 55.0, 17.0);

    //Tutup Pilar Pagar KIRI
	glColor3f(0.5019607843137255,0,0);     // WARNA MERAH TUA
    glVertex3f((-21 + z) * a, 55.0, 19.0);
    glVertex3f((-21 + z) * a, 65.0, 19.0);
    glVertex3f((-21 + z) * a, 65.0, 17.0);
    glVertex3f((-21 + z) * a, 55.0, 17.0);

	//Tutup Pilar Pagar ATAS
	glColor3f(0.5019607843137255,0,0);     // WARNA MERAH TUA
    glVertex3f((-19 + z) * a, 65, 19);
    glVertex3f((-21 + z) * a, 65, 19);
    glVertex3f((-21 + z) * a, 65, 17);
    glVertex3f((-19 + z) * a, 65, 17);
    glEnd();

	//lantai balkon
	glBegin(GL_QUADS);
	glColor3f(0.6627450980392157, 0.6627450980392157, 0.6627450980392157);     // WARNA ABU GELAP
	glVertex3f((-39 + z) * a, 55.0, 17.0);
	glVertex3f((5 + z) * a, 55.0, 17.0);
	glVertex3f((5 + z) * a, 55.0, 5.0);
	glVertex3f((-39 + z) * a, 55.0, 5.0);
	glEnd();

	//lantai balkon
	glBegin(GL_QUADS);
	glColor3f(0.6627450980392157, 0.6627450980392157, 0.6627450980392157);     // WARNA ABU GELAP
	glVertex3f((-20 + z) * a, 55.0, 19.0);
	glVertex3f((5 + z) * a, 55.0, 19.0);
	glVertex3f((5 + z) * a, 55.0, 17.0);
	glVertex3f((-20 + z) * a, 55.0, 17.0);
	glEnd();

	//Garis Antar Tembok di atas balkon ( TENGAH HORISONTAL )
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex3f((5 + z) * a, 72, 19);
    glVertex3f((-2 + z) * a, 72, 19);
    glEnd();

    //Garis Antar Tembok di atas balkon ( TENGAH VERTIKAL )
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex3f((1 + z) * a, 65, 19);
    glVertex3f((1 + z) * a, 80, 19);
    glEnd();

    //Garis Antar Pilar di atas balkon 1 ( VERTIKAL )
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex3f((-23 + z) * a, 57, 18);
    glVertex3f((-23 + z) * a, 63, 18);
    glEnd();

    //Garis Antar Pilar di atas balkon 2 ( VERTIKAL )
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex3f((-25 + z) * a, 57, 18);
    glVertex3f((-25 + z) * a, 63, 18);
    glEnd();

    //Garis Antar Pilar di atas balkon 3 ( VERTIKAL )
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex3f((-27 + z) * a, 57, 18);
    glVertex3f((-27 + z) * a, 63, 18);
    glEnd();

    //Garis Antar Pilar di atas balkon 4 ( VERTIKAL )
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex3f((-29 + z) * a, 57, 18);
    glVertex3f((-29 + z) * a, 63, 18);
    glEnd();

    //Garis Antar Pilar di atas balkon 5 ( VERTIKAL )
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex3f((-31 + z) * a, 57, 18);
    glVertex3f((-31 + z) * a, 63, 18);
    glEnd();

	//Garis Antar Pilar di atas balkon 6 ( VERTIKAL )
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex3f((-33 + z) * a, 57, 18);
    glVertex3f((-33 + z) * a, 63, 18);
    glEnd();

    //Garis Antar Pilar di atas balkon 7 ( VERTIKAL )
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex3f((-35 + z) * a, 57, 18);
    glVertex3f((-35 + z) * a, 63, 18);
    glEnd();




    //Pembatas Jendela Sebelah Kiri (Tengah)
       //Bawah
        glVertex3f(-45 *a ,-10.0, 5.0);
        glVertex3f(-102.5 *a, -10.0, 5.0);
        glVertex3f(-102.5 *a, -7.0, 5.0);
        glVertex3f(-45 *a, -7.0, 5.0);

    //Tengah
        glVertex3f(-45 *a ,11.0, 5.0);
        glVertex3f(-102.5 *a, 11.0, 5.0);
        glVertex3f(-102.5 *a, 19.0, 5.0);
        glVertex3f(-45 *a, 19.0, 5.0);

    //Atas
        glVertex3f(-42.5 *a ,45, 5.0);
        glVertex3f(-102.5 *a, 45.0, 5.0);
        glVertex3f(-102.5 *a, 37.0, 5.0);
        glVertex3f(-42.5 *a, 37.0, 5.0);



	// BANGUNAN ATAS DANANG

    //danang
   //danang
    //bangunan pinggir kanan kiri
    glBegin(GL_QUADS);
    glColor3f(0.803921568627451, 0.3607843137254902, 0.3607843137254902);     // WARNA MERAH BATA
    glVertex3f((-99 + z) * a,-10, 5.0);
    glVertex3f((-99 + z) * a,-10, 15.0);
    glVertex3f((-99 + z) * a,45, 15.0);
    glVertex3f((-99 + z) * a,45, 5.0);

    glColor3f(0.803921568627451, 0.3607843137254902, 0.3607843137254902);     // WARNA MERAH BATA
    glVertex3f((-109 + z) * a,-10, 15.0);
    glVertex3f((-99 + z) * a,-10, 15.0);
    glVertex3f((-99 + z) * a,45, 15.0);
    glVertex3f((-109 + z) * a,45, 15.0);

    //Pondasi
    glColor3f(0.8274509803921569, 0.8274509803921569, 0.8274509803921569);
    glVertex3f((-109 + z) * a,-10, 15);
    glVertex3f((-98 + z) * a,-10, 15);
    glVertex3f((-98 + z) * a,-22, 15);
    glVertex3f((-109 + z) * a,-22, 15);

    glColor3f(0.803921568627451, 0.3607843137254902, 0.3607843137254902);     // WARNA MERAH BATA
    glVertex3f((-139 + z) * a,-10, 15.0);
    glVertex3f((-129 + z) * a,-10, 15.0);
    glVertex3f((-129 + z) * a,45, 15.0);
    glVertex3f((-139 + z) * a,45, 15.0);

    //Pondasi
    glColor3f(0.8274509803921569, 0.8274509803921569, 0.8274509803921569);
    glVertex3f((-139 + z) * a,-10, 15);
    glVertex3f((-129 + z) * a,-10, 15);
    glVertex3f((-129 + z) * a,-22, 15);
    glVertex3f((-139 + z) * a,-22, 15);


    //jendela 1
    glColor3f(0.803921568627451, 0.3607843137254902, 0.3607843137254902);     // WARNA MERAH BATA
    glVertex3f((-109 + z) * a,-10, 19.0);
    glVertex3f((-109 + z) * a,-10, 15.0);
    glVertex3f((-109 + z) * a,-7, 15.0);
    glVertex3f((-109 + z) * a,-7, 19.0);

    //Pondasi
    glColor3f(0.8274509803921569, 0.8274509803921569, 0.8274509803921569);
    glVertex3f((-109 + z) * a,-10, 19);
    glVertex3f((-109 + z) * a,-10, 15);
    glVertex3f((-109 + z) * a,-22, 15);
    glVertex3f((-109 + z) * a,-22, 19);

    glColor3f(1.0,0.0, 0.0);
    glVertex3f((-109 + z) * a,11, 19.0);
    glVertex3f((-109 + z) * a,11, 15.0);
    glVertex3f((-109 + z) * a,19, 15.0);
    glVertex3f((-109 + z) * a,19, 19.0);

    glColor3f(1.0,0.0, 0.0);
    glVertex3f((-109 + z) * a,37, 19.0);
    glVertex3f((-109 + z) * a,37, 15.0);
    glVertex3f((-109 + z) * a,40, 15.0);
    glVertex3f((-109 + z) * a,40, 19.0);
/*
    //atap jendela 1
    glColor3f(0.0,0.0, 1.0);
    glVertex3f((-109 + z) * a,40, 19.0);
    glVertex3f((-109 + z) * a,40, 15.0);
    glVertex3f((-109 + z +1.5) * a,41.5, 15.0);
    glVertex3f((-109 + z +1.5) * a,41.5, 19.0);

    glColor3f(0.0,0.0, 1.0);
    glVertex3f((-109 + z +1.5) * a,41.5, 19.0);
    glVertex3f((-109 + z +1.5) * a,41.5, 15.0);
    glVertex3f((-109 + z) * a,43, 15.0);
    glVertex3f((-109 + z) * a,43, 19.0);

    glColor3f(1.0,0.0, 0.0);
    glVertex3f((-114 + z) * a,43, 17.0);
    glVertex3f((-114 + z) * a,43, 15.0);
    glVertex3f((-114 + z +1.5) * a,44.5, 15.0);
    glVertex3f((-114 + z +1.5) * a,44.5, 17.0);

    glColor3f(1.0,0.0, 0.0);
    glVertex3f((-114 + z +1.5) * a,44.5, 17.0);
    glVertex3f((-114 + z +1.5) * a,44.5, 15.0);
    glVertex3f((-114 + z) * a,46.5, 15.0);
    glVertex3f((-114 + z) * a,46.5, 17.0);
*/

    //jendela 5
    glColor3f(0.803921568627451, 0.3607843137254902, 0.3607843137254902);     // WARNA MERAH BATA
    glVertex3f((-129 + z) * a,-10, 19.0);
    glVertex3f((-129 + z) * a,-10, 15.0);
    glVertex3f((-129 + z) * a,-7, 15.0);
    glVertex3f((-129 + z) * a,-7, 19.0);

    //Pondasi
    glColor3f(0.8274509803921569, 0.8274509803921569, 0.8274509803921569);
    glVertex3f((-129 + z) * a,-10, 19);
    glVertex3f((-129 + z) * a,-10, 15);
    glVertex3f((-129 + z) * a,-22, 15);
    glVertex3f((-129 + z) * a,-22, 19);

    glColor3f(1,0,0);
    glVertex3f((-129 + z) * a,11, 19.0);
    glVertex3f((-129 + z) * a,11, 15.0);
    glVertex3f((-129 + z) * a,19, 15.0);
    glVertex3f((-129 + z) * a,19, 19.0);

    glColor3f(1,0,0);
    glVertex3f((-129 + z) * a,37, 19.0);
    glVertex3f((-129 + z) * a,37, 15.0);
    glVertex3f((-129 + z) * a,40, 15.0);
    glVertex3f((-129 + z) * a,40, 19.0);
/*
    //atap jendela 5
    glColor3f(0.0,0.0, 1.0);
    glVertex3f((-129 + z) * a,40, 19.0);
    glVertex3f((-129 + z) * a,40, 15.0);
    glVertex3f((-129 + z -1.5) * a,41.5, 15.0);
    glVertex3f((-129 + z -1.5) * a,41.5, 19.0);

    glColor3f(0.0,0.0, 1.0);
    glVertex3f((-129 + z -1.5) * a,41.5, 19.0);
    glVertex3f((-129 + z -1.5) * a,41.5, 15.0);
    glVertex3f((-129 + z) * a,43, 15.0);
    glVertex3f((-129 + z) * a,43, 19.0);

    glColor3f(1.0,0.0, 0.0);
    glVertex3f((-124 + z) * a,43, 17.0);
    glVertex3f((-124 + z) * a,43, 15.0);
    glVertex3f((-124 + z -1.5) * a,44.5, 15.0);
    glVertex3f((-124 + z -1.5) * a,44.5, 17.0);

    glColor3f(1.0,0.0, 0.0);
    glVertex3f((-124 + z -1.5) * a,44.5, 17.0);
    glVertex3f((-124 + z -1.5) * a,44.5, 15.0);
    glVertex3f((-124 + z) * a,46.5, 15.0);
    glVertex3f((-124 + z) * a,46.5, 17.0);
*/
    //jendela 2
    glColor3f(0.803921568627451, 0.3607843137254902, 0.3607843137254902);     // WARNA MERAH BATA
    glVertex3f((-114 + z) * a,-10, 25.0);
    glVertex3f((-109 + z) * a,-10, 19.0);
    glVertex3f((-109 + z) * a,-7, 19.0);
    glVertex3f((-114 + z) * a,-7, 25.0);

    //Pondasi
    glColor3f(0.8274509803921569, 0.8274509803921569, 0.8274509803921569);
    glVertex3f((-114 + z) * a,-10, 25);
    glVertex3f((-109 + z) * a,-10, 19);
    glVertex3f((-109 + z) * a,-22, 19);
    glVertex3f((-114 + z) * a,-22, 25);

    glColor3f(0.7411764705882353, 0.7176470588235294, 0.4196078431372549);       // WARNA KHAKI
    glVertex3f((-114 + z) * a,-7, 25.0);
    glVertex3f((-109 + z) * a,-7, 19.0);
    glVertex3f((-109 + z) * a,11, 19.0);
    glVertex3f((-114 + z) * a,11, 25.0);

    glColor3f(1.0,0.0, 0.0);
    glVertex3f((-114 + z) * a,11, 25.0);
    glVertex3f((-109 + z) * a,11, 19.0);
    glVertex3f((-109 + z) * a,19, 19.0);
    glVertex3f((-114 + z) * a,19, 25.0);

    glColor3f(0.7411764705882353, 0.7176470588235294, 0.4196078431372549);       // WARNA KHAKI
    glVertex3f((-114 + z) * a,19, 25.0);
    glVertex3f((-109 + z) * a,19, 19.0);
    glVertex3f((-109 + z) * a,37, 19.0);
    glVertex3f((-114 + z) * a,37, 25.0);

    glColor3f(1.0,0.0, 0.0);
    glVertex3f((-114 + z) * a,37, 25.0);
    glVertex3f((-109 + z) * a,37, 19.0);
    glVertex3f((-109 + z) * a,40, 19.0);
    glVertex3f((-114 + z) * a,40, 25.0);

    //atap jendela 2
    glColor3f(0.7411764705882353, 0.7176470588235294, 0.4196078431372549);       // WARNA KHAKI
    glVertex3f((-109 + z) * a,40, 19.0);
    glVertex3f((-109 + z) * a,40, 19.0);
    glVertex3f((-109 + z +1.5) * a,41.5, 19.0);
    glVertex3f((-109 + z +1.5) * a,41.5, 19.0);

    glColor3f(0.7411764705882353, 0.7176470588235294, 0.4196078431372549);       // WARNA KHAKI
    glVertex3f((-109 + z +1.5) * a,41.5, 19.0);
    glVertex3f((-109 + z +1.5) * a,41.5, 19.0);
    glVertex3f((-109 + z) * a,43, 19.0);
    glVertex3f((-109 + z) * a,43, 19.0);

    //jendela 3
    glColor3f(0.803921568627451, 0.3607843137254902, 0.3607843137254902);     // WARNA MERAH BATA
    glVertex3f((-124 + z) * a,-10, 25.0);
    glVertex3f((-114 + z) * a,-10, 25.0);
    glVertex3f((-114 + z) * a,-7, 25.0);
    glVertex3f((-124 + z) * a,-7, 25.0);

    glColor3f(0.8274509803921569, 0.8274509803921569, 0.8274509803921569);
    glVertex3f((-124 + z) * a,-10, 25);
    glVertex3f((-114 + z) * a,-10, 25);
    glVertex3f((-114 + z) * a,-22, 25);
    glVertex3f((-124 + z) * a,-22, 25);

    glColor3f(1.0,0.0, 0.0);
    glVertex3f((-124 + z) * a,11, 25.0);
    glVertex3f((-114 + z) * a,11, 25.0);
    glVertex3f((-114 + z) * a,19, 25.0);
    glVertex3f((-124 + z) * a,19, 25.0);

    glColor3f(1.0,0.0, 0.0);
    glVertex3f((-124 + z) * a,37, 25.0);
    glVertex3f((-114 + z) * a,37, 25.0);
    glVertex3f((-114 + z) * a,40, 25.0);
    glVertex3f((-124 + z) * a,40, 25.0);

    //jendela 4
    glColor3f(0.803921568627451, 0.3607843137254902, 0.3607843137254902);     // WARNA MERAH BATA
    glVertex3f((-124 + z) * a,-10, 25.0);
    glVertex3f((-129 + z) * a,-10, 19.0);
    glVertex3f((-129 + z) * a,-7, 19.0);
    glVertex3f((-124 + z) * a,-7, 25.0);

    glColor3f(0.7411764705882353, 0.7176470588235294, 0.4196078431372549);       // WARNA KHAKI
    glVertex3f((-124 + z) * a,-7, 25.0);
    glVertex3f((-129 + z) * a,-7, 19.0);
    glVertex3f((-129 + z) * a,11, 19.0);
    glVertex3f((-124 + z) * a,11, 25.0);

    glColor3f(1.0,0.0, 0.0);
    glVertex3f((-124 + z) * a,11, 25.0);
    glVertex3f((-129 + z) * a,11, 19.0);
    glVertex3f((-129 + z) * a,19, 19.0);
    glVertex3f((-124 + z) * a,19, 25.0);

    glColor3f(0.7411764705882353, 0.7176470588235294, 0.4196078431372549);       // WARNA KHAKI
    glVertex3f((-124 + z) * a,19, 25.0);
    glVertex3f((-129 + z) * a,19, 19.0);
    glVertex3f((-129 + z) * a,37, 19.0);
    glVertex3f((-124 + z) * a,37, 25.0);

    glColor3f(1.0,0.0, 0.0);
    glVertex3f((-124 + z) * a,37, 25.0);
    glVertex3f((-129 + z) * a,37, 19.0);
    glVertex3f((-129 + z) * a,40, 19.0);
    glVertex3f((-124 + z) * a,40, 25.0);
    glEnd();

    //bingkai jendela 1
    for (i=0; i<=1; i++){
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0, 0.0);
    glVertex3f((-109 + z) * a,-7 + (i*26), 15.5);
    glVertex3f((-109 + z) * a,-7 + (i*26), 15.0);
    glVertex3f((-109 + z) * a,11 + (i*26), 15.0);
    glVertex3f((-109 + z) * a,11 + (i*26), 15.5);

    glVertex3f((-109 + z) * a,-7 + (i*26), 19.0);
    glVertex3f((-109 + z) * a,-7 + (i*26), 18.0);
    glVertex3f((-109 + z) * a,11 + (i*26), 18.0);
    glVertex3f((-109 + z) * a,11 + (i*26), 19.0);

    glVertex3f((-109 + z) * a,9 + (i*26), 19.0);
    glVertex3f((-109 + z) * a,9 + (i*26), 15.0);
    glVertex3f((-109 + z) * a,11 + (i*26), 15.0);
    glVertex3f((-109 + z) * a,11 + (i*26), 19.0);

    glVertex3f((-109 + z) * a,-7 + (i*26), 19.0);
    glVertex3f((-109 + z) * a,-7 + (i*26), 15.0);
    glVertex3f((-109 + z) * a,-6 + (i*26), 15.0);
    glVertex3f((-109 + z) * a,-6 + (i*26), 19.0);
	glEnd();


	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3f(1.0,0.0, 0.0);

	for (int j=0; j<=4; j++){
        glVertex3f((-109 + z) * a,-6+(j*+5) + (i*26), 15.5);
        glVertex3f((-109 + z) * a,-6+(j*+5) + (i*26), 18.0);
	}
	for (int j=0; j<=1; j++){
        glVertex3f((-109 + z) * a,-6 + (i*26), 15.5+(j*2.5));
        glVertex3f((-109 + z) * a,9 + (i*26), 15.5+(j*2.5));
	}

	glEnd();
    }

    //bingkai jendela 5
    for (i=0; i<=1; i++){
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0, 0.0);
    glVertex3f((-129 + z) * a,-7 + (i*26), 15.5);
    glVertex3f((-129 + z) * a,-7 + (i*26), 15.0);
    glVertex3f((-129 + z) * a,11 + (i*26), 15.0);
    glVertex3f((-129 + z) * a,11 + (i*26), 15.5);

    glVertex3f((-129 + z) * a,-7 + (i*26), 19.0);
    glVertex3f((-129 + z) * a,-7 + (i*26), 18.0);
    glVertex3f((-129 + z) * a,11 + (i*26), 18.0);
    glVertex3f((-129 + z) * a,11 + (i*26), 19.0);

    glVertex3f((-129 + z) * a,9 + (i*26), 19.0);
    glVertex3f((-129 + z) * a,9 + (i*26), 15.0);
    glVertex3f((-129 + z) * a,11 + (i*26), 15.0);
    glVertex3f((-129 + z) * a,11 + (i*26), 19.0);

    glVertex3f((-129 + z) * a,-7 + (i*26), 19.0);
    glVertex3f((-129 + z) * a,-7 + (i*26), 15.0);
    glVertex3f((-129 + z) * a,-6 + (i*26), 15.0);
    glVertex3f((-129 + z) * a,-6 + (i*26), 19.0);
	glEnd();


	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3f(1.0,0.0, 0.0);

	for (int j=0; j<=4; j++){
        glVertex3f((-129 + z) * a,-6+(j*+5) + (i*26), 15.5);
        glVertex3f((-129 + z) * a,-6+(j*+5) + (i*26), 18.0);
	}
	for (int j=0; j<=1; j++){
        glVertex3f((-129 + z) * a,-6 + (i*26), 15.5+(j*2.5));
        glVertex3f((-129 + z) * a,9 + (i*26), 15.5+(j*2.5));
	}

	glEnd();
    }

    //bingkai jendela 3
    for (i=0; i<=1; i++){
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0, 0.0);
    glVertex3f((-124 + z) * a,-7 + (i*26), 25.0);
    glVertex3f((-122 + z) * a,-7 + (i*26), 25.0);
    glVertex3f((-122 + z) * a,11 + (i*26), 25.0);
    glVertex3f((-124 + z) * a,11 + (i*26), 25.0);

    glVertex3f((-114 + z) * a,-7 + (i*26), 25.0);
    glVertex3f((-116 + z) * a,-7 + (i*26), 25.0);
    glVertex3f((-116 + z) * a,11 + (i*26), 25.0);
    glVertex3f((-114 + z) * a,11 + (i*26), 25.0);

    glVertex3f((-124 + z) * a,9 + (i*26), 25.0);
    glVertex3f((-114 + z) * a,9 + (i*26), 25.0);
    glVertex3f((-114 + z) * a,11 + (i*26), 25.0);
    glVertex3f((-124 + z) * a,11 + (i*26), 25.0);

    glVertex3f((-124 + z) * a,-7 + (i*26), 25.0);
    glVertex3f((-114 + z) * a,-7 + (i*26), 25.0);
    glVertex3f((-114 + z) * a,-6 + (i*26), 25.0);
    glVertex3f((-124 + z) * a,-6 + (i*26), 25.0);
	glEnd();


	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3f(1.0,0.0, 0.0);

	for (int j=0; j<=4; j++){
        glVertex3f((-122 + z) * a,-6+(j*+5) + (i*26), 25.0);
        glVertex3f((-116 + z) * a,-6+(j*+5) + (i*26), 25.0);
	}
	for (int j=0; j<=2; j++){
        glVertex3f((-122 + z + (j*3)) * a,-6 + (i*26), 25);
        glVertex3f((-122 + z + (j*3)) * a,9 + (i*26), 25);
	}

	glEnd();
    }

    //BALKON ATAS TEMBOK SEBELAH KIRI
     //Pagar atas balkon ( ATAS )
    glBegin(GL_QUADS);
    glColor3f(0.6470588235294118, 0.1647058823529412, 0.1647058823529412);     // WARNA COKLAT
    glVertex3f(-42.5 * a, 55, 5);
    glVertex3f(-100.0 * a, 55, 5);
    glVertex3f(-100.0  * a, 55, 3);
    glVertex3f(-42.5  * a, 55, 3);

    glVertex3f(-42.5 * a, 55, 5);
    glVertex3f(-100.0  * a, 55, 5);
    glVertex3f(-100.0  * a, 53, 5);
    glVertex3f(-42.5  * a, 53, 5);

    glVertex3f(-42.5 * a, 55, 3);
    glVertex3f(-100.0  * a, 55, 3);
    glVertex3f(-100.0  * a, 53, 3);
    glVertex3f(-42.5  * a, 53, 3);

    glVertex3f(-42.5 * a, 53, 5);
    glVertex3f(-100.0  * a, 53, 5);
    glVertex3f(-100.0  * a, 53, 3);
    glVertex3f(-42.5  * a, 53, 3);

    glEnd();
    //Pagar atas balkon ( BAWAH )
    glBegin(GL_QUADS);
    glColor3f(0.6470588235294118, 0.1647058823529412, 0.1647058823529412);     // WARNA COKLAT
    glVertex3f(-42.5 * a, 47, 5);
    glVertex3f(-100.0 * a, 47, 5);
    glVertex3f(-100.0  * a, 47, 3);
    glVertex3f(-42.5  * a, 47, 3);

    glVertex3f(-42.5 * a, 45, 5);
    glVertex3f(-100.0  * a, 45, 5);
    glVertex3f(-100.0  * a, 47, 5);
    glVertex3f(-42.5  * a, 47, 5);

    glVertex3f(-42.5 * a, 45, 3);
    glVertex3f(-100.0  * a, 45, 3);
    glVertex3f(-100.0  * a, 47, 3);
    glVertex3f(-42.5  * a, 47, 3);

    glVertex3f(-42.5 * a, 45, 5);
    glVertex3f(-100.0  * a, 45, 5);
    glVertex3f(-100.0  * a, 45, 3);
    glVertex3f(-42.5  * a, 45, 3);

    glEnd();

	//PILAR KIRI

	//Pilar pagar KIRI
	glBegin(GL_QUADS);
    glColor3f(0.5019607843137255,0,0);     // WARNA MERAH TUA
    //Pilar 1
	//Depan
	glVertex3f(-100.0  * a, 45, 5);
    glVertex3f(-101.5  * a, 45, 5);
    glVertex3f(-101.5 * a, 65, 5);
    glVertex3f(-100.0 * a, 65, 5);

    //Belakang
    glVertex3f(-100.0  * a, 45, 3);
    glVertex3f(-101.5  * a, 45, 3);
    glVertex3f(-101.5 * a, 65, 3);
    glVertex3f(-100.0 * a, 65, 3);

    //Kiri
  	glVertex3f(-101.5  * a, 45, 5);
    glVertex3f(-101.5  * a, 45, 3);
    glVertex3f(-101.5 * a, 65, 3);
    glVertex3f(-101.5 * a, 65, 5);

    //Kanan
    glVertex3f(-100.0  * a, 45, 5);
    glVertex3f(-100.0  * a, 45, 3);
    glVertex3f(-100.0 * a, 65, 3);
    glVertex3f(-100.0 * a, 65, 5);

    //Pilar 2
    //Depan
	glVertex3f(-57.0  * a, 45, 5);
    glVertex3f(-58.5  * a, 45, 5);
    glVertex3f(-58.5 * a, 65, 5);
    glVertex3f(-57.0 * a, 65, 5);

    //Belakang
    glVertex3f(-57.0  * a, 45, 3);
    glVertex3f(-58.5  * a, 45, 3);
    glVertex3f(-58.5 * a, 65, 3);
    glVertex3f(-57.0 * a, 65, 3);

    //Kiri
  	glVertex3f(-58.5  * a, 45, 5);
    glVertex3f(-58.5  * a, 45, 3);
    glVertex3f(-58.5 * a, 65, 3);
    glVertex3f(-58.5 * a, 65, 5);

    //Kanan
    glVertex3f(-57.0  * a, 45, 5);
    glVertex3f(-57.0  * a, 45, 3);
    glVertex3f(-57.0 * a, 65, 3);
    glVertex3f(-57.0 * a, 65, 5);

    //Pilar 3
    //Depan
	glVertex3f(-72.0  * a, 45, 5);
    glVertex3f(-73.5  * a, 45, 5);
    glVertex3f(-73.5 * a, 65, 5);
    glVertex3f(-72.0 * a, 65, 5);

    //Belakang
    glVertex3f(-72.0  * a, 45, 3);
    glVertex3f(-73.5  * a, 45, 3);
    glVertex3f(-73.5 * a, 65, 3);
    glVertex3f(-72.0 * a, 65, 3);

    //Kiri
  	glVertex3f(-73.5  * a, 45, 5);
    glVertex3f(-73.5  * a, 45, 3);
    glVertex3f(-73.5 * a, 65, 3);
    glVertex3f(-73.5 * a, 65, 5);

    //Kanan
    glVertex3f(-72.0  * a, 45, 5);
    glVertex3f(-72.0  * a, 45, 3);
    glVertex3f(-72.0 * a, 65, 3);
    glVertex3f(-72.0 * a, 65, 5);

    //Pilar 4
    //Depan
	glVertex3f(-85.0  * a, 45, 5);
    glVertex3f(-86.5  * a, 45, 5);
    glVertex3f(-86.5 * a, 65, 5);
    glVertex3f(-85.0 * a, 65, 5);

    //Belakang
    glVertex3f(-85.0 * a, 45, 3);
    glVertex3f(-86.5  * a, 45, 3);
    glVertex3f(-86.5 * a, 65, 3);
    glVertex3f(-85.0* a, 65, 3);

    //Kiri
  	glVertex3f(-86.5   * a, 45, 5);
    glVertex3f(-86.5   * a, 45, 3);
    glVertex3f(-86.5  * a, 65, 3);
    glVertex3f(-86.5  * a, 65, 5);

    //Kanan
    glVertex3f(-85.0  * a, 45, 5);
    glVertex3f(-85.0  * a, 45, 3);
    glVertex3f(-85.0* a, 65, 3);
    glVertex3f(-85.0 * a, 65, 5);


    glEnd();
    glBegin(GL_QUADS);
    glVertex3f(-110   * a, 5, -75);
    glVertex3f(-115   * a, 5, -75);
    glVertex3f(-115   * a, 5, -55);
    glVertex3f(-110   * a, 5, -55);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(-110   * a, 5, -75);
    glVertex3f(-110   * a, -10, -75);
    glVertex3f(-115   * a, 5, -70);
    glVertex3f(-115   * a, -10, -70);
    glVertex3f(-110   * a, 5, -60);
    glVertex3f(-110   * a, -10, -60);
    glVertex3f(-115   * a, 5, -55);
    glVertex3f(-115   * a, -10, -55);

    glEnd();

    //Papan Tulis
    glBegin(GL_QUADS);
    glColor3f(0.75, 0.75, 0.75);
    glVertex3f(-103   * a, 5, -80);
    glVertex3f(-103   * a, 5, -40);
    glVertex3f(-103   * a, 30, -40);
    glVertex3f(-103   * a, 30, -80);
    glEnd();

    //Kursi
    glBegin(GL_LINES);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(-120   * a, 5, -75);
    glVertex3f(-120   * a, -10, -75);
    glVertex3f(-122   * a, 5, -70);
    glVertex3f(-122   * a, -10, -70);
    glVertex3f(-120   * a, 5, -60);
    glVertex3f(-120   * a, -10, -60);
    glVertex3f(-122   * a, 5, -55);
    glVertex3f(-122   * a, -10, -55);

    glEnd();
    glBegin(GL_QUADS);
    glVertex3f(-120   * a, 5, -75);
    glVertex3f(-122   * a, 5, -75);
    glVertex3f(-122   * a, 5, -55);
    glVertex3f(-120   * a, 5, -55);
    glEnd();

    glEnd();


    //Lantai
    glBegin(GL_QUADS);
    glColor3f(0.75, 0.75, 0.75);
    glVertex3f(-160   * a, -20, -90);
    glVertex3f(5   * a, -20, -90);
    glVertex3f(5   * a, -20, 55);
    glVertex3f(-160   * a, -20, 55);


    //Tembok Paling Kiri
    glColor3f(0.803921568627451, 0.3607843137254902, 0.3607843137254902);     // WARNA MERAH BATA
    glVertex3f((-139 + z) * a,-10, -80.0);
    glVertex3f((-139 + z) * a,-10, 15.0);
    glVertex3f((-139 + z) * a,45, 15.0);
    glVertex3f((-139 + z) * a,45, -80.0);

    //Tembok Penutup Belakang
    glColor3f(0.803921568627451, 0.3607843137254902, 0.3607843137254902);
    glVertex3f((-139 + z) * a,-10, -80.0);
    glVertex3f((5 + z) * a,-10, -80.0);
    glVertex3f((5 + z) * a,45, -80.0);
    glVertex3f((-139 + z) * a,45, -80.0);

    //Tembok Kelas
    glColor3f(1.0, 1.0, 1.0);     // WARNA MERAH BATA
    glVertex3f((-99 + z) * a,-10, -80.0);
    glVertex3f((-99 + z) * a,-10, 15.0);
    glVertex3f((-99 + z) * a,45, 15.0);
    glVertex3f((-99 + z) * a,45, -80.0);


    glColor3f(0.0,1.0, 0.0);
    glVertex3f((-109 + z) * a,-10, 15.0);
    glVertex3f((-99 + z) * a,-10, 15.0);
    glVertex3f((-99 + z) * a,45, 15.0);
    glVertex3f((-109 + z) * a,45, 15.0);
    glEnd();

    // BANGUNAN ATAS DANANG

	// DINDING 1
	glBegin(GL_QUADS);
	glColor3f(0.803921568627451, 0.3607843137254902, 0.3607843137254902);     // WARNA MERAH BATA
    glVertex3f((-129 + z) * a,40, 15.0);
    glVertex3f((-109 + z) * a,40, 15.0);
    glVertex3f((-109 + z) * a,65, 15.0);
    glVertex3f((-129 + z) * a,65, 15.0);

	// DINDING 2
	glColor3f(0.803921568627451, 0.3607843137254902, 0.3607843137254902);     // WARNA MERAH BATA
    glVertex3f((-124 + z) * a,65, 15.0);
    glVertex3f((-114 + z) * a,65, 15.0);
    glVertex3f((-114 + z) * a,85, 15.0);
    glVertex3f((-124 + z) * a,85, 15.0);
    glEnd();





}
    glPushMatrix();
	glPopMatrix();

	glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y)
{
    if (is_depth)
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	else
	 glClear(GL_COLOR_BUFFER_BIT);
	switch (key)
	{
	case 'w':
	case 'W':
		glTranslatef(0.0, 0.0, 3.0);
		break;
	case 'd':
	case 'D':
		glTranslatef(3.0, 0.0, 0.0);
		break;
	case 's':
	case 'S':
		glTranslatef(0.0, 0.0, -3.0);
		break;
	case 'a':
	case 'A':
		glTranslatef(-3.0, 0.0, 0.0);
		break;
	case '7':
		glTranslatef(0.0, 3.0, 0.0);
		break;
	case '9':
		glTranslatef(0.0, -3.0, 0.0);
		break;
	case '2':
		glRotatef(2.0, 1.0, 0.0, 0.0);
		break;
	case '8':
		glRotatef(-2.0, 1.0, 0.0, 0.0);
		break;
	case '6':
		glRotatef(2.0, 0.0, 1.0, 0.0);
		break;
	case '4':
		glRotatef(-2.0, 0.0, 1.0, 0.0);
		break;
	case '1':
		glRotatef(2.0, 0.0, 0.0, 1.0);
		break;
	case '3':
		glRotatef(-2.0, 0.0, 0.0, 1.0);
		break;
	case '5':
		if (is_depth)
		{
			is_depth = 0;
			glDisable(GL_DEPTH_TEST);
		}
		else
		{
			is_depth = 1;
			glEnable(GL_DEPTH_TEST);
		}
	}
	tampil();
}

void idle()
{
    if (!mouseDown)
    {
        xrot += 0.3f;
        yrot += 0.4f;
    }
glutPostRedisplay();
}

void mouse (int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        mouseDown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    }
    else
    mouseDown = false;
}

void mouseMotion(int x, int y)
{
    glLoadIdentity();
    gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    glRotatef(xrot, 1.0f, 0.0f, 0.0f);
    glRotatef(yrot, 0.0f, 1.0f, 0.0f);
    glPushMatrix();
    if (mouseDown)
    {
        yrot = x - xdiff;
        xrot = y + ydiff;

        glutPostRedisplay();
    }
}

void ukuran(int lebar, int tinggi)
{
	if (tinggi == 0) tinggi = 1;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(105.0, lebar / tinggi, 5.0, 500.0);
	glTranslatef(0.0, -5.0, -150.0);
	glMatrixMode(GL_MODELVIEW);
}
