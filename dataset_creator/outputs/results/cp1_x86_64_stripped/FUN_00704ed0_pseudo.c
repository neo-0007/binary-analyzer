
uint * FUN_00704ed0(uint *param_1,uint param_2)

{
  undefined4 uVar1;
  long lVar2;
  uint *puVar3;
  long in_FS_OFFSET;
  
  if (param_1[0x1c] != 0xffffffff) {
    return (uint *)0x0;
  }
  lVar2 = *(long *)(param_1 + 0x36);
  param_1[0x1c] = param_2;
  param_1[0x24] = 0xffffffff;
  param_1[0x25] = 0xffffffff;
  *param_1 = *param_1 & 0xfffffff3 | 0x40;
  uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  if (0x827 < lVar2 - 0x93f160U) {
    FUN_00703130();
  }
  lVar2 = (**(code **)(lVar2 + 0x48))(param_1,0,1,3);
  if ((lVar2 != -1) || (puVar3 = (uint *)0x0, *(int *)(in_FS_OFFSET + -0x58) == 0x1d)) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
    puVar3 = param_1;
  }
  return puVar3;
}

