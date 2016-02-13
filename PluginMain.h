#ifndef PLUGINMAIN_H
#define PLUGINMAIN_H

#include "azusadesignerbase_global.h"
#include "../AzusaDesignerSDK/sdk/global/IPluginMain.h"

class PluginMain : public IPluginMain
{
public:
	PluginMain();
	void initialize();
	PluginInformation* pluginInformation();
	void setGlobalManager(IGlobalManager* globalManager);

private:
	PluginInformation m_pluginInformation;
};

#endif // PLUGINMAIN_H
