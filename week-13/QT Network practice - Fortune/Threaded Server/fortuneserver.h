#ifndef FORTUNESERVER_H
#define FORTUNESERVER_H

#include <QStringList>
#include <QTcpServer>

class FortuneServer : public QTcpServer {
  Q_OBJECT

public:
  FortuneServer(QObject* parent = Q_NULLPTR);
protected:
  void incomingConnection(long long socketDescriptor) override;

private:
  QStringList fortunes;
};

#endif // FORTUNESERVER_H
