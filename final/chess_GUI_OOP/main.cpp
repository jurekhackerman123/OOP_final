#include "square.h"
#include "main_GUI.h"
#include "game.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QGridLayout>
#include <QFrame>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationDisplayName("Chess Game");
    // GUI kinda works like our Mainwindow here!
    // Remember this is the code for the Mainwindow:
    // Mainwindow w;
    // w.show();
    //
    GUI G;

    // Thats always how we visualize the scene. We make a new QGraphicsView(scene)
    QGraphicsScene* scene = G.getScene();



    QGraphicsView* view = new QGraphicsView(scene);


    // set fixed size for the Scene, so we don't have scrollbars
    // ChatGPT recommended this
    QRectF newSceneRect(0, 0, 480, 700);
    view->setSceneRect(newSceneRect);


    // Then we visualize the scene by calling view.show()!
    view->show();


    return a.exec();
}
