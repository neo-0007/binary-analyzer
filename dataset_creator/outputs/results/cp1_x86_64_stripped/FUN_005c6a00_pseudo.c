
void FUN_005c6a00(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  
  if ((DAT_0094b5a0 & 0x80100) == 0x80100) {
    uVar1 = FUN_005c7860(param_1,param_2,*param_3);
    FUN_005c7520(uVar1,param_2,param_5);
  }
  else {
    uVar1 = FUN_005c76c0(param_1,param_4);
    FUN_005c7420(uVar1);
  }
  FUN_005c7600();
  return;
}

