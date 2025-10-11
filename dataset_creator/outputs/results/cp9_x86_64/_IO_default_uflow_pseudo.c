
ulong _IO_default_uflow(long param_1)

{
  long lVar1;
  byte *pbVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 0xd8);
  if (0x827 < lVar1 - 0x932180U) {
    _IO_vtable_check();
  }
  uVar3 = (**(code **)(lVar1 + 0x20))(param_1);
  if ((int)uVar3 != -1) {
    pbVar2 = *(byte **)(param_1 + 8);
    *(byte **)(param_1 + 8) = pbVar2 + 1;
    uVar3 = (ulong)*pbVar2;
  }
  return uVar3;
}

