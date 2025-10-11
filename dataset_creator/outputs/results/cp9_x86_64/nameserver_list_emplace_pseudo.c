
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * nameserver_list_emplace(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  void *__ptr;
  long lVar4;
  char cVar5;
  long lVar6;
  long *__ptr_00;
  
  if (param_1[1] == -1) {
    return (undefined8 *)0x0;
  }
  lVar6 = *param_1;
  if (lVar6 == param_1[1]) {
    plVar1 = param_1 + 3;
    cVar5 = __libc_dynarray_emplace_enlarge(param_1,plVar1,8);
    lVar6 = *param_1;
    if (cVar5 == '\0') {
      __ptr_00 = (long *)param_1[2];
      if (lVar6 != 0) {
        plVar3 = __ptr_00 + lVar6;
        do {
          __ptr = (void *)*__ptr_00;
          __ptr_00 = __ptr_00 + 1;
          free(__ptr);
        } while (__ptr_00 != plVar3);
        __ptr_00 = (long *)param_1[2];
      }
      if (plVar1 != __ptr_00) {
        free(__ptr_00);
      }
      lVar4 = _UNK_00824968;
      lVar6 = _DAT_00824960;
      param_1[2] = (long)plVar1;
      *param_1 = lVar6;
      param_1[1] = lVar4;
      return (undefined8 *)0x0;
    }
  }
  puVar2 = (undefined8 *)(param_1[2] + lVar6 * 8);
  *param_1 = lVar6 + 1;
  *puVar2 = 0;
  return puVar2;
}

