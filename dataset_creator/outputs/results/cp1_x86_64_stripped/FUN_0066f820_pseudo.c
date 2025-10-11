
ulong FUN_0066f820(long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0xe4) != '\0') {
    return (ulong)*(uint *)(param_1 + 0xe0);
  }
  plVar1 = *(long **)(param_1 + 0xf0);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x20);
    *(undefined1 *)(param_1 + 0xe4) = 1;
    *(int *)(param_1 + 0xe0) = (int)uVar2;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403826();
}

