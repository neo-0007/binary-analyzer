
undefined8 FUN_00771a70(undefined8 param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  
  iVar5 = 0;
  lVar3 = thunk_FUN_007129d0();
  lVar1 = *param_2;
  pcVar6 = *(char **)(lVar1 + 0x90);
  while( true ) {
    lVar4 = thunk_FUN_007129d0(pcVar6);
    if (lVar3 == lVar4) {
      iVar2 = thunk_FUN_00713570(param_1,pcVar6,lVar3);
      if (iVar2 == 0) {
        return *(undefined8 *)(lVar1 + 0x40 + (ulong)(uint)(iVar5 + *(int *)(lVar1 + 200)) * 8);
      }
    }
    pcVar6 = pcVar6 + lVar4 + 1;
    if (*pcVar6 == '\0') break;
    iVar5 = iVar5 + 1;
  }
  return 0;
}

