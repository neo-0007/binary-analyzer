
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rsaz_1024_scatter5_avx2(long param_1,undefined1 (*param_2) [32],int param_3)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  int iVar3;
  undefined1 (*pauVar4) [16];
  
  auVar2 = _DAT_005ba2a0;
  pauVar4 = (undefined1 (*) [16])(param_1 + (ulong)(uint)(param_3 << 4));
  iVar3 = 9;
  do {
    auVar1 = *param_2;
    param_2 = param_2 + 1;
    auVar1 = vpermd_avx2(auVar2,auVar1);
    *pauVar4 = auVar1._0_16_;
    pauVar4 = pauVar4 + 0x20;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

