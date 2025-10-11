
undefined8 FUN_006224b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)FUN_0041aec0(0x18,"../crypto/ct/ct_log.c",0x3f);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ct/ct_log.c",0x42,"ctlog_store_load_ctx_new");
    FUN_0051f8f0(0x32,0xc0100,0);
    return 0;
  }
  *puVar2 = param_1;
  uVar5 = 0;
  lVar3 = FUN_004cc6d0(0);
  puVar2[1] = lVar3;
  if (lVar3 != 0) {
    iVar1 = FUN_004cc7d0(lVar3,param_2,0);
    if (iVar1 < 1) {
      FUN_0051f420();
      uVar4 = 0xef;
    }
    else {
      lVar3 = FUN_004ccb80(puVar2[1],0,"enabled_logs");
      if (lVar3 != 0) {
        iVar1 = FUN_004cde20(lVar3,0x2c,1,FUN_00622170,puVar2);
        if ((iVar1 == 0) || (puVar2[2] != 0)) {
          FUN_0051f420();
          uVar5 = 0;
          FUN_0051f540("../crypto/ct/ct_log.c",0xfb,"CTLOG_STORE_load_file");
          FUN_0051f8f0(0x32,0x6d,0);
          lVar3 = puVar2[1];
        }
        else {
          lVar3 = puVar2[1];
          uVar5 = 1;
        }
        goto LAB_0062255e;
      }
      FUN_0051f420(0);
      uVar4 = 0xf5;
    }
    FUN_0051f540("../crypto/ct/ct_log.c",uVar4,"CTLOG_STORE_load_file");
    FUN_0051f8f0(0x32,0x6d,0);
    lVar3 = puVar2[1];
  }
LAB_0062255e:
  FUN_004cc6e0(lVar3);
  FUN_0041ad60(puVar2,"../crypto/ct/ct_log.c",0x49);
  return uVar5;
}

