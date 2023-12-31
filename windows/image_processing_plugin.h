#ifndef FLUTTER_PLUGIN_IMAGE_PROCESSING_PLUGIN_H_
#define FLUTTER_PLUGIN_IMAGE_PROCESSING_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace image_processing {

class ImageProcessingPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  ImageProcessingPlugin();

  virtual ~ImageProcessingPlugin();

  // Disallow copy and assign.
  ImageProcessingPlugin(const ImageProcessingPlugin&) = delete;
  ImageProcessingPlugin& operator=(const ImageProcessingPlugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace image_processing

#endif  // FLUTTER_PLUGIN_IMAGE_PROCESSING_PLUGIN_H_
