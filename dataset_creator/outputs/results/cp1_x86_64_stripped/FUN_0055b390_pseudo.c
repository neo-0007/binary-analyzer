
undefined8 FUN_0055b390(undefined8 *param_1,uint param_2,int param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  
  piVar3 = (int *)*param_1;
  if (param_3 == 0) {
    if (param_2 < 0x18) {
      FUN_0051f420();
      uVar4 = 0x2fa;
      goto LAB_0055b419;
    }
    if (*piVar3 != -0x4f4a0ee2) {
      FUN_0051f420();
      FUN_0051f540("../crypto/pem/pvkfmt.c",0x2ff,"ossl_do_PVK_header");
      FUN_0051f8f0(9,0x74,0);
      return 0;
    }
    piVar3 = piVar3 + 1;
  }
  else if (param_2 < 0x14) {
    FUN_0051f420();
    uVar4 = 0x2f5;
LAB_0055b419:
    FUN_0051f540("../crypto/pem/pvkfmt.c",uVar4,"ossl_do_PVK_header");
    FUN_0051f8f0(9,0x7d,0);
    return 0;
  }
  iVar1 = piVar3[2];
  uVar4 = 0;
  *param_4 = piVar3[3];
  uVar2 = piVar3[4];
  *param_5 = uVar2;
  if (uVar2 < 0x19001) {
    if (*param_4 < 0x2801) {
      if ((*param_4 == 0) && (iVar1 != 0)) {
        FUN_0051f420();
        FUN_0051f540("../crypto/pem/pvkfmt.c",0x310,"ossl_do_PVK_header");
        FUN_0051f8f0(9,0x79,0);
      }
      else {
        uVar4 = 1;
        *param_1 = piVar3 + 5;
      }
    }
  }
  return uVar4;
}

