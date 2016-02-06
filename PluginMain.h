#ifndef PLUGINMAIN_H
#define PLUGINMAIN_H

#include "azusadesignerbase_global.h"
#include "../AzusaDesignerSDK/sdk/global/IPluginMain.h"

class PluginMain : public IPluginMain
{
public:
	PluginMain();
	void initialize();
	void setGlobalManager(IGlobalManager* globalManager);
};

#endif // PLUGINMAIN_H
