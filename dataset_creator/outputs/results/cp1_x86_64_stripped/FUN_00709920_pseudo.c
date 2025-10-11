
/* WARNING: Removing unreachable block (ram,0x00709a12) */

undefined4 FUN_00709920(long param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  long in_FS_OFFSET;
  undefined1 auStack_b8 [136];
  long local_30;
  
  puVar4 = auStack_b8;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == *(long *)(in_FS_OFFSET + 0x10)) {
    syscall();
    uVar3 = FUN_00768c70();
    puVar4 = (undefined1 *)0xba;
    syscall();
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
    LOCK();
    iVar2 = *(int *)(param_1 + 0x974);
    *(int *)(param_1 + 0x974) = 0;
    UNLOCK();
    if (1 < iVar2) {
      FUN_00709660(piVar1);
    }
    param_2 = 0;
    uVar3 = 2;
    syscall();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60(uVar3,puVar4,param_2);
}

