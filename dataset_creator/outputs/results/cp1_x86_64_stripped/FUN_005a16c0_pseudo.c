
undefined8 FUN_005a16c0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined *puVar4;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0) || (PTR_DAT_0093cd00 == (undefined *)0x0)) {
LAB_005a1758:
    uVar2 = 0;
LAB_005a175a:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar2;
    }
  }
  else {
    iVar1 = *(int *)PTR_DAT_0093cd00;
    puVar4 = PTR_DAT_0093cd00;
    while (iVar1 != 0) {
      iVar1 = FUN_005a1690(param_1,iVar1,0xffffffff);
      if (iVar1 != -1) {
        uVar2 = FUN_005a16b0(param_1,iVar1);
        piVar3 = (int *)FUN_004384c0(uVar2,0);
        if (piVar3 != (int *)0x0) {
          if (*piVar3 != 0x10) goto LAB_005a1758;
          local_28 = *(undefined8 *)(*(long *)(piVar3 + 2) + 8);
          uVar2 = FUN_005ac9a0();
          uVar2 = FUN_004a55c0(0,&local_28,(long)**(int **)(piVar3 + 2),uVar2);
          goto LAB_005a175a;
        }
        break;
      }
      piVar3 = (int *)(puVar4 + 4);
      puVar4 = puVar4 + 4;
      iVar1 = *piVar3;
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar2 = FUN_00436410();
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

