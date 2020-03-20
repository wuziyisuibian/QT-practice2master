#ifndef SCRIBBLEAREA_H
#define SCRIBBLEAREA_H

#include <QColor>
#include <QImage>
#include <QPoint>
#include <QWidget>
#include <QPrinter>
#include <QPrintDialog>

class ScribbleArea : public QWidget
{
    Q_OBJECT

public:
    ScribbleArea(QWidget *parent = 0);

    bool openImage(const QString &fileName);
    bool saveImage(const QString &fileName, const char *fileFormat);

    bool isModified() const { return modified; }

public slots:
    void clearImage();
    void print();

protected:
    void paintEvent(QPaintEvent *event);
    void resizeEvent(QResizeEvent *event);
    bool event(QEvent *event);

private:
    void resizeImage(QImage *image, const QSize &newSize);

    bool modified;
    QList<QColor> myPenColors;
    QImage image;
};

#endif // SCRIBBLEAREA_H
