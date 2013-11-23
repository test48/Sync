#include <QApplication>

#include "Sync.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    Sync sync;
    sync.show();

    return app.exec();
}
