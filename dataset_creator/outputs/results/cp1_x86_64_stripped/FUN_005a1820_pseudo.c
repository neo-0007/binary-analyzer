
undefined4 FUN_005a1820(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  uVar2 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  uVar3 = FUN_005ac9a0();
  iVar1 = FUN_004a6000(param_2,&local_38,uVar3);
  if (0 < iVar1) {
    uVar2 = FUN_005a1800(param_1,param_3,0x10,local_38,iVar1);
    FUN_0041ad60(local_38,"../crypto/x509/x509_req.c",0xb6);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

