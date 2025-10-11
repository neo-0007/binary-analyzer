
long FUN_0042ba90(long param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_0041aec0(0xe0,"../crypto/rsa/rsa_lib.c",0x4d);
  if (lVar3 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_lib.c",0x50,"rsa_new_intern");
    FUN_0051f8f0(4,0xc0100,0);
    return 0;
  }
  LOCK();
  *(undefined4 *)(lVar3 + 0xa0) = 1;
  UNLOCK();
  lVar4 = FUN_00422240();
  *(long *)(lVar3 + 0xd0) = lVar4;
  if (lVar4 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_lib.c",0x57,"rsa_new_intern");
    FUN_0051f8f0(4,0xc0100,0);
    FUN_0041ad60(lVar3,"../crypto/rsa/rsa_lib.c",0x58);
    return 0;
  }
  *(undefined8 *)(lVar3 + 8) = param_2;
  lVar4 = FUN_0042f9f0();
  *(long *)(lVar3 + 0x18) = lVar4;
  *(uint *)(lVar3 + 0xa4) = *(uint *)(lVar4 + 0x48) & 0xfffffbff;
  if (param_1 == 0) {
    param_1 = FUN_0051d880();
    *(long *)(lVar3 + 0x20) = param_1;
    if (param_1 != 0) goto LAB_0042bb1f;
    lVar4 = *(long *)(lVar3 + 0x18);
LAB_0042bb35:
    *(uint *)(lVar3 + 0xa4) = *(uint *)(lVar4 + 0x48) & 0xfffffbff;
    iVar2 = FUN_004196b0(9,lVar3,lVar3 + 0x90);
    if (iVar2 != 0) {
      pcVar1 = *(code **)(*(long *)(lVar3 + 0x18) + 0x38);
      if ((pcVar1 == (code *)0x0) || (iVar2 = (*pcVar1)(lVar3), iVar2 != 0)) {
        return lVar3;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/rsa/rsa_lib.c",0x7a,"rsa_new_intern");
      FUN_0051f8f0(4,0xc0105,0);
    }
  }
  else {
    iVar2 = FUN_0051a180(param_1);
    if (iVar2 == 0) {
      FUN_0051f420();
      uVar5 = 0x62;
    }
    else {
      *(long *)(lVar3 + 0x20) = param_1;
LAB_0042bb1f:
      lVar4 = FUN_0051d8b0(param_1);
      *(long *)(lVar3 + 0x18) = lVar4;
      if (lVar4 != 0) goto LAB_0042bb35;
      FUN_0051f420();
      uVar5 = 0x6c;
    }
    FUN_0051f540("../crypto/rsa/rsa_lib.c",uVar5,"rsa_new_intern");
    FUN_0051f8f0(4,0x80026,0);
  }
  FUN_0042b980(lVar3);
  return 0;
}

