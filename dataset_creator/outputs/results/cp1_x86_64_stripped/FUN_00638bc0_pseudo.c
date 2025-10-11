
void FUN_00638bc0(long *param_1,ulong param_2)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined1 local_21;
  long local_20;
  
  lVar5 = *param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (ulong *)(lVar5 + -0x10);
  if (param_2 <= *puVar1) {
    if (*(int *)(lVar5 + -8) < 1) goto LAB_00638c20;
    lVar5 = *param_1;
    param_2 = *puVar1;
  }
  lVar4 = FUN_00638b30((long *)(lVar5 + -0x18),&local_21,param_2 - *(long *)(lVar5 + -0x18));
  lVar5 = *param_1;
  if ((undefined8 *)(lVar5 + -0x18) != &DAT_009452a0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      piVar2 = (int *)(lVar5 + -8);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
    }
    else {
      iVar3 = *(int *)(lVar5 + -8);
      *(int *)(lVar5 + -8) = iVar3 + -1;
    }
    if (iVar3 < 1) {
      thunk_FUN_007104f0((undefined8 *)(lVar5 + -0x18),&local_21);
    }
  }
  *param_1 = lVar4;
LAB_00638c20:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

