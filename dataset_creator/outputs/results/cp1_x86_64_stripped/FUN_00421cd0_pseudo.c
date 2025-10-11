
undefined8 FUN_00421cd0(long param_1,ulong param_2,uint *param_3)

{
  undefined8 uVar1;
  
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
    uVar1 = FUN_004222a0(*(undefined8 *)(param_1 + 0xb8));
    if ((int)uVar1 != 0) {
      if (param_2 >> 3 < *(ulong *)(param_1 + 0xb0)) {
        *param_3 = (uint)((*(byte *)(*(long *)(param_1 + 0xa8) + (param_2 >> 3)) &
                          (byte)(1 << ((byte)param_2 & 7))) != 0);
      }
      FUN_004222e0(*(undefined8 *)(param_1 + 0xb8));
      uVar1 = 1;
    }
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/provider_core.c",0x65f,"ossl_provider_test_operation_bit");
  FUN_0051f8f0(0xf,0xc0102,0);
  return 0;
}

