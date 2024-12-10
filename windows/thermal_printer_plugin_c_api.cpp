#include "include/thermal_printer/thermal_printer_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "thermal_printer_plugin.h"

void ThermalPrinterPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  thermal_printer::ThermalPrinterPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
