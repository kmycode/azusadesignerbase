#include "PluginMain.h"
#include "../AzusaDesignerSDK/sdk/global/IGlobalManager.h"
#include "../AzusaDesignerSDK/sdk/model/feature/IActionManager.h"

#include "action/VersionAction/VersionAction.h"

#include <QMessageBox>

#define PLUGIN_NAME "AzusaDesigner Base (Official)"
#define PLUGIN_AUTHOR "KMY"
#define PLUGIN_VERSION 0.1
#define PLUGIN_FIXEDIDENFIER "azusadesigner-base"


extern "C" AZUSADESIGNERBASESHARED_EXPORT void* pluginMainInstance()
{
	return new PluginMain();
}

PluginMain::PluginMain() :
	m_pluginInformation(PLUGIN_NAME, PLUGIN_AUTHOR, PLUGIN_VERSION, PLUGIN_FIXEDIDENFIER)
{

}

void PluginMain::initialize()
{

}

PluginInformation* PluginMain::pluginInformation()
{
	return &this->m_pluginInformation;
}

void PluginMain::setGlobalManager(IGlobalManager *globalManager)
{
	globalManager->actionManager()->registerAction(dynamic_cast<IAction*>(new VersionAction()));
}
