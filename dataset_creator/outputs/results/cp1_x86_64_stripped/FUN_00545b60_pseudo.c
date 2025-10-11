
long * FUN_00545b60(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 auStack_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  plVar1 = (long *)FUN_005454d0(param_1,param_2,auStack_18);
  plVar2 = (long *)(param_1 + 0x90);
  if (*plVar1 == 0) {
    plVar2 = (long *)(param_1 + 0x98);
  }
  LOCK();
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  plVar1 = (long *)*plVar1;
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

