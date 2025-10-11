
ulong openssl_digests(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_2 == (undefined8 *)0x0) {
    if (init_5 == 0) {
      lVar3 = test_sha_md();
      if (lVar3 != 0) {
        lVar5 = (long)(int)pos_4;
        pos_4 = pos_4 + 1;
        uVar1 = EVP_MD_get_type(lVar3);
        *(undefined4 *)((long)&digest_nids_3 + lVar5 * 4) = uVar1;
      }
      uVar4 = (ulong)(int)pos_4;
      init_5 = 1;
      *(undefined4 *)((long)&digest_nids_3 + uVar4 * 4) = 0;
    }
    else {
      uVar4 = (ulong)pos_4;
    }
    *param_3 = &digest_nids_3;
  }
  else {
    if (param_4 == 0x40) {
      uVar2 = test_sha_md();
      *param_2 = uVar2;
      return 1;
    }
    *param_2 = 0;
    uVar4 = 0;
  }
  return uVar4;
}

