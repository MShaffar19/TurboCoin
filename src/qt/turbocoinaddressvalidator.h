// Copyright (c) 2011-2014 TurboCoin
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_BITCOINADDRESSVALIDATOR_H
#define BITCOIN_QT_BITCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class TurbocoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit TurbocoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Turbocoin address widget validator, checks for a valid turbocoin address.
 */
class TurbocoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit TurbocoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // BITCOIN_QT_BITCOINADDRESSVALIDATOR_H
