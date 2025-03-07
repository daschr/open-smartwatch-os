#ifdef OSW_FEATURE_WIFI
#pragma once

#include <osw_hal.h>
#include <osw_ui.h>
#include "osw_app.h"

class OswAppWebserver : public OswApp {
  public:
    OswAppWebserver(void) {
        ui = OswUI::getInstance();
    };
    virtual void setup() override;
    virtual void loop() override;
    virtual void stop() override;
    ~OswAppWebserver() {};

  private:
    OswUI* ui;
};
#endif