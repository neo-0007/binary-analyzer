
undefined8 FUN_00620480(int *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*param_1 == 0) && (param_3 != 0x20)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ct/ct_sct.c",0x61,"SCT_set1_log_id");
    FUN_0051f8f0(0x32,100,0);
    return 0;
  }
  FUN_0041ad60(*(undefined8 *)(param_1 + 6),"../crypto/ct/ct_sct.c",0x65);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x18] = 0;
  if ((param_2 == 0) || (param_3 == 0)) {
    uVar1 = 1;
  }
  else {
    lVar2 = FUN_0041c320(param_2,param_3,"../crypto/ct/ct_sct.c",0x6b);
    *(long *)(param_1 + 6) = lVar2;
    if (lVar2 != 0) {
      *(long *)(param_1 + 8) = param_3;
      return 1;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/ct/ct_sct.c",0x6d,"SCT_set1_log_id");
    FUN_0051f8f0(0x32,0xc0100,0);
    uVar1 = 0;
  }
  return uVar1;
}

