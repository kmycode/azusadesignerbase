#ifndef VERSIONACTION_H
#define VERSIONACTION_H

#include <QString>
#include "../AzusaDesignerSDK/sdk/model/feature/IAction.h"

class VersionAction : public IAction
{
public:
	VersionAction();

	ActionGenre genre();
	const char* name();
	void onAction();

private:
	QByteArray m_name;
};

#endif // VERSIONACTION_H
