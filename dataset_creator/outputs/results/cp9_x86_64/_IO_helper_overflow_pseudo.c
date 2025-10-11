
ulong _IO_helper_overflow(long param_1,uint param_2)

{
  wchar_t *__s1;
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint *puVar4;
  int iVar5;
  long lVar6;
  
  lVar2 = *(long *)(param_1 + 0xa0);
  lVar1 = *(long *)(param_1 + 0x1c8);
  puVar4 = *(uint **)(lVar2 + 0x20);
  lVar6 = *(long *)(lVar2 + 0x18);
  iVar5 = (int)((long)puVar4 - lVar6 >> 2);
  if (iVar5 != 0) {
    lVar2 = *(long *)(lVar1 + 0xd8);
    if (0x827 < lVar2 - 0x932180U) {
      _IO_vtable_check();
      lVar6 = *(long *)(*(long *)(param_1 + 0xa0) + 0x18);
    }
    lVar1 = (**(code **)(lVar2 + 0x38))(lVar1,lVar6,(long)iVar5);
    if ((lVar1 == 0) || (lVar1 == 0xffffffff)) {
      return 0xffffffff;
    }
    __s1 = *(wchar_t **)(*(long *)(param_1 + 0xa0) + 0x18);
    wmemmove(__s1,__s1 + lVar1,iVar5 - lVar1);
    lVar2 = *(long *)(param_1 + 0xa0);
    puVar4 = (uint *)(*(long *)(lVar2 + 0x20) + lVar1 * -4);
    *(uint **)(lVar2 + 0x20) = puVar4;
  }
  if (puVar4 < *(uint **)(lVar2 + 0x28)) {
    *(uint **)(lVar2 + 0x20) = puVar4 + 1;
    *puVar4 = param_2;
    return (ulong)param_2;
  }
  uVar3 = __woverflow(param_1,param_2);
  return uVar3;
}

