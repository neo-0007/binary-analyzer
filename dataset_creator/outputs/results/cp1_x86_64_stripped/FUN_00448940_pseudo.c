
undefined8 FUN_00448940(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (((*(byte *)((long)param_1 + 0x3c) & 2) == 0) && (*(int *)(param_1 + 2) - 1U < 2)) {
    iVar1 = FUN_0049de30(param_2,param_3 * 8,param_1 + 0x18);
  }
  else {
    iVar1 = FUN_0049d140();
  }
  if (-1 < iVar1) {
    param_1[0x16] = param_1 + 0x18;
    *param_1 = FUN_0049cb40;
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../providers/implementations/ciphers/cipher_aria_hw.c",0x19,"cipher_hw_aria_initkey"
              );
  FUN_0051f8f0(0x39,0x65,0);
  return 0;
}

