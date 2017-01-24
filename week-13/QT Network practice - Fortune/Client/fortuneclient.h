#ifndef FORTUNECLIENT_H
#define FORTUNECLIENT_H

#include <QDialog>
#include <QTcpSocket>
#include <QDataStream>

class QComboBox;
class QLabel;
class QLineEdit;
class QPushButton;
class QTcpSocket;
class QNetworkSession;

class FortuneClient : public QDialog {
  Q_OBJECT

public:
  explicit FortuneClient(QWidget* parent = Q_NULLPTR);

  private slots:
  void requestNewFortune();
  void readFortune();
  void displayError(QAbstractSocket::SocketError socketError);
  void enableGetFortuneButton();
  void sessionOpened();

private:
  QComboBox* hostCombo;
  QLineEdit* portLineEdit;
  QLabel* statusLabel;
  QPushButton *getFortuneButton;

  QTcpSocket* tcpSocket;
  QDataStream in;
  QString currentFortune;

  QNetworkSession* networkSession;
};

#endif // FORTUNECLIENT_H
