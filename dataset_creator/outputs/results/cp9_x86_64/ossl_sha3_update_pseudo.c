
undefined8 ossl_sha3_update(long param_1,void *param_2,size_t param_3)

{
  void *__dest;
  ulong uVar1;
  long lVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  ulong __n;
  
  uVar1 = *(ulong *)(param_1 + 200);
  if (param_3 == 0) {
    return 1;
  }
  lVar2 = *(long *)(param_1 + 0xd8);
  if (lVar2 == 0) {
    if (param_3 < uVar1) goto LAB_0057a4ed;
LAB_0057a510:
    sVar4 = SHA3_absorb(param_1,param_2,param_3,uVar1);
    sVar3 = param_3;
    pvVar5 = param_2;
  }
  else {
    __n = uVar1 - lVar2;
    __dest = (void *)(param_1 + 0xe0 + lVar2);
    if (param_3 < __n) {
      memcpy(__dest,param_2,param_3);
      *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + param_3;
      return 1;
    }
    pvVar5 = (void *)((long)param_2 + __n);
    memcpy(__dest,param_2,__n);
    param_3 = (lVar2 + param_3) - uVar1;
    SHA3_absorb(param_1,param_1 + 0xe0,uVar1,uVar1);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    param_2 = pvVar5;
    sVar4 = param_3;
    sVar3 = param_3;
    if (uVar1 <= param_3) goto LAB_0057a510;
  }
  param_3 = sVar4;
  if (param_3 == 0) {
    return 1;
  }
  param_2 = (void *)((long)pvVar5 + (sVar3 - param_3));
LAB_0057a4ed:
  memcpy((void *)(param_1 + 0xe0),param_2,param_3);
  *(size_t *)(param_1 + 0xd8) = param_3;
  return 1;
}

