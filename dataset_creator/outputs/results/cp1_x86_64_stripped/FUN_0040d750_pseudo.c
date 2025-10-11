
long FUN_0040d750(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_00419fe0(8,0);
  if (iVar1 != 0) {
    local_28 = FUN_00422e80(param_2,1);
    lVar2 = local_28;
    if (local_28 != 0) goto LAB_0040d797;
    uVar3 = FUN_00418710(param_1);
    iVar1 = FUN_00418920(uVar3,param_2);
    if ((iVar1 != 0) &&
       (iVar1 = FUN_004182f0(uVar3,iVar1,FUN_0040d500,&local_28), lVar2 = local_28, iVar1 != 0))
    goto LAB_0040d797;
  }
  lVar2 = 0;
LAB_0040d797:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar2;
}

