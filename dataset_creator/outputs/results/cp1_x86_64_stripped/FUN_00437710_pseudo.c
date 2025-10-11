
long FUN_00437710(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_f8 [2];
  undefined8 local_e8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_f8[0] = param_1;
  iVar1 = FUN_00422340(&DAT_0093fda4,FUN_004372d0);
  if ((iVar1 == 0) || (DAT_0093fda0 == 0)) {
    FUN_0051f420();
    lVar2 = 0;
    FUN_0051f540("../crypto/store/store_register.c",0xe3,"ossl_store_get0_loader_int");
    FUN_0051f8f0(0x2c,0xc0100,0);
  }
  else {
    lVar2 = 0;
    iVar1 = FUN_004222c0(DAT_0093fda8);
    if (iVar1 != 0) {
      if (DAT_0093fd98 == 0) {
        DAT_0093fd98 = FUN_00545610(FUN_00437310,FUN_00437300);
        if (DAT_0093fd98 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/store/store_register.c",0xea,"ossl_store_get0_loader_int");
          FUN_0051f8f0(0x2c,0xc0103,0);
          FUN_004222e0(DAT_0093fda8);
          lVar2 = 0;
          goto LAB_004377cd;
        }
      }
      lVar2 = FUN_00545b60(DAT_0093fd98,local_f8);
      if (lVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/store/store_register.c",0xed,"ossl_store_get0_loader_int");
        FUN_0051f8f0(0x2c,0x69,"scheme=%s",param_1);
      }
      FUN_004222e0(DAT_0093fda8);
    }
  }
LAB_004377cd:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

