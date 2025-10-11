
undefined8 ossl_blake2b_update(long param_1,void *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  ulong __n;
  
  lVar1 = param_1 + 0x60;
  lVar4 = *(long *)(param_1 + 0xe0);
  __n = 0x80 - lVar4;
  if (param_3 <= __n) goto LAB_0044dac0;
  if (lVar4 == 0) {
    uVar2 = param_3;
    pvVar3 = param_2;
    if (param_3 < 0x81) {
LAB_0044daf0:
      lVar4 = *(long *)(param_1 + 0xe0);
      goto LAB_0044dac0;
    }
  }
  else {
    uVar2 = lVar4 + -0x80 + param_3;
    pvVar3 = (void *)((long)param_2 + __n);
    memcpy((void *)(lVar1 + lVar4),param_2,__n);
    blake2b_compress(param_1,lVar1,0x80);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    param_3 = uVar2;
    param_2 = pvVar3;
    if (uVar2 < 0x81) goto LAB_0044daf0;
  }
  param_3 = (ulong)((uint)uVar2 & 0x7f);
  if ((uVar2 & 0x7f) == 0) {
    param_3 = 0x80;
  }
  param_2 = (void *)((long)pvVar3 + (uVar2 - param_3));
  blake2b_compress(param_1,pvVar3,uVar2 - param_3);
  lVar4 = *(long *)(param_1 + 0xe0);
LAB_0044dac0:
  memcpy((void *)(lVar1 + lVar4),param_2,param_3);
  *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + param_3;
  return 1;
}

