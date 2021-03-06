// Copyright 2015 Kite & Lightning.  All rights reserved.

#pragma once

class FStereoPanoModule : public IModuleInterface
{
private:
	/** IModuleInterface - initialize the module */
	virtual void StartupModule() override;

	/** IModuleInterface - shutdown the module */
	virtual void ShutdownModule() override;

public:
	static TSharedPtr<FStereoPanoManager> Get();
};