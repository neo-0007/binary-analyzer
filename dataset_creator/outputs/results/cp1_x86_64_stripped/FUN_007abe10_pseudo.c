
long FUN_007abe10(long *param_1,code *param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (*param_2)(param_4);
  lVar2 = lVar1;
  if (lVar1 != 0) {
    do {
      LOCK();
      lVar2 = *param_1;
      if (lVar2 == 0) {
        *param_1 = lVar1;
      }
      UNLOCK();
      if (lVar2 == 0) {
        return lVar1;
      }
      lVar2 = *param_1;
    } while (lVar2 == 0);
    if (param_3 == (code *)0x0) {
      FUN_007104f0(lVar1);
    }
    else {
      (*param_3)(param_4,lVar1);
    }
  }
  return lVar2;
}

