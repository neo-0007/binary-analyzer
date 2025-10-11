
undefined8 FUN_0059d9a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  iVar1 = -1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  do {
    iVar1 = FUN_005a9a30(param_1,0x30,iVar1);
    if (iVar1 < 0) {
      iVar1 = 0;
      goto LAB_0059da23;
    }
    uVar3 = FUN_005a9a70(param_1,iVar1);
    uVar3 = FUN_005aa210(uVar3);
    iVar2 = FUN_0059d860(&local_38,uVar3);
  } while (iVar2 != 0);
LAB_0059da4e:
  uVar3 = 0;
LAB_0059da50:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
LAB_0059da23:
  iVar2 = FUN_00436480(param_2);
  uVar3 = local_38;
  if (iVar2 <= iVar1) goto LAB_0059da50;
  piVar4 = (int *)FUN_004364a0(param_2,iVar1);
  if ((*piVar4 == 1) && (iVar2 = FUN_0059d860(&local_38,*(undefined8 *)(piVar4 + 2)), iVar2 == 0))
  goto LAB_0059da4e;
  iVar1 = iVar1 + 1;
  goto LAB_0059da23;
}

