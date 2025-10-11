
long ecx_gen(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  lVar3 = ossl_ecx_key_new(*param_1,*(undefined4 *)(param_1 + 2),0,param_1[1]);
  if (lVar3 == 0) {
    ERR_new();
    ERR_set_debug("../providers/implementations/keymgmt/ecx_kmgmt.c",0x249,"ecx_gen");
    ERR_set_error(0x39,0xc0100,0);
    return 0;
  }
  if ((*(byte *)((long)param_1 + 0x14) & 3) == 0) {
    return lVar3;
  }
  pbVar4 = (byte *)ossl_ecx_key_allocate_privkey(lVar3);
  if (pbVar4 == (byte *)0x0) {
    ERR_new();
    ERR_set_debug("../providers/implementations/keymgmt/ecx_kmgmt.c",0x252,"ecx_gen");
    ERR_set_error(0x39,0xc0100,0);
  }
  else {
    iVar2 = RAND_priv_bytes_ex(*param_1,pbVar4,*(undefined8 *)(lVar3 + 0x58),0);
    if (iVar2 < 1) goto LAB_004708d5;
    uVar1 = *(uint *)(param_1 + 2);
    if (uVar1 == 2) {
      iVar2 = ossl_ed25519_public_from_private(*param_1,lVar3 + 0x11,pbVar4,param_1[1]);
    }
    else {
      if (uVar1 < 3) {
        if (uVar1 == 0) {
          *pbVar4 = *pbVar4 & 0xf8;
          pbVar4[0x1f] = pbVar4[0x1f] & 0x7f | 0x40;
          ossl_x25519_public_from_private(lVar3 + 0x11,pbVar4);
        }
        else {
          *pbVar4 = *pbVar4 & 0xfc;
          pbVar4[0x37] = pbVar4[0x37] | 0x80;
          ossl_x448_public_from_private(lVar3 + 0x11,pbVar4);
        }
        goto LAB_004708a3;
      }
      if (uVar1 != 3) goto LAB_004708a3;
      iVar2 = ossl_ed448_public_from_private(*param_1,lVar3 + 0x11,pbVar4,param_1[1]);
    }
    if (iVar2 != 0) {
LAB_004708a3:
      *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) | 1;
      return lVar3;
    }
  }
LAB_004708d5:
  ossl_ecx_key_free(lVar3);
  return 0;
}

