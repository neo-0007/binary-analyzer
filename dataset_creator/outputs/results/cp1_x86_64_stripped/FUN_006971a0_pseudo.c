
void FUN_006971a0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  param_1[1] = (long)&PTR_FUN_009380c8;
  if ((long *)param_1[10] != param_1 + 0xc) {
    thunk_FUN_007104f0();
  }
  param_1[1] = (long)&PTR_FUN_009388a8;
  FUN_00625980(param_1 + 8);
  lVar1 = param_2[1];
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[2];
  return;
}

