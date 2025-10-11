
undefined4 FUN_0051ae30(long *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if (param_1 == (long *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/engine/eng_list.c",0x131,"ENGINE_add");
    FUN_0051f8f0(0x26,0xc0102,0);
    return 0;
  }
  if ((*param_1 == 0) || (param_1[1] == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/engine/eng_list.c",0x135,"ENGINE_add");
    FUN_0051f8f0(0x26,0x6c,0);
    return 0;
  }
  iVar2 = FUN_004222c0(DAT_00941008);
  if (iVar2 == 0) {
    return 0;
  }
  if (DAT_00941038 == (long *)0x0) {
    if (DAT_00941030 == (long *)0x0) {
      DAT_00941038 = param_1;
      param_1[0x17] = 0;
      FUN_0051a660(FUN_0051b250);
LAB_0051b016:
      LOCK();
      *(int *)((long)param_1 + 0x9c) = *(int *)((long)param_1 + 0x9c) + 1;
      UNLOCK();
      uVar5 = 1;
      DAT_00941030 = param_1;
      param_1[0x18] = 0;
      goto LAB_0051af43;
    }
    FUN_0051f420();
    uVar4 = 0x4e;
LAB_0051aef2:
    FUN_0051f540("../crypto/engine/eng_list.c",uVar4,"engine_list_add");
    FUN_0051f8f0(0x26,0x6e,0);
  }
  else {
    lVar1 = *param_1;
    plVar3 = DAT_00941038;
    do {
      iVar2 = thunk_FUN_00712780(*plVar3,lVar1);
      plVar3 = (long *)plVar3[0x18];
      if (iVar2 == 0) goto LAB_0051b040;
    } while (plVar3 != (long *)0x0);
    if (iVar2 != 0) {
      if ((DAT_00941030 != (long *)0x0) && (DAT_00941030[0x18] == 0)) {
        DAT_00941030[0x18] = (long)param_1;
        param_1[0x17] = (long)DAT_00941030;
        goto LAB_0051b016;
      }
      FUN_0051f420();
      uVar4 = 0x5a;
      goto LAB_0051aef2;
    }
LAB_0051b040:
    FUN_0051f420();
    FUN_0051f540("../crypto/engine/eng_list.c",0x48,"engine_list_add");
    FUN_0051f8f0(0x26,0x67,0);
  }
  FUN_0051f420();
  uVar5 = 0;
  FUN_0051f540("../crypto/engine/eng_list.c",0x13b,"ENGINE_add");
  FUN_0051f8f0(0x26,0x6e,0);
LAB_0051af43:
  FUN_004222e0(DAT_00941008);
  return uVar5;
}

