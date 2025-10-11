
undefined8 FUN_00421bd0(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = FUN_004222c0(*(undefined8 *)(param_1 + 0xb8));
  if ((int)uVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0xa8);
    uVar3 = param_2 >> 3;
    if (*(ulong *)(param_1 + 0xb0) <= uVar3) {
      lVar2 = FUN_0041ade0(lVar2,uVar3 + 1,"../crypto/provider_core.c",0x646);
      if (lVar2 == 0) {
        FUN_004222e0(*(undefined8 *)(param_1 + 0xb8));
        FUN_0051f420();
        FUN_0051f540("../crypto/provider_core.c",0x64b,"ossl_provider_set_operation_bit");
        FUN_0051f8f0(0xf,0xc0100,0);
        return 0;
      }
      *(long *)(param_1 + 0xa8) = lVar2;
      thunk_FUN_00713720(lVar2 + *(long *)(param_1 + 0xb0),0,(uVar3 - *(long *)(param_1 + 0xb0)) + 1
                        );
      *(ulong *)(param_1 + 0xb0) = uVar3 + 1;
      lVar2 = *(long *)(param_1 + 0xa8);
    }
    *(byte *)(lVar2 + uVar3) = *(byte *)(lVar2 + uVar3) | (byte)(1 << ((byte)param_2 & 7));
    FUN_004222e0(*(undefined8 *)(param_1 + 0xb8));
    uVar1 = 1;
  }
  return uVar1;
}

