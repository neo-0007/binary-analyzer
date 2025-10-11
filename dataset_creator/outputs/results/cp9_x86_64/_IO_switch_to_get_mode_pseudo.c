
undefined8 _IO_switch_to_get_mode(uint *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 10);
  if (*(ulong *)(param_1 + 8) < uVar3) {
    lVar1 = *(long *)(param_1 + 0x36);
    if (0x827 < lVar1 - 0x932180U) {
      _IO_vtable_check();
    }
    uVar2 = (**(code **)(lVar1 + 0x18))(param_1,0xffffffff);
    if ((int)uVar2 == -1) {
      return uVar2;
    }
    uVar3 = *(ulong *)(param_1 + 10);
  }
  if ((*param_1 & 0x100) == 0) {
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0xe);
    if (*(ulong *)(param_1 + 4) < uVar3) {
      *(ulong *)(param_1 + 4) = uVar3;
    }
  }
  else {
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x14);
  }
  *(ulong *)(param_1 + 2) = uVar3;
  *param_1 = *param_1 & 0xfffff7ff;
  *(ulong *)(param_1 + 0xc) = uVar3;
  *(ulong *)(param_1 + 8) = uVar3;
  return 0;
}

