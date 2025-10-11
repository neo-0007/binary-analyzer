
void FUN_00785df0(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  
  pcVar3 = *(char **)(param_1 + 8);
  if ((*pcVar3 == '\0') && (pcVar3 = *(char **)PTR_PTR_0093adf8, pcVar3 == (char *)0x0)) {
    pcVar3 = "<main program>";
  }
  FUN_00787060("object=%s [%lu]\n",pcVar3,*(undefined8 *)(param_1 + 0x30));
  if (*(long *)(param_1 + 0x398) == 0) {
    FUN_00787060(" no scope\n");
  }
  else {
    lVar2 = (long)param_2 * 8;
    lVar1 = *(long *)(*(long *)(param_1 + 0x398) + (long)param_2 * 8);
    while (lVar1 != 0) {
      FUN_00787060(" scope %u:",param_2);
      plVar4 = *(long **)(*(long *)(param_1 + 0x398) + lVar2);
      if ((int)plVar4[1] != 0) {
        uVar6 = 0;
        do {
          pcVar3 = *(char **)(*(long *)(*plVar4 + uVar6 * 8) + 8);
          if ((*pcVar3 == '\0') && (pcVar3 = *(char **)PTR_PTR_0093adf8, pcVar3 == (char *)0x0)) {
            pcVar3 = "<program name unknown>";
          }
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulong)uVar5;
          FUN_00787110(" %s",pcVar3);
          plVar4 = *(long **)(*(long *)(param_1 + 0x398) + lVar2);
        } while (uVar5 < *(uint *)(plVar4 + 1));
      }
      lVar2 = lVar2 + 8;
      param_2 = param_2 + 1;
      FUN_00787110(&DAT_008243ea);
      lVar1 = *(long *)(*(long *)(param_1 + 0x398) + lVar2);
    }
  }
  FUN_00787060(&DAT_008243ea);
  return;
}

