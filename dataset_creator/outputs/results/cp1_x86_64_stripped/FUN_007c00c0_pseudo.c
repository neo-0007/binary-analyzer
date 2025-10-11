
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c00c0(ulong param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  
  plVar4 = DAT_0094ae28;
  plVar5 = (long *)DAT_0094ae28[1];
  if (DAT_0094ae28 != &DAT_0094ae20) {
    do {
      if ((int)plVar4[2] < 1) {
        lVar1 = *plVar4;
        plVar2 = (long *)plVar4[1];
        *(long **)(lVar1 + 8) = plVar2;
        *plVar2 = lVar1;
        _DAT_0094ae08 = 0;
        DAT_0094ae10 = DAT_0094ae10 - plVar4[0x7b];
        FUN_0078a5b0(plVar4 + -0x58,0);
        iVar3 = FUN_0076f080(plVar4[0x7a]);
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00404713();
        }
        if (DAT_0094ae10 <= param_1) {
          return;
        }
      }
      bVar6 = plVar5 != &DAT_0094ae20;
      plVar4 = plVar5;
      plVar5 = (long *)plVar5[1];
    } while (bVar6);
  }
  return;
}

