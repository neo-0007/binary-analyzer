
undefined4 FUN_0051b0b0(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  
  if (param_1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/engine/eng_list.c",0x147,"ENGINE_remove");
    FUN_0051f8f0(0x26,0xc0102,0);
    return 0;
  }
  iVar3 = FUN_004222c0(DAT_00941008);
  lVar2 = DAT_00941038;
  if (iVar3 == 0) {
    return 0;
  }
  lVar4 = DAT_00941038;
  if ((param_1 != DAT_00941038) && (DAT_00941038 != 0)) {
    do {
      lVar4 = *(long *)(lVar4 + 0xc0);
      if (lVar4 == 0) goto LAB_0051b180;
    } while (param_1 != lVar4);
  }
  if (lVar4 == 0) {
LAB_0051b180:
    FUN_0051f420();
    uVar5 = 0;
    FUN_0051f540("../crypto/engine/eng_list.c",0x78,"engine_list_remove");
    FUN_0051f8f0(0x26,0x69,0);
    FUN_0051f420();
    FUN_0051f540("../crypto/engine/eng_list.c",0x14d,"ENGINE_remove");
    FUN_0051f8f0(0x26,0x6e,0);
  }
  else {
    lVar4 = *(long *)(param_1 + 0xc0);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0xb8) = *(undefined8 *)(param_1 + 0xb8);
    }
    lVar1 = *(long *)(param_1 + 0xb8);
    if (lVar1 != 0) {
      *(long *)(lVar1 + 0xc0) = lVar4;
    }
    if (param_1 == lVar2) {
      DAT_00941038 = *(long *)(param_1 + 0xc0);
    }
    if (param_1 == DAT_00941030) {
      DAT_00941030 = lVar1;
    }
    uVar5 = 1;
    FUN_0051a4e0(param_1,0);
  }
  FUN_004222e0(DAT_00941008);
  return uVar5;
}

