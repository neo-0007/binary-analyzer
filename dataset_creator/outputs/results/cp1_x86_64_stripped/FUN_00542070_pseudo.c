
undefined8 FUN_00542070(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (lVar1 == param_2) {
      return 1;
    }
    FUN_0041ad60(lVar1,"../crypto/ffc/ffc_params.c",0x54);
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar1 = FUN_0041c320(param_2,param_3,"../crypto/ffc/ffc_params.c",0x58);
    *(long *)(param_1 + 0x20) = lVar1;
    if (lVar1 != 0) {
      *(long *)(param_1 + 0x28) = param_3;
      return 1;
    }
    return 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 1;
}

