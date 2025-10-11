
void FUN_0053a0d0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  while( true ) {
    LOCK();
    plVar1 = param_1 + 3;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 != 1) && (0 < (int)lVar2 + -1)) break;
    plVar1 = (long *)param_1[2];
    (**(code **)(*param_1 + 0x40))(param_1[1]);
    param_1[1] = 0;
    thunk_FUN_005399a0(*param_1);
    FUN_00422300(param_1[4]);
    FUN_0041ad60(param_1,"../crypto/evp/evp_rand.c",0x185);
    param_1 = plVar1;
    if (plVar1 == (long *)0x0) {
      return;
    }
  }
  return;
}

