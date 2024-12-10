#ifndef FLUTTER_PLUGIN_THERMAL_PRINTER_PLUGIN_H_
#define FLUTTER_PLUGIN_THERMAL_PRINTER_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace thermal_printer {

class ThermalPrinterPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  ThermalPrinterPlugin();

  virtual ~ThermalPrinterPlugin();

  // Disallow copy and assign.
  ThermalPrinterPlugin(const ThermalPrinterPlugin&) = delete;
  ThermalPrinterPlugin& operator=(const ThermalPrinterPlugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace thermal_printer

#endif  // FLUTTER_PLUGIN_THERMAL_PRINTER_PLUGIN_H_
