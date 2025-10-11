
undefined4 FUN_004aebe0(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  local_14 = 4;
  iVar2 = FUN_00770fd0(param_1,1,4,&local_18,&local_14);
  uVar1 = local_18;
  if (iVar2 < 0) {
    puVar3 = (undefined4 *)FUN_006d2700();
    uVar1 = *puVar3;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

