#include <QObject>
#include "VersionAction.h"

VersionAction::VersionAction()
{
	this->m_name = QObject::tr("&About").toLocal8Bit();
}

IAction::ActionGenre VersionAction::genre()
{
	return IAction::ACTION_HELP;
}

const char* VersionAction::name()
{
	return this->m_name.constData();
}

#include <QMessageBox>
void VersionAction::onAction()
{
	QMessageBox::information(0, "AzusaDesigner", "AzusaDesigner is designed by KMY 2016", QMessageBox::Ok);
}
