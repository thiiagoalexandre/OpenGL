#include <windows.h>
#include <glut.h>




// Função callback chamada para fazer o desenho
void Desenha(void)
{

    // Limpa a janela de visualização com a cor de fundo especificada
    glClear(GL_COLOR_BUFFER_BIT);

    // Especifica que a cor corrente é vermelha
    //         R     G     B
    glColor3f(1.0f, 1.0f, 1.0f);

    // Frente 1 Torre
    glBegin(GL_QUADS);
    glVertex3f(-0.1, 0.0, 0.0);
    glVertex3f(0.1, 0.0, 0.0);
    glVertex3f(0.1, 0.8, 0.0);
    glVertex3f(-0.1, 0.8, 0.0);

    // Frente 2 Torre
    glVertex3f(0.6, 0.8, 0.0);
    glVertex3f(0.6, 1.1, 0.0);
    glVertex3f(-0.5, 1.1, 0.0);
    glVertex3f(-0.5, 0.8, 0.0);

    // Costas 1 Torre
    glVertex3f(-0.1, 0.0, 0.4);
    glVertex3f(0.1, 0.0, 0.4);
    glVertex3f(0.1, 0.8, 0.4);
    glVertex3f(-0.1, 0.8, 0.4);

    // Costas 2 Torre
    glVertex3f(0.6, 0.8, 0.4);
    glVertex3f(0.6, 1.0, 0.4);
    glVertex3f(-0.5, 1.0, 0.4);
    glVertex3f(-0.5, 0.8, 0.4);


    glEnd();

    // Executa os comandos OpenGL
    glFlush();
}

// Inicializa parâmetros de rendering
void Inicializa(void)
{
    // Define a cor de fundo da janela de visualização como preta
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}


// Programa Principal 
int main(void)
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("Torre Titãs");
    glutDisplayFunc(Desenha);
    Inicializa();
    glutMainLoop();
}