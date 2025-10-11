
void FUN_006de4f0(undefined8 *param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  
  *(undefined2 *)(param_1 + 1) = 0;
  do {
    puVar1 = (undefined1 *)*param_1;
    lVar5 = thunk_FUN_007129d0(puVar1);
    do {
      lVar6 = lVar5;
      if (lVar6 == 0) {
        *puVar1 = 0;
        return;
      }
      cVar3 = puVar1[lVar6 + -1];
      lVar5 = lVar6 + -1;
    } while (((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)cVar3 * 2) & 0x20) != 0) ||
            (cVar3 == '/' || cVar3 == ','));
    puVar1[lVar6] = 0;
    cVar3 = *(char *)*param_1;
    if (cVar3 == '\0') {
      return;
    }
    iVar4 = 0;
    pcVar2 = (char *)*param_1;
    pcVar8 = (char *)0x0;
    do {
      while (pcVar7 = pcVar2, cVar3 == ',') {
        cVar3 = pcVar7[1];
        pcVar2 = pcVar7 + 1;
        pcVar8 = pcVar7;
        if (cVar3 == '\0') goto LAB_006de5c9;
      }
      if (cVar3 == '/') {
        iVar4 = iVar4 + 1;
        pcVar8 = pcVar7;
      }
      cVar3 = pcVar7[1];
      pcVar2 = pcVar7 + 1;
    } while (cVar3 != '\0');
LAB_006de5c9:
    if (iVar4 < 2) {
      return;
    }
    if (pcVar8 == (char *)0x0) {
      return;
    }
    iVar4 = thunk_FUN_007139b0(pcVar8,"/TRANSLIT",&PTR_PTR_00939c40);
    if ((iVar4 == 0) ||
       (iVar4 = thunk_FUN_007139b0(pcVar8,",TRANSLIT",&PTR_PTR_00939c40), iVar4 == 0)) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
    iVar4 = thunk_FUN_007139b0(pcVar8,"/IGNORE",&PTR_PTR_00939c40);
    if ((iVar4 == 0) || (iVar4 = thunk_FUN_007139b0(pcVar8,",IGNORE",&PTR_PTR_00939c40), iVar4 == 0)
       ) {
      *(undefined1 *)((long)param_1 + 9) = 1;
    }
    *pcVar8 = '\0';
  } while( true );
}

