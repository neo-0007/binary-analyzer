
ulong FUN_0066ed80(long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0xe1) != '\0') {
    return (ulong)*(byte *)(param_1 + 0xe0);
  }
  plVar1 = *(long **)(param_1 + 0xf0);
  if (plVar1 != (long *)0x0) {
    if ((char)plVar1[7] == '\0') {
      FUN_0063d6f0(plVar1);
      uVar2 = 0x20;
      if (*(code **)(*plVar1 + 0x30) != FUN_00405e50) {
        uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,0x20);
      }
    }
    else {
      uVar2 = (ulong)*(byte *)((long)plVar1 + 0x59);
    }
    *(char *)(param_1 + 0xe0) = (char)uVar2;
    *(undefined1 *)(param_1 + 0xe1) = 1;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403826();
}

