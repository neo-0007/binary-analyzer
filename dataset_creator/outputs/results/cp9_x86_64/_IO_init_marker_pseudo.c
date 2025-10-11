
void _IO_init_marker(undefined8 *param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *param_2;
  param_1[1] = param_2;
  if ((uVar5 & 0x800) == 0) {
    uVar3 = *(ulong *)(param_2 + 2);
    uVar4 = uVar5 & 0x100;
  }
  else {
    uVar3 = *(ulong *)(param_2 + 10);
    if (*(ulong *)(param_2 + 8) < uVar3) {
      lVar1 = *(long *)(param_2 + 0x36);
      if (0x827 < lVar1 - 0x932180U) {
        _IO_vtable_check();
      }
      iVar2 = (**(code **)(lVar1 + 0x18))(param_2,0xffffffff);
      if (iVar2 == -1) {
        uVar3 = *(ulong *)(param_2 + 2);
        uVar4 = *param_2 & 0x100;
        goto LAB_006fe485;
      }
      uVar5 = *param_2;
      uVar3 = *(ulong *)(param_2 + 10);
    }
    uVar4 = uVar5 & 0x100;
    if (uVar4 == 0) {
      *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_2 + 0xe);
      if (*(ulong *)(param_2 + 4) < uVar3) {
        *(ulong *)(param_2 + 4) = uVar3;
      }
    }
    else {
      *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_2 + 0x14);
    }
    *(ulong *)(param_2 + 2) = uVar3;
    *(ulong *)(param_2 + 0xc) = uVar3;
    *(ulong *)(param_2 + 8) = uVar3;
    *param_2 = uVar5 & 0xfffff7ff;
  }
LAB_006fe485:
  if (uVar4 == 0) {
    uVar5 = param_2[6];
  }
  else {
    uVar5 = param_2[4];
  }
  *(uint *)(param_1 + 2) = (int)uVar3 - uVar5;
  *param_1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 **)(param_2 + 0x18) = param_1;
  return;
}

