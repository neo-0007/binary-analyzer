
uint aes_ocb_block_update
               (long param_1,long param_2,ulong *param_3,ulong param_4,long param_5,ulong param_6)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  ulong *puVar8;
  long in_FS_OFFSET;
  long local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((*(byte *)(param_1 + 0x364) & 1) != 0) && (iVar1 = *(int *)(param_1 + 0x360), iVar1 != 3))
     && (iVar1 != 0)) {
    if (iVar1 == 1) {
      iVar1 = CRYPTO_ocb128_setiv(param_1 + 0x2b0,param_1 + 0x94,*(undefined8 *)(param_1 + 0x20),
                                  *(undefined8 *)(param_1 + 0x368));
      if (iVar1 != 1) goto LAB_0044276b;
      *(undefined4 *)(param_1 + 0x360) = 2;
    }
    if (param_6 == 0) {
      *param_3 = 0;
      uVar2 = 1;
      goto LAB_0044276e;
    }
    lVar6 = param_1 + 0x390;
    puVar8 = (ulong *)(param_1 + 0x370);
    pcVar7 = aes_generic_ocb_cipher;
    if (param_2 == 0) {
      lVar6 = param_1 + 0x3a0;
      puVar8 = (ulong *)(param_1 + 0x378);
      pcVar7 = cipher_updateaad;
    }
    uVar5 = *puVar8;
    uVar4 = param_6 & 0xfffffffffffffff0;
    local_50 = param_5;
    local_48 = param_6;
    if (uVar5 == 0) {
LAB_004427ff:
      if (uVar4 != 0) {
        uVar5 = uVar5 + uVar4;
        if (param_4 < uVar5) {
          ERR_new();
          uVar3 = 0xbe;
          goto LAB_00442a39;
        }
        iVar1 = (*pcVar7)(param_1,local_50,param_2,uVar4);
        if (iVar1 == 0) {
          ERR_new();
          uVar3 = 0xc2;
          goto LAB_00442a01;
        }
        local_50 = local_50 + uVar4;
        local_48 = local_48 - uVar4;
      }
      if ((local_48 == 0) ||
         (uVar2 = ossl_cipher_trailingdata(lVar6,puVar8,0x10,&local_50,&local_48), uVar2 != 0)) {
        *param_3 = uVar5;
        uVar2 = (uint)(local_48 == 0);
      }
      goto LAB_0044276e;
    }
    uVar4 = ossl_cipher_fillblock(lVar6,puVar8,0x10,&local_50,&local_48);
    if (*puVar8 != 0x10) {
      uVar5 = 0;
      goto LAB_004427ff;
    }
    if (0xf < param_4) {
      iVar1 = (*pcVar7)(param_1,lVar6,param_2,0x10);
      if (iVar1 != 0) {
        *puVar8 = 0;
        if (param_2 != 0) {
          param_2 = param_2 + 0x10;
        }
        uVar5 = 0x10;
        goto LAB_004427ff;
      }
      ERR_new();
      uVar3 = 0xb3;
LAB_00442a01:
      uVar2 = 0;
      ERR_set_debug("../providers/implementations/ciphers/cipher_aes_ocb.c",uVar3,
                    "aes_ocb_block_update_internal");
      ERR_set_error(0x39,0x66,0);
      goto LAB_0044276e;
    }
    ERR_new();
    uVar3 = 0xaf;
LAB_00442a39:
    ERR_set_debug("../providers/implementations/ciphers/cipher_aes_ocb.c",uVar3,
                  "aes_ocb_block_update_internal");
    ERR_set_error(0x39,0x6a,0);
  }
LAB_0044276b:
  uVar2 = 0;
LAB_0044276e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar2;
}

