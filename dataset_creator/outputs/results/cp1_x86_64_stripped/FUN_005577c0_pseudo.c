
long FUN_005577c0(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_30 = 0;
  iVar1 = FUN_00557780(&local_30,&local_28,0,param_2,param_3,param_5);
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    local_38 = local_30;
    lVar2 = (*param_1)(param_4,&local_38,local_28,uStack_40);
    if (lVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/pem/pem_oth.c",0x21,"PEM_ASN1_read_bio");
      FUN_0051f8f0(9,0x8000d,0);
    }
    FUN_0041ad60(local_30,"../crypto/pem/pem_oth.c",0x22);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

