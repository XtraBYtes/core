// XtraBYtes - The Proof of Signature Blocktech Superchain - http://xtrabytes.global
// Copyright (c) 2017, Zoltan Szabo. All rights reserved.
// Copyright (c) 2017, XtraBYtes Founders and Developers ( see AUTHORS )
// Licensed under GNU General Public License Version 3 or later (the "GPL")

#ifndef OVERVIEWPAGE_H
#define OVERVIEWPAGE_H

#include <QDialog>

namespace Ui {
    class OverviewPage;
}

/** Overview ("home") page widget */
class OverviewPage : public QWidget
{
    Q_OBJECT

public:
    explicit OverviewPage(QWidget *parent = 0);
    ~OverviewPage();    

private:
    Ui::OverviewPage *ui;
    
public slots:    
    void UpdateOverviewPageContent();
    
};

#endif // OVERVIEWPAGE_H
