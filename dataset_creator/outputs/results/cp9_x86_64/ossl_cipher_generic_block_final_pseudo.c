
undefined4 ossl_cipher_generic_block_final(long param_1,void *param_2,ulong *param_3,ulong param_4)

{
  void *__src;
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x28);
  iVar4 = ossl_prov_is_running();
  if (iVar4 != 0) {
    if (*(int *)(param_1 + 0x40) == 0) {
      bVar1 = *(byte *)(param_1 + 0x3c);
      if ((bVar1 & 2) == 0) {
        uVar3 = *(ulong *)(param_1 + 0x30);
        if (uVar3 != uVar2) {
          if ((uVar3 != 0) || ((bVar1 & 1) != 0)) {
            ERR_new();
            uVar5 = 0x1ad;
LAB_004839a3:
            ERR_set_debug("../providers/implementations/ciphers/ciphercommon.c",uVar5,
                          "ossl_cipher_generic_block_final");
            ERR_set_error(0x39,0x6b,0);
            return 0;
          }
LAB_00483aa0:
          *param_3 = 0;
          return 1;
        }
        __src = (void *)(param_1 + 0x84);
        iVar4 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,__src,__src,uVar3);
        if (iVar4 != 0) {
          if (((*(byte *)(param_1 + 0x3c) & 1) != 0) &&
             (iVar4 = ossl_cipher_unpadblock(__src,param_1 + 0x30,uVar3), iVar4 == 0)) {
            return 0;
          }
          if (*(size_t *)(param_1 + 0x30) <= param_4) {
            memcpy(param_2,__src,*(size_t *)(param_1 + 0x30));
            *param_3 = *(ulong *)(param_1 + 0x30);
            *(undefined8 *)(param_1 + 0x30) = 0;
            return 1;
          }
          ERR_new();
          uVar5 = 0x1bc;
          goto LAB_00483ae1;
        }
        ERR_new();
        uVar5 = 0x1b2;
      }
      else {
        if ((bVar1 & 1) == 0) {
          if (*(ulong *)(param_1 + 0x30) == 0) goto LAB_00483aa0;
          if (*(ulong *)(param_1 + 0x30) != uVar2) {
            ERR_new();
            uVar5 = 0x196;
            goto LAB_004839a3;
          }
        }
        else {
          ossl_cipher_padblock(param_1 + 0x84,param_1 + 0x30,uVar2);
        }
        if (param_4 < uVar2) {
          ERR_new();
          uVar5 = 0x19b;
LAB_00483ae1:
          ERR_set_debug("../providers/implementations/ciphers/ciphercommon.c",uVar5,
                        "ossl_cipher_generic_block_final");
          ERR_set_error(0x39,0x6a,0);
          return 0;
        }
        iVar4 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_1 + 0x84,uVar2);
        if (iVar4 != 0) {
          *(undefined8 *)(param_1 + 0x30) = 0;
          *param_3 = uVar2;
          return 1;
        }
        ERR_new();
        uVar5 = 0x19f;
      }
      ERR_set_debug("../providers/implementations/ciphers/ciphercommon.c",uVar5,
                    "ossl_cipher_generic_block_final");
      ERR_set_error(0x39,0x66,0);
      return 0;
    }
    ERR_new();
    ERR_set_debug("../providers/implementations/ciphers/ciphercommon.c",0x18b,
                  "ossl_cipher_generic_block_final");
    ERR_set_error(0x39,0x66,0);
  }
  return 0;
}

