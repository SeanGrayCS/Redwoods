import 'controller/iphone_14_two_controller.dart';
import 'package:flutter/material.dart';
import 'package:kevinisun_s_application2/core/app_export.dart';
import 'package:kevinisun_s_application2/core/utils/validation_functions.dart';
import 'package:kevinisun_s_application2/widgets/custom_button.dart';
import 'package:kevinisun_s_application2/widgets/custom_text_form_field.dart';

class Iphone14TwoScreen extends GetWidget<Iphone14TwoController> {
  GlobalKey<FormState> _formKey = GlobalKey<FormState>();

  @override
  Widget build(BuildContext context) {
    return SafeArea(
      top: false,
      bottom: false,
      child: Scaffold(
        resizeToAvoidBottomInset: false,
        backgroundColor: ColorConstant.indigo300,
        body: Form(
          key: _formKey,
          child: Container(
            height: size.height,
            width: size.width,
            padding: getPadding(
              left: 21,
              right: 21,
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
                      left: 5,
                      right: 4,
                    ),
                    padding: getPadding(
                      left: 16,
                      top: 4,
                      right: 16,
                      bottom: 4,
                    ),
                    decoration: AppDecoration.fillBluegray50,
                    child: Column(
                      mainAxisSize: MainAxisSize.min,
                      mainAxisAlignment: MainAxisAlignment.start,
                      children: [
                        Container(
                          height: getVerticalSize(
                            115.00,
                          ),
                          width: getHorizontalSize(
                            229.00,
                          ),
                          child: Stack(
                            alignment: Alignment.bottomCenter,
                            children: [
                              Align(
                                alignment: Alignment.topCenter,
                                child: Text(
                                  "lbl_login".tr,
                                  overflow: TextOverflow.ellipsis,
                                  textAlign: TextAlign.left,
                                  style: AppStyle.txtMansalvaRegular60,
                                ),
                              ),
                              Align(
                                alignment: Alignment.bottomCenter,
                                child: Text(
                                  "msg_sign_in_to_your".tr,
                                  overflow: TextOverflow.ellipsis,
                                  textAlign: TextAlign.left,
                                  style: AppStyle.txtMansalvaRegular24,
                                ),
                              ),
                            ],
                          ),
                        ),
                        Container(
                          height: getVerticalSize(
                            49.00,
                          ),
                          width: getHorizontalSize(
                            304.00,
                          ),
                          margin: getMargin(
                            top: 33,
                          ),
                          child: Stack(
                            alignment: Alignment.center,
                            children: [
                              Align(
                                alignment: Alignment.topCenter,
                                child: Container(
                                  height: getVerticalSize(
                                    28.00,
                                  ),
                                  width: getHorizontalSize(
                                    304.00,
                                  ),
                                  decoration: BoxDecoration(
                                    color: ColorConstant.indigo300,
                                    borderRadius: BorderRadius.circular(
                                      getHorizontalSize(
                                        10.00,
                                      ),
                                    ),
                                  ),
                                ),
                              ),
                              CustomTextFormField(
                                width: 304,
                                focusNode: FocusNode(),
                                controller: controller.groupFiveController,
                                hintText: "lbl_username".tr,
                                alignment: Alignment.center,
                                prefix: Container(
                                  margin: getMargin(
                                    left: 17,
                                    top: 10,
                                    right: 11,
                                    bottom: 14,
                                  ),
                                  child: CustomImageView(
                                    svgPath: ImageConstant.imgUser,
                                  ),
                                ),
                                prefixConstraints: BoxConstraints(
                                  maxHeight: getVerticalSize(
                                    47.00,
                                  ),
                                ),
                                validator: (value) {
                                  if (!isText(value)) {
                                    return "Please enter valid text";
                                  }
                                  return null;
                                },
                              ),
                            ],
                          ),
                        ),
                        Container(
                          height: getVerticalSize(
                            49.00,
                          ),
                          width: getHorizontalSize(
                            304.00,
                          ),
                          margin: getMargin(
                            top: 13,
                          ),
                          child: Stack(
                            alignment: Alignment.center,
                            children: [
                              Align(
                                alignment: Alignment.topCenter,
                                child: Container(
                                  height: getVerticalSize(
                                    28.00,
                                  ),
                                  width: getHorizontalSize(
                                    304.00,
                                  ),
                                  decoration: BoxDecoration(
                                    color: ColorConstant.indigo300,
                                    borderRadius: BorderRadius.circular(
                                      getHorizontalSize(
                                        10.00,
                                      ),
                                    ),
                                  ),
                                ),
                              ),
                              CustomTextFormField(
                                width: 304,
                                focusNode: FocusNode(),
                                controller: controller.groupFourController,
                                hintText: "lbl_password".tr,
                                textInputAction: TextInputAction.done,
                                textInputType: TextInputType.visiblePassword,
                                alignment: Alignment.center,
                                validator: (value) {
                                  if (value == null ||
                                      (!isValidPassword(value,
                                          isRequired: true))) {
                                    return "Please enter valid password";
                                  }
                                  return null;
                                },
                                isObscureText: true,
                              ),
                            ],
                          ),
                        ),
                        Container(
                          width: getHorizontalSize(
                            304.00,
                          ),
                          margin: getMargin(
                            top: 19,
                          ),
                          padding: getPadding(
                            left: 30,
                            top: 9,
                            right: 118,
                            bottom: 9,
                          ),
                          decoration: AppDecoration.txtFillIndigo300.copyWith(
                            borderRadius: BorderRadiusStyle.txtRoundedBorder17,
                          ),
                          child: Text(
                            "lbl_login".tr,
                            overflow: TextOverflow.ellipsis,
                            textAlign: TextAlign.left,
                            style: AppStyle.txtRobotoRomanRegular20,
                          ),
                        ),
                        Padding(
                          padding: getPadding(
                            top: 10,
                          ),
                          child: Text(
                            "msg_i_forgot_my_password".tr,
                            overflow: TextOverflow.ellipsis,
                            textAlign: TextAlign.left,
                            style: AppStyle.txtRobotoRomanRegular12,
                          ),
                        ),
                        CustomButton(
                          height: 47,
                          width: 304,
                          text: "msg_register_new_account".tr,
                          margin: getMargin(
                            top: 36,
                            bottom: 13,
                          ),
                          variant: ButtonVariant.OutlineIndigo300,
                          shape: ButtonShape.RoundedBorder17,
                          padding: ButtonPadding.PaddingAll10,
                          fontStyle: ButtonFontStyle.RobotoRomanRegular20,
                        ),
                      ],
                    ),
                  ),
                ),
              ],
            ),
          ),
        ),
      ),
    );
  }
}
