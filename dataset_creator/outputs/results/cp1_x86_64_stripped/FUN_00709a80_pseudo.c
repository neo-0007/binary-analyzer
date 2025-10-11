
/* WARNING: Removing unreachable block (ram,0x00709b82) */

undefined4 FUN_00709a80(ulong param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar5;
  long in_FS_OFFSET;
  undefined1 auStack_b8 [136];
  long local_30;
  ulong uVar4;
  
  uVar3 = (int)param_2 - 0x20;
  uVar4 = (ulong)uVar3;
  uVar5 = 0x16;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (1 < uVar3) {
    uVar4 = (ulong)param_2 & 0xffffffff;
    if (param_1 == *(ulong *)(in_FS_OFFSET + 0x10)) {
      syscall();
      uVar3 = FUN_00768c70();
      param_2 = (undefined1 *)0xba;
      param_1 = (ulong)uVar3;
      syscall();
      uVar5 = 0;
    }
    else {
      syscall();
      piVar1 = (int *)(param_1 + 0x974);
      LOCK();
      iVar2 = *piVar1;
      if (iVar2 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      if (iVar2 != 0) {
        FUN_00709590(piVar1,&DAT_00829500);
      }
      if (*(char *)(param_1 + 0x973) == '\0') {
        FUN_00768c70();
        syscall();
      }
      uVar5 = 0;
      LOCK();
      iVar2 = *(int *)(param_1 + 0x974);
      *(int *)(param_1 + 0x974) = 0;
      UNLOCK();
      if (1 < iVar2) {
        FUN_00709660(piVar1);
      }
      uVar4 = 0;
      param_1 = 2;
      syscall();
      param_2 = auStack_b8;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60(param_1,param_2,uVar4);
}

