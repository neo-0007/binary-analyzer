
int ossl_i2c_ASN1_BIT_STRING(int *param_1,long *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  void *pvVar3;
  int iVar4;
  size_t __n;
  byte bVar5;
  byte *pbVar6;
  int iVar7;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar7 = *param_1;
  __n = (size_t)iVar7;
  if (iVar7 < 1) {
    iVar7 = iVar7 + 1;
    if (param_2 == (long *)0x0) {
      return iVar7;
    }
    puVar2 = (undefined1 *)*param_2;
    *puVar2 = 0;
    pbVar6 = puVar2 + 1;
  }
  else {
    if ((*(ulong *)(param_1 + 4) & 8) == 0) {
      do {
        bVar1 = *(byte *)(*(long *)(param_1 + 2) + -1 + __n);
        iVar4 = (int)__n;
        if (bVar1 != 0) {
          iVar7 = iVar4 + 1;
          goto LAB_005a0d69;
        }
        __n = __n - 1;
      } while (__n != 0);
      bVar1 = *(byte *)(*(long *)(param_1 + 2) + -1);
      iVar7 = 1;
      iVar4 = 0;
LAB_005a0d69:
      bVar5 = 0;
      if (((((bVar1 & 1) == 0) && (bVar5 = 1, (bVar1 & 2) == 0)) && (bVar5 = 2, (bVar1 & 4) == 0))
         && (((bVar5 = 3, (bVar1 & 8) == 0 && (bVar5 = 4, (bVar1 & 0x10) == 0)) &&
             ((bVar5 = 5, (bVar1 & 0x20) == 0 && (bVar5 = 6, (bVar1 & 0x40) == 0)))))) {
        bVar5 = (char)bVar1 >> 0x1f & 7;
      }
      if (param_2 == (long *)0x0) {
        return iVar7;
      }
      pbVar6 = (byte *)*param_2;
      *pbVar6 = bVar5;
      pbVar6 = pbVar6 + 1;
      if (iVar4 == 0) goto LAB_005a0d2c;
      pvVar3 = *(void **)(param_1 + 2);
    }
    else {
      bVar5 = (byte)*(ulong *)(param_1 + 4) & 7;
      iVar7 = iVar7 + 1;
      if (param_2 == (long *)0x0) {
        return iVar7;
      }
      pbVar6 = (byte *)*param_2;
      *pbVar6 = bVar5;
      pvVar3 = *(void **)(param_1 + 2);
      pbVar6 = pbVar6 + 1;
    }
    pvVar3 = memcpy(pbVar6,pvVar3,__n);
    pbVar6 = (byte *)((long)pvVar3 + __n);
    pbVar6[-1] = pbVar6[-1] & (byte)(0xff << bVar5);
  }
LAB_005a0d2c:
  *param_2 = (long)pbVar6;
  return iVar7;
}

