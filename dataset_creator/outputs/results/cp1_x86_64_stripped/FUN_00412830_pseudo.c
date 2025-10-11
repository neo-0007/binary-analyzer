
int FUN_00412830(int *param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    return 0;
  }
  if (iVar2 == 0x800) {
    lVar1 = *(long *)(param_1 + 0xc);
    iVar2 = 0x800;
  }
  else {
    if (iVar2 < 0x41) {
      if ((iVar2 < 0x10) || ((0x1000000010001U >> ((ulong)(iVar2 - 0x10) & 0x3f) & 1) == 0))
      goto LAB_0041284f;
LAB_004128ab:
      lVar1 = *(long *)(param_1 + 0xc);
joined_r0x004128b2:
      if (lVar1 != 0) {
        return 2;
      }
    }
    else {
      if ((iVar2 - 0x80U & 0xffffff7f) == 0) goto LAB_004128ab;
LAB_0041284f:
      if ((iVar2 - 0x200U & 0xfffffdff) == 0) {
        lVar1 = *(long *)(param_1 + 0xc);
        goto joined_r0x004128b2;
      }
    }
    if ((iVar2 - 2U & 0xfffffffd) != 0) goto LAB_0041287a;
    lVar1 = *(long *)(param_1 + 10);
  }
  if (lVar1 != 0) {
    return 2;
  }
LAB_0041287a:
  if ((iVar2 - 0x1000U & 0xffffefff) != 0) {
    return 1;
  }
  return 2 - (uint)(*(long *)(param_1 + 0xc) == 0);
}

