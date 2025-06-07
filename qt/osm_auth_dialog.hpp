#pragma once

#include <QtWidgets/QDialog>

namespace qt
{

class OsmAuthDialog : public QDialog
{
  Q_OBJECT
public:
  explicit OsmAuthDialog(QWidget * parent);

private slots:
  void OnAction();

private:
  void SwitchToLogin();
  void SwitchToLogout();
};

} // namespace qt
