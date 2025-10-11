
undefined4 FUN_005fcc30(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = FUN_004ab640();
  uVar4 = FUN_0040b020(uVar3);
  iVar1 = FUN_0040ac10(uVar4);
  uVar2 = 0;
  if ((iVar1 <= param_3) &&
     (iVar1 = FUN_00406090(uVar3,param_2,&local_24), uVar2 = local_24, iVar1 < 1)) {
    uVar2 = 0xffffffff;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}

