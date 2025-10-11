
undefined8 keccak_update(long param_1,void *param_2,size_t param_3)

{
  void *__dest;
  long lVar1;
  long lVar2;
  size_t __n;
  void *pvVar3;
  ulong __n_00;
  
  lVar1 = *(long *)(param_1 + 200);
  if (param_3 != 0) {
    lVar2 = *(long *)(param_1 + 0xd8);
    pvVar3 = param_2;
    if (lVar2 != 0) {
      __n_00 = lVar1 - lVar2;
      __dest = (void *)(param_1 + 0xe0 + lVar2);
      if (param_3 < __n_00) {
        memcpy(__dest,param_2,param_3);
        *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + param_3;
        return 1;
      }
      pvVar3 = (void *)((long)param_2 + __n_00);
      memcpy(__dest,param_2,__n_00);
      (**(code **)(param_1 + 400))(param_1,param_1 + 0xe0,lVar1);
      param_3 = (param_3 + lVar2) - lVar1;
      *(undefined8 *)(param_1 + 0xd8) = 0;
    }
    __n = (**(code **)(param_1 + 400))(param_1,pvVar3,param_3);
    if (__n != 0) {
      memcpy((void *)(param_1 + 0xe0),(void *)((long)pvVar3 + (param_3 - __n)),__n);
      *(size_t *)(param_1 + 0xd8) = __n;
    }
  }
  return 1;
}

