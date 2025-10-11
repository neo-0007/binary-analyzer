
undefined8 addr_expand(void *param_1,uint *param_2,uint param_3,byte param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  
  uVar2 = *param_2;
  lVar4 = (long)(int)uVar2;
  if (param_3 < uVar2) {
    return 0;
  }
  if (uVar2 != 0) {
    param_1 = memcpy(param_1,*(void **)(param_2 + 2),(long)(int)uVar2);
    if ((*(ulong *)(param_2 + 4) & 7) != 0) {
      pbVar1 = (byte *)((long)param_1 + (long)(int)*param_2 + -1);
      bVar3 = (byte)(0xff >> (8 - ((byte)*(ulong *)(param_2 + 4) & 7) & 0x1f));
      if (param_4 == 0) {
        *pbVar1 = ~bVar3 & *pbVar1;
        lVar4 = (long)(int)*param_2;
        goto LAB_006042e0;
      }
      *pbVar1 = *pbVar1 | bVar3;
    }
    lVar4 = (long)(int)*param_2;
  }
LAB_006042e0:
  memset((void *)((long)param_1 + lVar4),(uint)param_4,(long)(int)(param_3 - (int)lVar4));
  return 1;
}

