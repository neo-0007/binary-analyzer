
int obj_cmp_BSEARCH_CMP_FN(long *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x14);
  if ((iVar1 - *(int *)(&DAT_008d53b4 + (ulong)*param_2 * 0x28) == 0) && (iVar1 != 0)) {
    iVar1 = bcmp(*(void **)(*param_1 + 0x18),*(void **)(&DAT_008d53b8 + (ulong)*param_2 * 0x28),
                 (long)iVar1);
    return iVar1;
  }
  return iVar1 - *(int *)(&DAT_008d53b4 + (ulong)*param_2 * 0x28);
}

