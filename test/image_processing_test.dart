import 'package:flutter_test/flutter_test.dart';
import 'package:image_processing/image_processing.dart';
import 'package:image_processing/image_processing_platform_interface.dart';
import 'package:image_processing/image_processing_method_channel.dart';
import 'package:plugin_platform_interface/plugin_platform_interface.dart';

class MockImageProcessingPlatform
    with MockPlatformInterfaceMixin
    implements ImageProcessingPlatform {

  @override
  Future<String?> getPlatformVersion() => Future.value('42');
}

void main() {
  final ImageProcessingPlatform initialPlatform = ImageProcessingPlatform.instance;

  test('$MethodChannelImageProcessing is the default instance', () {
    expect(initialPlatform, isInstanceOf<MethodChannelImageProcessing>());
  });

  test('getPlatformVersion', () async {
    ImageProcessing imageProcessingPlugin = ImageProcessing();
    MockImageProcessingPlatform fakePlatform = MockImageProcessingPlatform();
    ImageProcessingPlatform.instance = fakePlatform;

    expect(await imageProcessingPlugin.getPlatformVersion(), '42');
  });
}
