
void FUN_00789530(long *param_1,long param_2,undefined1 *param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  
  plVar1 = *(long **)(param_2 + 0x3d0);
  *(byte *)(param_2 + 0x31d) = *(byte *)(param_2 + 0x31d) | 1;
  if ((plVar1 != (long *)0x0) && (lVar5 = *plVar1, lVar5 != 0)) {
    lVar4 = 8;
    do {
      if (((*(ushort *)(lVar5 + 0x31c) & 0x180) == 0) && ((*(byte *)(lVar5 + 0x31d) & 0x21) == 0)) {
        FUN_00789530(param_1,lVar5,param_3);
        plVar1 = *(long **)(param_2 + 0x3d0);
      }
      lVar5 = *(long *)((long)plVar1 + lVar4);
      lVar4 = lVar4 + 8;
    } while (lVar5 != 0);
  }
  if ((param_3 != (undefined1 *)0x0) && (piVar2 = *(int **)(param_2 + 0x3d8), piVar2 != (int *)0x0))
  {
    iVar3 = *piVar2;
    *param_3 = 1;
    iVar3 = iVar3 + -1;
    if (-1 < iVar3) {
      while( true ) {
        lVar5 = *(long *)(piVar2 + (long)iVar3 * 2 + 2);
        if (((*(ushort *)(lVar5 + 0x31c) & 0x180) == 0) && ((*(byte *)(lVar5 + 0x31d) & 0x21) == 0))
        {
          FUN_00789530(param_1,lVar5,param_3);
        }
        bVar6 = iVar3 == 0;
        iVar3 = iVar3 + -1;
        if (bVar6) break;
        piVar2 = *(int **)(param_2 + 0x3d8);
      }
    }
  }
  lVar5 = *param_1;
  *param_1 = lVar5 + -8;
  *(long *)(lVar5 + -8) = param_2;
  return;
}

