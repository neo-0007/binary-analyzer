
long ossl_sa_get(int *param_1,ulong param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = 0;
  if (((param_1 != (int *)0x0) && (*(long *)(param_1 + 4) != 0)) &&
     (param_2 <= *(ulong *)(param_1 + 2))) {
    lVar4 = *(long *)(param_1 + 6);
    iVar3 = *param_1 + -1;
    if (lVar4 != 0) {
      if (0 < iVar3) {
        iVar2 = iVar3 * 0xc;
        do {
          iVar3 = iVar3 + -1;
          bVar1 = (byte)iVar2;
          iVar2 = iVar2 + -0xc;
          lVar4 = *(long *)(lVar4 + (ulong)((uint)(param_2 >> (bVar1 & 0x3f)) & 0xfff) * 8);
          if (lVar4 == 0) {
            return 0;
          }
        } while (0 < iVar3);
      }
      if (lVar4 != 0) {
        lVar4 = *(long *)(lVar4 + (ulong)((uint)param_2 & 0xfff) * 8);
      }
    }
  }
  return lVar4;
}

