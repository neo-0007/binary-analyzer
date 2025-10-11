
undefined4 FUN_00461720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  uVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  iVar2 = FUN_004eaa90(param_2,&local_38);
  lVar1 = local_38;
  if (((0 < iVar2) && (local_38 != 0)) && (lVar4 = FUN_0043bf50(param_1,param_3), lVar4 != 0)) {
    uVar3 = FUN_004ab7e0(lVar4,lVar1,iVar2);
    FUN_004ab560(lVar4);
  }
  FUN_0041ad60(local_38,"../providers/implementations/encode_decode/encode_key2blob.c",0x61);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

