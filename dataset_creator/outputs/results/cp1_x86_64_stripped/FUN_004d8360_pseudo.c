
uint FUN_004d8360(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  uVar1 = FUN_004d8140(param_1,&local_34);
  if (uVar1 != 0) {
    uVar1 = 0;
    if (((*(long *)(param_1 + 0x18) != 0) && (*(long *)(param_1 + 0x70) != 0)) &&
       (uVar1 = 0, *(long *)(param_1 + 0x68) != 0)) {
      lVar3 = FUN_004b2a70(*(undefined8 *)(param_1 + 0xb8));
      if (lVar3 == 0) {
        lVar4 = 0;
        uVar1 = local_34;
      }
      else {
        lVar4 = FUN_004b7690();
        uVar1 = local_34;
        if ((lVar4 != 0) &&
           (iVar2 = FUN_004d85d0(lVar3,param_1,*(undefined8 *)(param_1 + 0x70),lVar4),
           uVar1 = local_34, iVar2 != 0)) {
          iVar2 = FUN_004b7840(lVar4,*(undefined8 *)(param_1 + 0x68));
          uVar1 = (uint)(iVar2 == 0);
        }
      }
      FUN_004b7fa0(lVar4);
      FUN_004b2b50(lVar3);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar1;
}

