
long FUN_00554ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  iVar1 = FUN_00557780(&local_30,&local_28,&local_40,"DH PARAMETERS",param_1,param_3);
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    local_38 = local_30;
    iVar1 = thunk_FUN_00712780(local_40,"X9.42 DH PARAMETERS",param_4,uStack_50);
    if (iVar1 == 0) {
      lVar2 = FUN_004d31a0(param_2,&local_38,local_28);
    }
    else {
      lVar2 = FUN_004d3120();
    }
    if (lVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/pem/pem_all.c",0xca,"PEM_read_bio_DHparams");
      FUN_0051f8f0(9,0x8000d,0);
    }
    FUN_0041ad60(local_40,"../crypto/pem/pem_all.c",0xcb);
    FUN_0041ad60(local_30,"../crypto/pem/pem_all.c",0xcc);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar2;
}

