
undefined8 FUN_00620780(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_0041ad60(*(undefined8 *)(param_1 + 0x48),"../crypto/ct/ct_sct.c",0xb3);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((param_2 == 0) || (param_3 == 0)) {
    uVar1 = 1;
  }
  else {
    lVar2 = FUN_0041c320(param_2,param_3,"../crypto/ct/ct_sct.c",0xb9);
    *(long *)(param_1 + 0x48) = lVar2;
    if (lVar2 != 0) {
      *(long *)(param_1 + 0x50) = param_3;
      return 1;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/ct/ct_sct.c",0xbb,"SCT_set1_signature");
    FUN_0051f8f0(0x32,0xc0100,0);
    uVar1 = 0;
  }
  return uVar1;
}

