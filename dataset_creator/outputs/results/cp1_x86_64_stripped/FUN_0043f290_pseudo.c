
undefined4 FUN_0043f290(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  lVar6 = *(long *)(param_1 + 0x1d0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) goto LAB_0043f518;
  lVar3 = thunk_FUN_0041cdd0(param_2,"mackey");
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 8) == 5) {
      (**(code **)(lVar6 + 0x18))
                (param_1,*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18));
      goto LAB_0043f2f5;
    }
    FUN_0051f420();
    uVar7 = 0x67;
    goto LAB_0043f531;
  }
LAB_0043f2f5:
  lVar3 = thunk_FUN_0041cdd0(param_2,"tls1multi_maxsndfrag");
  if (lVar3 != 0) {
    iVar1 = thunk_FUN_0041d830(lVar3,param_1 + 0x1e0);
    if (iVar1 != 0) goto LAB_0043f323;
    FUN_0051f420();
    uVar7 = 0x72;
LAB_0043f5c1:
    uVar2 = 0;
    FUN_0051f540("../providers/implementations/ciphers/cipher_aes_cbc_hmac_sha.c",uVar7,
                 "aes_set_ctx_params");
    FUN_0051f8f0(0x39,0x67,0);
    goto LAB_0043f553;
  }
LAB_0043f323:
  lVar3 = thunk_FUN_0041cdd0(param_2,"tls1multi_aad");
  if (lVar3 == 0) {
LAB_0043f39e:
    lVar3 = thunk_FUN_0041cdd0(param_2,"tls1multi_enc");
    if (lVar3 == 0) {
LAB_0043f458:
      lVar3 = thunk_FUN_0041cdd0(param_2,"tlsaad");
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 8) != 5) {
          FUN_0051f420();
          uVar7 = 0xb1;
          goto LAB_0043f531;
        }
        iVar1 = (**(code **)(lVar6 + 0x20))
                          (param_1,*(undefined8 *)(lVar3 + 0x10),*(undefined4 *)(lVar3 + 0x18));
        if (iVar1 < 1) goto LAB_0043f618;
      }
      lVar6 = thunk_FUN_0041cdd0(param_2,"keylen");
      if (lVar6 == 0) {
LAB_0043f4c4:
        lVar6 = thunk_FUN_0041cdd0(param_2,"tls-version");
        if (lVar6 != 0) {
          iVar1 = thunk_FUN_0041d240(lVar6,param_1 + 0x40);
          if (iVar1 == 0) {
            FUN_0051f420();
            uVar7 = 0xc9;
            goto LAB_0043f5c1;
          }
          if (*(int *)(param_1 + 0x40) - 0x300U < 2) {
            if (*(ulong *)(param_1 + 0x68) < 0x10) {
              FUN_0051f420();
              FUN_0051f540("../providers/implementations/ciphers/cipher_aes_cbc_hmac_sha.c",0xcf,
                           "aes_set_ctx_params");
              FUN_0051f8f0(0x39,0xc0103,0);
              goto LAB_0043f618;
            }
            *(ulong *)(param_1 + 0x68) = *(ulong *)(param_1 + 0x68) - 0x10;
          }
        }
LAB_0043f518:
        uVar2 = 1;
      }
      else {
        iVar1 = thunk_FUN_0041d830(lVar6,&local_70);
        if (iVar1 == 0) {
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/ciphers/cipher_aes_cbc_hmac_sha.c",0xbd,
                       "aes_set_ctx_params");
          FUN_0051f8f0(0x39,0x67,0);
        }
        else {
          if (*(long *)(param_1 + 0x18) == local_70) goto LAB_0043f4c4;
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/ciphers/cipher_aes_cbc_hmac_sha.c",0xc1,
                       "aes_set_ctx_params");
          FUN_0051f8f0(0x39,0x69,0);
        }
LAB_0043f618:
        uVar2 = 0;
      }
      goto LAB_0043f553;
    }
    lVar4 = thunk_FUN_0041cdd0(param_2,"tls1multi_interleave");
    lVar5 = thunk_FUN_0041cdd0(param_2,"tls1multi_encin");
    if ((((*(int *)(lVar3 + 8) == 5) && (lVar5 != 0)) && (*(int *)(lVar5 + 8) == 5)) && (lVar4 != 0)
       ) {
      iVar1 = thunk_FUN_0041d240(lVar4,local_50);
      if (iVar1 != 0) {
        local_68 = *(undefined8 *)(lVar3 + 0x10);
        local_60 = *(undefined8 *)(lVar5 + 0x10);
        local_58 = *(undefined8 *)(lVar5 + 0x18);
        iVar1 = (**(code **)(lVar6 + 0x38))(param_1,&local_68);
        if (iVar1 < 1) goto LAB_0043f618;
        goto LAB_0043f458;
      }
    }
    FUN_0051f420();
    uVar7 = 0xa3;
  }
  else {
    lVar4 = thunk_FUN_0041cdd0(param_2,"tls1multi_interleave");
    if ((*(int *)(lVar3 + 8) == 5) && (lVar4 != 0)) {
      iVar1 = thunk_FUN_0041d240(lVar4,local_50);
      if (iVar1 != 0) {
        local_60 = *(undefined8 *)(lVar3 + 0x10);
        local_58 = *(undefined8 *)(lVar3 + 0x18);
        iVar1 = (**(code **)(lVar6 + 0x30))(param_1,&local_68);
        if (0 < iVar1) goto LAB_0043f39e;
        goto LAB_0043f618;
      }
    }
    FUN_0051f420();
    uVar7 = 0x85;
  }
LAB_0043f531:
  uVar2 = 0;
  FUN_0051f540("../providers/implementations/ciphers/cipher_aes_cbc_hmac_sha.c",uVar7,
               "aes_set_ctx_params");
  FUN_0051f8f0(0x39,0x67,0);
LAB_0043f553:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

