#include "weatherview.h"
#include "ui_weatherview.h"

CWeatherView::CWeatherView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CWeatherView)
{
    ui->setupUi(this);
}

CWeatherView::~CWeatherView()
{
    delete ui;
}

