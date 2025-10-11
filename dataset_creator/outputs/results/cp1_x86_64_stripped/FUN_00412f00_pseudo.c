
void FUN_00412f00(long param_1)

{
  code *pcVar1;
  
  if (param_1 != 0) {
    if ((*(long *)(param_1 + 0x78) != 0) &&
       (pcVar1 = *(code **)(*(long *)(param_1 + 0x78) + 0x18), pcVar1 != (code *)0x0)) {
      (*pcVar1)();
    }
    FUN_00412da0(param_1);
    FUN_0041ad60(*(undefined8 *)(param_1 + 0x40),"../crypto/evp/pmeth_lib.c",0x5e9);
    FUN_0041ad60(*(undefined8 *)(param_1 + 0x38),"../crypto/evp/pmeth_lib.c",0x5ea);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    FUN_0053e0f0(*(undefined8 *)(param_1 + 0x20));
    FUN_0041ad60(*(undefined8 *)(param_1 + 0x10),"../crypto/evp/pmeth_lib.c",0x1a7);
    FUN_0040f4f0(*(undefined8 *)(param_1 + 0x88));
    FUN_0040f4f0(*(undefined8 *)(param_1 + 0x90));
    FUN_0051a270(*(undefined8 *)(param_1 + 0x80));
    FUN_004b7fa0(*(undefined8 *)(param_1 + 0xa8));
    FUN_0041ad60(param_1,"../crypto/evp/pmeth_lib.c",0x1ae);
    return;
  }
  return;
}

