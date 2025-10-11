
ulong FUN_00414800(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_1 != (int *)0x0) {
    FUN_0051f000();
    uVar1 = FUN_00412900(param_1,param_2,param_3,param_4,0,param_6);
    if (uVar1 == 0xfffffffe) {
      FUN_0051f050();
    }
    else {
      FUN_0051f1a0();
      if (((int)uVar1 < 1) || (*param_1 == 0)) goto LAB_004148d1;
    }
    uVar2 = FUN_00412bc0(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar2;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/evp/pmeth_lib.c",0x535,"EVP_PKEY_CTX_ctrl");
  FUN_0051f8f0(6,0x93,0);
  uVar1 = 0xfffffffe;
LAB_004148d1:
  return (ulong)uVar1;
}

