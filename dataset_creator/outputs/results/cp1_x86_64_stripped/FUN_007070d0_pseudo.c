
uint * FUN_007070d0(uint *param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  lVar2 = *(long *)(param_1 + 0x36);
  if (0x827 < lVar2 - 0x93f160U) {
    FUN_00703130();
  }
  iVar3 = (**(code **)(lVar2 + 0x60))(param_1);
  if (iVar3 == -1) {
    param_1 = (uint *)0x0;
  }
  else {
    uVar1 = *param_1;
    if ((param_2 == 0) || (param_3 == 0)) {
      uVar4 = uVar1 | 2;
      puVar5 = param_1 + 0x21;
      param_2 = (long)param_1 + 0x83;
      *param_1 = uVar4;
    }
    else {
      uVar4 = uVar1 & 0xfffffffd;
      puVar5 = (uint *)(param_3 + param_2);
      *param_1 = uVar4;
    }
    if ((*(long *)(param_1 + 0xe) != 0) && ((uVar1 & 1) == 0)) {
      FUN_007104f0();
      uVar4 = *param_1;
    }
    *param_1 = uVar4 | 1;
    *(long *)(param_1 + 0xe) = param_2;
    *(uint **)(param_1 + 0x10) = puVar5;
    *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 10) = (undefined1  [16])0x0;
  }
  return param_1;
}

