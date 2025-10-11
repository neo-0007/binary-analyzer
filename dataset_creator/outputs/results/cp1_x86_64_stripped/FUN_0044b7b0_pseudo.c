
bool FUN_0044b7b0(long param_1,undefined4 *param_2,long param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0xc) {
    uVar1 = *param_2;
    *(undefined4 *)(param_1 + 0x1a4) = uVar1;
    *(undefined4 *)(param_1 + 0x2f0) = uVar1;
    uVar1 = param_2[1];
    *(undefined4 *)(param_1 + 0x1a8) = uVar1;
    *(undefined4 *)(param_1 + 0x2f4) = uVar1;
    uVar1 = param_2[2];
    *(undefined4 *)(param_1 + 0x1ac) = uVar1;
    *(undefined4 *)(param_1 + 0x2f8) = uVar1;
  }
  return param_3 == 0xc;
}

