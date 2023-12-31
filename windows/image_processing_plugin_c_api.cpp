#include "include/image_processing/image_processing_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "image_processing_plugin.h"

void ImageProcessingPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  image_processing::ImageProcessingPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
