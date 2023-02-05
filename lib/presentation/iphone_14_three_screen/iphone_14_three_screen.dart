import 'controller/iphone_14_three_controller.dart';
import 'package:flutter/material.dart';
import 'package:kevinisun_s_application2/core/app_export.dart';

class Iphone14ThreeScreen extends GetWidget<Iphone14ThreeController> {
  @override
  Widget build(BuildContext context) {
    return SafeArea(
      top: false,
      bottom: false,
      child: Scaffold(
        backgroundColor: ColorConstant.indigo300,
        body: Container(
          width: size.width,
          padding: getPadding(
            left: 19,
            top: 21,
            right: 19,
            bottom: 21,
          ),
          child: Column(
            mainAxisAlignment: MainAxisAlignment.start,
            children: [
              Container(
                width: getHorizontalSize(
                  273.00,
                ),
                child: Text(
                  "msg_plan_your_route".tr,
                  maxLines: null,
                  textAlign: TextAlign.center,
                  style: AppStyle.txtMansalvaRegular60,
                ),
              ),
              Container(
                height: getVerticalSize(
                  463.00,
                ),
                width: getHorizontalSize(
                  344.00,
                ),
                margin: getMargin(
                  top: 39,
                  bottom: 5,
                ),
                child: Stack(
                  alignment: Alignment.center,
                  children: [
                    Align(
                      alignment: Alignment.center,
                      child: Container(
                        height: getVerticalSize(
                          457.00,
                        ),
                        width: getHorizontalSize(
                          338.00,
                        ),
                        decoration: BoxDecoration(
                          color: ColorConstant.deepPurple400,
                        ),
                      ),
                    ),
                    Align(
                      alignment: Alignment.center,
                      child: Container(
                        margin: getMargin(
                          right: 6,
                        ),
                        padding: getPadding(
                          left: 2,
                          top: 12,
                          right: 2,
                          bottom: 12,
                        ),
                        decoration: AppDecoration.fillBluegray50,
                        child: Column(
                          mainAxisSize: MainAxisSize.min,
                          mainAxisAlignment: MainAxisAlignment.start,
                          children: [
                            Align(
                              alignment: Alignment.centerLeft,
                              child: Padding(
                                padding: getPadding(
                                  left: 17,
                                ),
                                child: Text(
                                  "msg_starting_location".tr,
                                  overflow: TextOverflow.ellipsis,
                                  textAlign: TextAlign.left,
                                  style: AppStyle.txtMansalvaRegular24,
                                ),
                              ),
                            ),
                            Container(
                              margin: getMargin(
                                left: 14,
                                top: 11,
                                right: 15,
                              ),
                              padding: getPadding(
                                left: 17,
                                top: 3,
                                right: 17,
                                bottom: 3,
                              ),
                              decoration:
                                  AppDecoration.fillBluegray100.copyWith(
                                borderRadius: BorderRadiusStyle.roundedBorder10,
                              ),
                              child: Row(
                                children: [
                                  Container(
                                    height: getVerticalSize(
                                      40.00,
                                    ),
                                    width: getHorizontalSize(
                                      17.00,
                                    ),
                                    child: Stack(
                                      alignment: Alignment.bottomCenter,
                                      children: [
                                        CustomImageView(
                                          svgPath: ImageConstant.imgArrowup,
                                          height: getVerticalSize(
                                            20.00,
                                          ),
                                          width: getHorizontalSize(
                                            17.00,
                                          ),
                                          alignment: Alignment.topCenter,
                                        ),
                                        CustomImageView(
                                          svgPath: ImageConstant.imgArrowdown,
                                          height: getVerticalSize(
                                            20.00,
                                          ),
                                          width: getHorizontalSize(
                                            17.00,
                                          ),
                                          alignment: Alignment.bottomCenter,
                                        ),
                                      ],
                                    ),
                                  ),
                                  Padding(
                                    padding: getPadding(
                                      left: 16,
                                      top: 9,
                                      right: 136,
                                      bottom: 5,
                                    ),
                                    child: Text(
                                      "lbl_longitude".tr,
                                      overflow: TextOverflow.ellipsis,
                                      textAlign: TextAlign.left,
                                      style: AppStyle.txtRobotoRomanRegular22,
                                    ),
                                  ),
                                ],
                              ),
                            ),
                            Container(
                              margin: getMargin(
                                left: 14,
                                top: 15,
                                right: 15,
                              ),
                              padding: getPadding(
                                left: 7,
                                top: 8,
                                right: 7,
                                bottom: 8,
                              ),
                              decoration:
                                  AppDecoration.fillBluegray100.copyWith(
                                borderRadius: BorderRadiusStyle.roundedBorder10,
                              ),
                              child: Row(
                                children: [
                                  CustomImageView(
                                    svgPath: ImageConstant.imgTrash,
                                    height: getVerticalSize(
                                      19.00,
                                    ),
                                    width: getHorizontalSize(
                                      22.00,
                                    ),
                                    margin: getMargin(
                                      top: 5,
                                      bottom: 4,
                                    ),
                                  ),
                                  CustomImageView(
                                    svgPath: ImageConstant.imgArrowright,
                                    height: getVerticalSize(
                                      19.00,
                                    ),
                                    width: getHorizontalSize(
                                      22.00,
                                    ),
                                    margin: getMargin(
                                      top: 5,
                                      bottom: 5,
                                    ),
                                  ),
                                  Padding(
                                    padding: getPadding(
                                      left: 10,
                                      right: 154,
                                      bottom: 3,
                                    ),
                                    child: Text(
                                      "lbl_latitude".tr,
                                      overflow: TextOverflow.ellipsis,
                                      textAlign: TextAlign.left,
                                      style: AppStyle.txtRobotoRomanRegular22,
                                    ),
                                  ),
                                ],
                              ),
                            ),
                            CustomImageView(
                              svgPath: ImageConstant.imgDottedline,
                              height: getVerticalSize(
                                2.00,
                              ),
                              width: getHorizontalSize(
                                332.00,
                              ),
                              margin: getMargin(
                                top: 30,
                              ),
                            ),
                            Align(
                              alignment: Alignment.centerLeft,
                              child: Padding(
                                padding: getPadding(
                                  left: 17,
                                  top: 20,
                                ),
                                child: Text(
                                  "lbl_end_location".tr,
                                  overflow: TextOverflow.ellipsis,
                                  textAlign: TextAlign.center,
                                  style: AppStyle.txtMansalvaRegular24,
                                ),
                              ),
                            ),
                            Container(
                              margin: getMargin(
                                left: 14,
                                top: 12,
                                right: 15,
                              ),
                              padding: getPadding(
                                left: 17,
                                top: 3,
                                right: 17,
                                bottom: 3,
                              ),
                              decoration:
                                  AppDecoration.fillBluegray100.copyWith(
                                borderRadius: BorderRadiusStyle.roundedBorder10,
                              ),
                              child: Row(
                                children: [
                                  Container(
                                    height: getVerticalSize(
                                      40.00,
                                    ),
                                    width: getHorizontalSize(
                                      17.00,
                                    ),
                                    child: Stack(
                                      alignment: Alignment.bottomCenter,
                                      children: [
                                        CustomImageView(
                                          svgPath: ImageConstant.imgArrowup,
                                          height: getVerticalSize(
                                            20.00,
                                          ),
                                          width: getHorizontalSize(
                                            17.00,
                                          ),
                                          alignment: Alignment.topCenter,
                                        ),
                                        CustomImageView(
                                          svgPath: ImageConstant.imgArrowdown,
                                          height: getVerticalSize(
                                            20.00,
                                          ),
                                          width: getHorizontalSize(
                                            17.00,
                                          ),
                                          alignment: Alignment.bottomCenter,
                                        ),
                                      ],
                                    ),
                                  ),
                                  Padding(
                                    padding: getPadding(
                                      left: 15,
                                      top: 9,
                                      right: 137,
                                      bottom: 5,
                                    ),
                                    child: Text(
                                      "lbl_longitude".tr,
                                      overflow: TextOverflow.ellipsis,
                                      textAlign: TextAlign.left,
                                      style: AppStyle.txtRobotoRomanRegular22,
                                    ),
                                  ),
                                ],
                              ),
                            ),
                            Container(
                              margin: getMargin(
                                left: 14,
                                top: 15,
                                right: 15,
                              ),
                              padding: getPadding(
                                left: 7,
                                top: 8,
                                right: 7,
                                bottom: 8,
                              ),
                              decoration:
                                  AppDecoration.fillBluegray100.copyWith(
                                borderRadius: BorderRadiusStyle.roundedBorder10,
                              ),
                              child: Row(
                                children: [
                                  CustomImageView(
                                    svgPath: ImageConstant.imgTrash,
                                    height: getVerticalSize(
                                      19.00,
                                    ),
                                    width: getHorizontalSize(
                                      22.00,
                                    ),
                                    margin: getMargin(
                                      top: 5,
                                      bottom: 4,
                                    ),
                                  ),
                                  CustomImageView(
                                    svgPath: ImageConstant.imgArrowright,
                                    height: getVerticalSize(
                                      19.00,
                                    ),
                                    width: getHorizontalSize(
                                      22.00,
                                    ),
                                    margin: getMargin(
                                      top: 5,
                                      bottom: 5,
                                    ),
                                  ),
                                  Padding(
                                    padding: getPadding(
                                      left: 10,
                                      right: 154,
                                      bottom: 3,
                                    ),
                                    child: Text(
                                      "lbl_latitude".tr,
                                      overflow: TextOverflow.ellipsis,
                                      textAlign: TextAlign.left,
                                      style: AppStyle.txtRobotoRomanRegular22,
                                    ),
                                  ),
                                ],
                              ),
                            ),
                            Container(
                              width: getHorizontalSize(
                                215.00,
                              ),
                              margin: getMargin(
                                top: 28,
                              ),
                              padding: getPadding(
                                left: 30,
                                top: 8,
                                right: 71,
                                bottom: 8,
                              ),
                              decoration:
                                  AppDecoration.txtFillIndigo300.copyWith(
                                borderRadius:
                                    BorderRadiusStyle.txtRoundedBorder17,
                              ),
                              child: Text(
                                "lbl_search".tr,
                                overflow: TextOverflow.ellipsis,
                                textAlign: TextAlign.left,
                                style: AppStyle.txtRobotoRomanRegular20,
                              ),
                            ),
                          ],
                        ),
                      ),
                    ),
                  ],
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }
}
