
undefined8 FUN_00476b70(long param_1,undefined8 param_2,ulong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      iVar1 = FUN_00545060(*(undefined8 *)(param_1 + 8),param_2,&local_24);
      if (iVar1 != 0) {
        *param_3 = (ulong)local_24;
        uVar2 = 1;
        goto LAB_00476bea;
      }
    }
    else if (*(ulong *)(param_1 + 0x98) != 0) {
      if (param_3 != (ulong *)0x0) {
        *param_3 = *(ulong *)(param_1 + 0x98);
      }
      thunk_FUN_00713a50(param_2,param_1 + 0x54);
      uVar2 = 1;
      goto LAB_00476bea;
    }
  }
  uVar2 = 0;
LAB_00476bea:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

