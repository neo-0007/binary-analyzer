
long FUN_0059db40(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  lVar2 = FUN_0059f590(param_1,0xb1,0,0);
  if (lVar2 != 0) {
    iVar4 = 0;
    while( true ) {
      iVar1 = FUN_00436480(lVar2);
      if (iVar1 <= iVar4) break;
      puVar3 = (undefined8 *)FUN_004364a0(lVar2,iVar4);
      iVar1 = FUN_00423da0(*puVar3);
      if ((iVar1 == 0xb2) && (*(int *)puVar3[1] == 6)) {
        iVar1 = FUN_0059d860(&local_38,*(undefined8 *)((int *)puVar3[1] + 2));
        if (iVar1 == 0) break;
      }
      iVar4 = iVar4 + 1;
    }
    FUN_0060f070(lVar2);
    lVar2 = local_38;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

