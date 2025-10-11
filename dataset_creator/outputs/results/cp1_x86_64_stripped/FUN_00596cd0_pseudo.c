
void FUN_00596cd0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_00419990(0xe,param_1,param_1 + 9);
    FUN_0041ad60(*param_1,"../crypto/ui/ui_lib.c",0x26e);
    *param_1 = 0;
    FUN_0041ad60(param_1,"../crypto/ui/ui_lib.c",0x270);
    return;
  }
  return;
}

