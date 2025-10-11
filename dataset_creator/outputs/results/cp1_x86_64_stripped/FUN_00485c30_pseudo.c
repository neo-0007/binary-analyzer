
undefined4 FUN_00485c30(long param_1,undefined8 param_2,ulong *param_3,ulong param_4)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar3 = *(ulong *)(param_1 + 0x28);
  iVar5 = FUN_0043b840();
  if (iVar5 != 0) {
    if (*(int *)(param_1 + 0x40) == 0) {
      bVar2 = *(byte *)(param_1 + 0x3c);
      if ((bVar2 & 2) == 0) {
        uVar4 = *(ulong *)(param_1 + 0x30);
        if (uVar4 != uVar3) {
          if ((uVar4 != 0) || ((bVar2 & 1) != 0)) {
            FUN_0051f420();
            uVar6 = 0x1ad;
LAB_00485d03:
            FUN_0051f540("../providers/implementations/ciphers/ciphercommon.c",uVar6,
                         "ossl_cipher_generic_block_final");
            FUN_0051f8f0(0x39,0x6b,0);
            return 0;
          }
LAB_00485e00:
          *param_3 = 0;
          return 1;
        }
        lVar1 = param_1 + 0x84;
        iVar5 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,lVar1,lVar1,uVar4);
        if (iVar5 != 0) {
          if (((*(byte *)(param_1 + 0x3c) & 1) != 0) &&
             (iVar5 = FUN_00486b00(lVar1,param_1 + 0x30,uVar4), iVar5 == 0)) {
            return 0;
          }
          if (*(ulong *)(param_1 + 0x30) <= param_4) {
            thunk_FUN_00713a50(param_2,lVar1);
            *param_3 = *(ulong *)(param_1 + 0x30);
            *(undefined8 *)(param_1 + 0x30) = 0;
            return 1;
          }
          FUN_0051f420();
          uVar6 = 0x1bc;
          goto LAB_00485e41;
        }
        FUN_0051f420();
        uVar6 = 0x1b2;
      }
      else {
        if ((bVar2 & 1) == 0) {
          if (*(ulong *)(param_1 + 0x30) == 0) goto LAB_00485e00;
          if (*(ulong *)(param_1 + 0x30) != uVar3) {
            FUN_0051f420();
            uVar6 = 0x196;
            goto LAB_00485d03;
          }
        }
        else {
          FUN_00486ad0(param_1 + 0x84,param_1 + 0x30,uVar3);
        }
        if (param_4 < uVar3) {
          FUN_0051f420();
          uVar6 = 0x19b;
LAB_00485e41:
          FUN_0051f540("../providers/implementations/ciphers/ciphercommon.c",uVar6,
                       "ossl_cipher_generic_block_final");
          FUN_0051f8f0(0x39,0x6a,0);
          return 0;
        }
        iVar5 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_1 + 0x84,uVar3);
        if (iVar5 != 0) {
          *(undefined8 *)(param_1 + 0x30) = 0;
          *param_3 = uVar3;
          return 1;
        }
        FUN_0051f420();
        uVar6 = 0x19f;
      }
      FUN_0051f540("../providers/implementations/ciphers/ciphercommon.c",uVar6,
                   "ossl_cipher_generic_block_final");
      FUN_0051f8f0(0x39,0x66,0);
      return 0;
    }
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/ciphers/ciphercommon.c",0x18b,
                 "ossl_cipher_generic_block_final");
    FUN_0051f8f0(0x39,0x66,0);
  }
  return 0;
}

