
void _IO_doallocbuf(uint *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  if (*(long *)(param_1 + 0xe) != 0) {
    return;
  }
  uVar3 = *param_1;
  if (((uVar3 & 2) == 0) || (0 < (int)param_1[0x30])) {
    lVar1 = *(long *)(param_1 + 0x36);
    if (0x827 < lVar1 - 0x932180U) {
      _IO_vtable_check();
    }
    iVar2 = (**(code **)(lVar1 + 0x68))(param_1);
    if (iVar2 != -1) {
      return;
    }
    uVar3 = *param_1;
    if ((*(void **)(param_1 + 0xe) != (void *)0x0) && ((uVar3 & 1) == 0)) {
      free(*(void **)(param_1 + 0xe));
      uVar3 = *param_1;
    }
  }
  *param_1 = uVar3 | 1;
  *(long *)(param_1 + 0xe) = (long)param_1 + 0x83;
  *(uint **)(param_1 + 0x10) = param_1 + 0x21;
  return;
}

