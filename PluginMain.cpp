#include "PluginMain.h"
#include "../AzusaDesignerSDK/sdk/global/IGlobalManager.h"
#include <QMessageBox>


extern "C" AZUSADESIGNERBASESHARED_EXPORT void* pluginMainInstance()
{
	return new PluginMain();
}

PluginMain::PluginMain()
{

}

void PluginMain::initialize()
{

}

void PluginMain::setGlobalManager(IGlobalManager *globalManager)
{
	QMessageBox::information(0, "Test", globalManager->applicationName(), QMessageBox::Ok);
}
