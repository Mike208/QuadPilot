/**
 ******************************************************************************
 *
 * @file       flashpage.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2012.
 * @addtogroup
 * @{
 * @addtogroup FlashPage
 * @{
 * @brief
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef FLASHPAGE_H
#define FLASHPAGE_H

#include "abstractwizardpage.h"

namespace Ui {
class FlashPage;
}

class FlashPage : public AbstractWizardPage
{
    Q_OBJECT

public:
    explicit FlashPage(SetupWizard *wizard, QWidget *parent = 0);
    ~FlashPage();
    bool validatePage();
    bool isComplete() const;

private:    
    Ui::FlashPage *ui;
    bool m_successfulWrite;

private slots:
    void writeToController();
    void saveProgress(int total, int current, QString description);
};

#endif // FLASHPAGE_H
