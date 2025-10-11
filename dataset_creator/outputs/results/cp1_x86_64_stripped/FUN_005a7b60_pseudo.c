
void FUN_005a7b60(long param_1)

{
  if (*(code **)(param_1 + 0x88) != (code *)0x0) {
    (**(code **)(param_1 + 0x88))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    if (*(long *)(param_1 + 0xd8) == 0) {
      FUN_005a8ad0();
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  FUN_006068a0(*(undefined8 *)(param_1 + 0xa0));
  *(undefined8 *)(param_1 + 0xa0) = 0;
  FUN_00436430(*(undefined8 *)(param_1 + 0x98),FUN_005b0200);
  *(undefined8 *)(param_1 + 0x98) = 0;
  FUN_00419990(5,param_1,param_1 + 0xe0);
  *(undefined1 (*) [16])(param_1 + 0xe0) = (undefined1  [16])0x0;
  return;
}

