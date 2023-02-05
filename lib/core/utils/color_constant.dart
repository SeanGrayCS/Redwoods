import 'dart:ui';
import 'package:flutter/material.dart';

class ColorConstant {
  static Color indigo300 = fromHex('#8c85bf');

  static Color black9007f = fromHex('#7f000000');

  static Color blueGray100 = fromHex('#d9d9d9');

  static Color black900 = fromHex('#000000');

  static Color blueGray50 = fromHex('#f1f1f1');

  static Color bluegray400 = fromHex('#888888');

  static Color gray900 = fromHex('#001638');

  static Color deepPurple400 = fromHex('#6e61cb');

  static Color whiteA700 = fromHex('#ffffff');

  static Color amberA400 = fromHex('#ffcc00');

  static Color fromHex(String hexString) {
    final buffer = StringBuffer();
    if (hexString.length == 6 || hexString.length == 7) buffer.write('ff');
    buffer.write(hexString.replaceFirst('#', ''));
    return Color(int.parse(buffer.toString(), radix: 16));
  }
}
