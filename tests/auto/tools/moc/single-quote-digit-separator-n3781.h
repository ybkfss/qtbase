/****************************************************************************
**
** Copyright (C) 2013 Klarälvdalens Datakonsult AB, a KDAB Group company, info@kdab.com, author Stephen Kelly <stephen.kelly@kdab.com>
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QtGui module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:GPL-EXCEPT$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 as published by the Free Software
** Foundation with exceptions as appearing in the file LICENSE.GPL3-EXCEPT
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef SINGLE_QUOTE_DIGIT_SEPARATOR_N3781_H
#define SINGLE_QUOTE_DIGIT_SEPARATOR_N3781_H

#include <QObject>

class KDAB : public QObject
{
    Q_OBJECT
public:
    // C++1y allows use of single quote as a digit separator, useful for large
    // numbers. http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3781.pdf
    // Ensure that moc does not get confused with this.
    enum Salaries {
        Steve
#ifdef Q_MOC_RUN
        = 1'234'567
#endif
    };
    Q_ENUMS(Salaries)
};
#endif // SINGLE_QUOTE_DIGIT_SEPARATOR_N3781_H
