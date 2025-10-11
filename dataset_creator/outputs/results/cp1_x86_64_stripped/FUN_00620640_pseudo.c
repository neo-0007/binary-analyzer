
void FUN_00620640(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0041ad60(*(undefined8 *)(param_1 + 0x30),"../crypto/ct/ct_sct.c",0x91);
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}

