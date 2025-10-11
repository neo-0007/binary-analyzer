
undefined8 FUN_007712d0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  long in_FS_OFFSET;
  
  lVar1 = **(long **)(in_FS_OFFSET + -0xd8);
  pcVar4 = *(char **)(lVar1 + 0x98);
  if (*pcVar4 != '\0') {
    lVar5 = 0;
    do {
      iVar2 = thunk_FUN_00712780(param_1,pcVar4);
      if (iVar2 == 0) {
        return *(undefined8 *)(lVar1 + (lVar5 + 8 + (ulong)*(uint *)(lVar1 + 0xd0)) * 8);
      }
      lVar5 = lVar5 + 1;
      lVar3 = thunk_FUN_007129d0(pcVar4);
      pcVar4 = pcVar4 + lVar3 + 1;
    } while (*pcVar4 != '\0');
  }
  return 0;
}

