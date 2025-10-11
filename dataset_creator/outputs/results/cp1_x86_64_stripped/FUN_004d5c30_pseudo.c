
long FUN_004d5c30(long param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_0041aec0(0xd0,"../crypto/dh/dh_lib.c",0x4c);
  if (lVar3 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/dh/dh_lib.c",0x4f,"dh_new_intern");
    FUN_0051f8f0(5,0xc0100,0);
    return 0;
  }
  LOCK();
  *(undefined4 *)(lVar3 + 0x90) = 1;
  UNLOCK();
  lVar4 = FUN_00422240();
  *(long *)(lVar3 + 0xc0) = lVar4;
  if (lVar4 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/dh/dh_lib.c",0x56,"dh_new_intern");
    FUN_0051f8f0(5,0xc0100,0);
    FUN_0041ad60(lVar3,"../crypto/dh/dh_lib.c",0x57);
    return 0;
  }
  *(undefined8 *)(lVar3 + 0xb0) = param_2;
  lVar4 = FUN_004d5350();
  *(long *)(lVar3 + 0xb8) = lVar4;
  *(undefined4 *)(lVar3 + 0x80) = *(undefined4 *)(lVar4 + 0x30);
  if (param_1 == 0) {
    param_1 = FUN_0051cdb0();
    *(long *)(lVar3 + 0xa8) = param_1;
    if (param_1 != 0) goto LAB_004d5cc5;
    lVar4 = *(long *)(lVar3 + 0xb8);
LAB_004d5cde:
    *(undefined4 *)(lVar3 + 0x80) = *(undefined4 *)(lVar4 + 0x30);
    iVar2 = FUN_004196b0(6,lVar3,lVar3 + 0x98);
    if (iVar2 != 0) {
      pcVar1 = *(code **)(*(long *)(lVar3 + 0xb8) + 0x20);
      if ((pcVar1 == (code *)0x0) || (iVar2 = (*pcVar1)(lVar3), iVar2 != 0)) {
        return lVar3;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/dh/dh_lib.c",0x78,"dh_new_intern");
      FUN_0051f8f0(5,0xc0105,0);
    }
  }
  else {
    iVar2 = FUN_0051a180(param_1);
    if (iVar2 == 0) {
      FUN_0051f420();
      uVar5 = 0x61;
    }
    else {
      *(long *)(lVar3 + 0xa8) = param_1;
LAB_004d5cc5:
      lVar4 = FUN_0051cde0(param_1);
      *(long *)(lVar3 + 0xb8) = lVar4;
      if (lVar4 != 0) goto LAB_004d5cde;
      FUN_0051f420();
      uVar5 = 0x6a;
    }
    FUN_0051f540("../crypto/dh/dh_lib.c",uVar5,"dh_new_intern");
    FUN_0051f8f0(5,0x80026,0);
  }
  FUN_004d5b70(lVar3);
  return 0;
}

