#ifndef SYNC_H
#define SYNC_H

#include <QWidget>

class QGridLayout;
class QLabel;
class QLineEdit;
class QPushButton;
class QTextEdit;
class QVBoxLayout;

class Sync : public QWidget {
    Q_OBJECT

public:
    Sync();

private:
    QLabel *location1Label;
    QLineEdit *location1PathLineEdit;
    QPushButton *location1BrowseButton;
    QLabel *location2Label;
    QLineEdit *location2PathLineEdit;
    QPushButton *location2BrowseButton;
    QTextEdit *statusTextEdit;
    QPushButton *synchronizeButton;

    QVBoxLayout *mainLayout;
    QGridLayout *locationsLayout;
};

#endif
