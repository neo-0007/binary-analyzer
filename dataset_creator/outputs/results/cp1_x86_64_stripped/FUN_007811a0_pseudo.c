
undefined4 FUN_007811a0(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  long in_FS_OFFSET;
  ulong local_38 [3];
  long local_20;
  
  plVar3 = DAT_0094ad28;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (DAT_0094ad30 == 0) {
    iVar4 = 6;
    do {
      LOCK();
      iVar1 = DAT_0094ad20;
      if (DAT_0094ad20 == 0) {
        DAT_0094ad20 = 1;
        iVar1 = 0;
      }
      UNLOCK();
      if (iVar1 == 0) {
        uVar5 = 0;
        if (DAT_0094ad28 == (long *)0x0) {
LAB_0078125e:
          plVar3 = (long *)FUN_00782950(0xd,"hosts",&DAT_0094ad28);
          if (plVar3 != (long *)0xffffffffffffffff) {
            lVar2 = *plVar3;
LAB_00781229:
            uVar5 = *(undefined4 *)(lVar2 + 0x18);
          }
        }
        else if (DAT_0094ad28 != (long *)0xffffffffffffffff) {
          lVar2 = *DAT_0094ad28;
          if (*(int *)(lVar2 + 0xc) == 0) {
            lVar2 = *(long *)(lVar2 + 0x10);
            FUN_00767f90(5,local_38);
            if (lVar2 + 300U < local_38[0]) goto LAB_0078125e;
            lVar2 = *plVar3;
          }
          goto LAB_00781229;
        }
        DAT_0094ad20 = 0;
        goto LAB_007811c9;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar5 = 0;
LAB_007811c9:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar5;
}

