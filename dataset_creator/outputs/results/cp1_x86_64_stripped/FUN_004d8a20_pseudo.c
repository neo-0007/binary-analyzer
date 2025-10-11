
long FUN_004d8a20(long param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_0041aec0(200,"../crypto/dsa/dsa_lib.c",0x87);
  if (lVar3 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/dsa/dsa_lib.c",0x8a,"dsa_new_intern");
    FUN_0051f8f0(10,0xc0100,0);
    return 0;
  }
  LOCK();
  *(undefined4 *)(lVar3 + 0x88) = 1;
  UNLOCK();
  lVar4 = FUN_00422240();
  *(long *)(lVar3 + 0xb0) = lVar4;
  if (lVar4 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/dsa/dsa_lib.c",0x91,"dsa_new_intern");
    FUN_0051f8f0(10,0xc0100,0);
    FUN_0041ad60(lVar3,"../crypto/dsa/dsa_lib.c",0x92);
    return 0;
  }
  *(undefined8 *)(lVar3 + 0xb8) = param_2;
  lVar4 = FUN_004d9830();
  *(long *)(lVar3 + 0xa0) = lVar4;
  *(uint *)(lVar3 + 0x78) = *(uint *)(lVar4 + 0x40) & 0xfffffbff;
  if (param_1 == 0) {
    param_1 = FUN_0051d170();
    *(long *)(lVar3 + 0xa8) = param_1;
    if (param_1 != 0) goto LAB_004d8ab6;
    lVar4 = *(long *)(lVar3 + 0xa0);
LAB_004d8acf:
    *(uint *)(lVar3 + 0x78) = *(uint *)(lVar4 + 0x40) & 0xfffffbff;
    iVar2 = FUN_004194d0(param_2,7,lVar3,lVar3 + 0x90);
    if (iVar2 != 0) {
      pcVar1 = *(code **)(*(long *)(lVar3 + 0xa0) + 0x30);
      if ((pcVar1 == (code *)0x0) || (iVar2 = (*pcVar1)(lVar3), iVar2 != 0)) {
        return lVar3;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/dsa/dsa_lib.c",0xb4,"dsa_new_intern");
      FUN_0051f8f0(10,0xc0105,0);
    }
  }
  else {
    iVar2 = FUN_0051a180(param_1);
    if (iVar2 == 0) {
      FUN_0051f420();
      uVar5 = 0x9c;
    }
    else {
      *(long *)(lVar3 + 0xa8) = param_1;
LAB_004d8ab6:
      lVar4 = FUN_0051d1a0(param_1);
      *(long *)(lVar3 + 0xa0) = lVar4;
      if (lVar4 != 0) goto LAB_004d8acf;
      FUN_0051f420();
      uVar5 = 0xa5;
    }
    FUN_0051f540("../crypto/dsa/dsa_lib.c",uVar5,"dsa_new_intern");
    FUN_0051f8f0(10,0x80026,0);
  }
  FUN_004d8960(lVar3);
  return 0;
}

