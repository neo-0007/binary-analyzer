
void FUN_005bd890(long *param_1,long param_2)

{
  if (*param_1 != 0) {
    if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
      FUN_004b7fa0();
    }
    else {
      FUN_004b7f20();
    }
    *param_1 = 0;
  }
  return;
}

