
ulong openssl_ciphers(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_2 == (undefined8 *)0x0) {
    if (init_2 == 0) {
      lVar3 = test_r4_cipher();
      if (lVar3 != 0) {
        lVar5 = (long)(int)pos_1;
        pos_1 = pos_1 + 1;
        uVar1 = EVP_CIPHER_get_nid(lVar3);
        *(undefined4 *)(cipher_nids_0 + lVar5 * 4) = uVar1;
      }
      lVar3 = test_r4_40_cipher();
      if (lVar3 != 0) {
        lVar5 = (long)(int)pos_1;
        pos_1 = pos_1 + 1;
        uVar1 = EVP_CIPHER_get_nid(lVar3);
        *(undefined4 *)(cipher_nids_0 + lVar5 * 4) = uVar1;
      }
      uVar4 = (ulong)(int)pos_1;
      init_2 = 1;
      *(undefined4 *)(cipher_nids_0 + uVar4 * 4) = 0;
    }
    else {
      uVar4 = (ulong)pos_1;
    }
    *param_3 = cipher_nids_0;
  }
  else {
    if (param_4 == 5) {
      uVar2 = test_r4_cipher();
      *param_2 = uVar2;
      return 1;
    }
    if (param_4 == 0x61) {
      uVar2 = test_r4_40_cipher();
      *param_2 = uVar2;
      return 1;
    }
    *param_2 = 0;
    uVar4 = 0;
  }
  return uVar4;
}

