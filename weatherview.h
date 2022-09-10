#ifndef CWEATHERVIEW_H
#define CWEATHERVIEW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class CWeatherView; }
QT_END_NAMESPACE

class CWeatherView : public QWidget
{
    Q_OBJECT

public:
    CWeatherView(QWidget *parent = nullptr);
    ~CWeatherView();

private:
    Ui::CWeatherView *ui;
};
#endif // CWEATHERVIEW_H
