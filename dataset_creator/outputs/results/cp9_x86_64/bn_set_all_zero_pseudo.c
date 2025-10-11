
void bn_set_all_zero(long *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < *(int *)((long)param_1 + 0xc)) {
    memset((void *)(*param_1 + (long)iVar1 * 8),0,
           (ulong)(uint)((*(int *)((long)param_1 + 0xc) + -1) - iVar1) * 8 + 8);
    return;
  }
  return;
}

