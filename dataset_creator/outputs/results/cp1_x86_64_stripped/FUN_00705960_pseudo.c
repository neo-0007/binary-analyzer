
void FUN_00705960(byte *param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x70) != -1) {
    if (*(int *)(param_1 + 0xc0) < 1) {
      FUN_00704f80(param_1,*(long *)(param_1 + 0x20),
                   *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20));
    }
    else {
      lVar1 = *(long *)(*(long *)(param_1 + 0xa0) + 0x18);
      FUN_00701350(param_1,lVar1,*(long *)(*(long *)(param_1 + 0xa0) + 0x20) - lVar1 >> 2);
    }
    if ((*param_1 & 0x40) == 0) {
      lVar1 = *(long *)(param_1 + 0xd8);
      if (0x827 < lVar1 - 0x93f160U) {
        FUN_00703130();
      }
      (**(code **)(lVar1 + 0x88))(param_1);
    }
  }
  FUN_00707570(param_1,0);
  return;
}

