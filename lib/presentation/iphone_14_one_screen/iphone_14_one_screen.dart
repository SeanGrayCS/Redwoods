import 'controller/iphone_14_one_controller.dart';
import 'package:flutter/material.dart';
import 'package:kevinisun_s_application2/core/app_export.dart';
import 'package:kevinisun_s_application2/widgets/custom_button.dart';

class Iphone14OneScreen extends GetWidget<Iphone14OneController> {
  @override
  Widget build(BuildContext context) {
    return SafeArea(
        top: false,
        bottom: false,
        child: Scaffold(
            backgroundColor: ColorConstant.indigo300,
            body: Container(
                width: size.width,
                padding: getPadding(top: 56, bottom: 56),
                child: Column(
                    mainAxisAlignment: MainAxisAlignment.start,
                    children: [
                      CustomImageView(
                          imagePath: ImageConstant.imgP11,
                          height: getVerticalSize(160.00),
                          width: getHorizontalSize(181.00)),
                      Text("lbl_slugopia".tr,
                          overflow: TextOverflow.ellipsis,
                          textAlign: TextAlign.left,
                          style: AppStyle.txtMansalvaRegular52),
                      Spacer(),
                      Container(
                          height: getVerticalSize(77.00),
                          width: getHorizontalSize(217.00),
                          child:
                              Stack(alignment: Alignment.topRight, children: [
                            Align(
                                alignment: Alignment.centerLeft,
                                child: Container(
                                    padding: getPadding(
                                        left: 22,
                                        top: 24,
                                        right: 22,
                                        bottom: 24),
                                    decoration: AppDecoration.fillGray900,
                                    child: Column(
                                        mainAxisSize: MainAxisSize.min,
                                        crossAxisAlignment:
                                            CrossAxisAlignment.end,
                                        mainAxisAlignment:
                                            MainAxisAlignment.center,
                                        children: [
                                          Padding(
                                              padding: getPadding(top: 4),
                                              child: Text("lbl_explore_now".tr,
                                                  overflow:
                                                      TextOverflow.ellipsis,
                                                  textAlign: TextAlign.left,
                                                  style: AppStyle
                                                      .txtOrbitronBold18
                                                      .copyWith(
                                                          letterSpacing:
                                                              getHorizontalSize(
                                                                  1.80))))
                                        ]))),
                            Align(
                                alignment: Alignment.topRight,
                                child: Container(
                                    height: getVerticalSize(65.00),
                                    width: getHorizontalSize(12.00),
                                    decoration: BoxDecoration(
                                        color: ColorConstant.gray900))),
                            CustomImageView(
                                svgPath: ImageConstant.imgOffer,
                                height: getSize(24.00),
                                width: getSize(24.00),
                                alignment: Alignment.bottomRight)
                          ])),
                      Align(
                          alignment: Alignment.centerRight,
                          child: Padding(
                              padding: getPadding(top: 112, right: 30),
                              child: Text("msg_don_t_have_an_account".tr,
                                  overflow: TextOverflow.ellipsis,
                                  textAlign: TextAlign.left,
                                  style: AppStyle.txtCalibri15))),
                      CustomButton(
                          height: 29,
                          width: 151,
                          text: "lbl_get_started".tr,
                          margin: getMargin(top: 8, right: 25, bottom: 31),
                          alignment: Alignment.centerRight)
                    ]))));
  }
}
