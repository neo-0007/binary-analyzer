
undefined4
FUN_00558c70(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  long local_a0;
  undefined1 local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = 0;
  if ((((*(long *)(param_2 + 0x20) != 0) || (*(long *)(param_2 + 0x68) != 0)) &&
      (*(long *)(param_2 + 0x60) != 0)) && (iVar2 = FUN_00410260(&local_a0,param_2), iVar2 != 0)) {
    param_2 = local_a0;
  }
  lVar1 = *(long *)(param_2 + 8);
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0xc0) == 0)) {
    FUN_0051f420();
    uVar3 = 0;
    FUN_0051f540("../crypto/pem/pem_pkey.c",0x159,"PEM_write_bio_PrivateKey_traditional");
    FUN_0051f8f0(9,0x6e,0);
  }
  else {
    FUN_004aeb30(local_98,0x50,"%s PRIVATE KEY",*(undefined8 *)(lVar1 + 0x10));
    uVar3 = FUN_00555e60(FUN_005bb1e0,local_98,param_1,param_2,param_3,param_4,param_5,param_6,
                         param_7);
    FUN_0040f4f0(local_a0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

