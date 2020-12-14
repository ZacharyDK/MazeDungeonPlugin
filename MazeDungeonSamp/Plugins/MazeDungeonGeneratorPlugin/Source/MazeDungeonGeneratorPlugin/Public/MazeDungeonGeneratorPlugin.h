//Copyright Zachary Kolansky, 2020

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FMazeDungeonGeneratorPluginModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
