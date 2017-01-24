#include <QApplication>
#include "fortuneclient.h"

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  QGuiApplication::setApplicationDisplayName(FortuneClient::tr("Fortune Client"));
  FortuneClient client;
  client.show();
  return app.exec();
}