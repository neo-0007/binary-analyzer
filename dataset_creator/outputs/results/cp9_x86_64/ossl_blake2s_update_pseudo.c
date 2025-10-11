
undefined8 ossl_blake2s_update(long param_1,void *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  ulong __n;
  
  lVar1 = param_1 + 0x30;
  lVar4 = *(long *)(param_1 + 0x70);
  __n = 0x40 - lVar4;
  if (param_3 <= __n) goto LAB_0044f1a7;
  if (lVar4 == 0) {
    uVar2 = param_3;
    pvVar3 = param_2;
    if (param_3 < 0x41) {
LAB_0044f1d0:
      lVar4 = *(long *)(param_1 + 0x70);
      goto LAB_0044f1a7;
    }
  }
  else {
    uVar2 = lVar4 + -0x40 + param_3;
    pvVar3 = (void *)((long)param_2 + __n);
    memcpy((void *)(lVar1 + lVar4),param_2,__n);
    blake2s_compress(param_1,lVar1,0x40);
    *(undefined8 *)(param_1 + 0x70) = 0;
    param_3 = uVar2;
    param_2 = pvVar3;
    if (uVar2 < 0x41) goto LAB_0044f1d0;
  }
  param_3 = (ulong)((uint)uVar2 & 0x3f);
  if ((uVar2 & 0x3f) == 0) {
    param_3 = 0x40;
  }
  param_2 = (void *)((long)pvVar3 + (uVar2 - param_3));
  blake2s_compress(param_1,pvVar3,uVar2 - param_3);
  lVar4 = *(long *)(param_1 + 0x70);
LAB_0044f1a7:
  memcpy((void *)(lVar1 + lVar4),param_2,param_3);
  *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + param_3;
  return 1;
}

