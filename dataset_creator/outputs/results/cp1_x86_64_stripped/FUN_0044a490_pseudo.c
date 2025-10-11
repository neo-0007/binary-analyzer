
undefined4 FUN_0044a490(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) goto LAB_0044a618;
  lVar4 = thunk_FUN_0041cdd0(param_2,"keylen");
  if (lVar4 != 0) {
    iVar2 = thunk_FUN_0041d830(lVar4,&local_38);
    if (iVar2 != 0) {
      if (local_38 != 0x20) {
        FUN_0051f420();
        uVar3 = 0;
        FUN_0051f540("../providers/implementations/ciphers/cipher_chacha20_poly1305.c",0xa2,
                     "chacha20_poly1305_set_ctx_params");
        FUN_0051f8f0(0x39,0x69,0);
        goto LAB_0044a61e;
      }
      goto LAB_0044a4f9;
    }
    FUN_0051f420();
    uVar6 = 0x9e;
LAB_0044a6c1:
    uVar3 = 0;
    FUN_0051f540("../providers/implementations/ciphers/cipher_chacha20_poly1305.c",uVar6,
                 "chacha20_poly1305_set_ctx_params");
    FUN_0051f8f0(0x39,0x67,0);
    goto LAB_0044a61e;
  }
LAB_0044a4f9:
  lVar4 = thunk_FUN_0041cdd0(param_2,"ivlen");
  if (lVar4 != 0) {
    iVar2 = thunk_FUN_0041d830(lVar4,&local_38);
    if (iVar2 == 0) {
      FUN_0051f420();
      uVar6 = 0xa9;
      goto LAB_0044a6c1;
    }
    if (0xb < local_38 - 1U) {
      FUN_0051f420();
      uVar3 = 0;
      FUN_0051f540("../providers/implementations/ciphers/cipher_chacha20_poly1305.c",0xad,
                   "chacha20_poly1305_set_ctx_params");
      FUN_0051f8f0(0x39,0x6d,0);
      goto LAB_0044a61e;
    }
    *(long *)(param_1 + 0x340) = local_38;
  }
  lVar4 = thunk_FUN_0041cdd0(param_2,"tag");
  if (lVar4 == 0) {
LAB_0044a59c:
    lVar4 = thunk_FUN_0041cdd0(param_2,"tlsaad");
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 8) != 5) {
        FUN_0051f420();
        uVar6 = 0xca;
        goto LAB_0044a651;
      }
      iVar2 = (**(code **)(lVar1 + 0x28))
                        (param_1,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18));
      local_38 = (long)iVar2;
      if (local_38 == 0) {
        FUN_0051f420();
        uVar3 = 0;
        FUN_0051f540("../providers/implementations/ciphers/cipher_chacha20_poly1305.c",0xcf,
                     "chacha20_poly1305_set_ctx_params");
        FUN_0051f8f0(0x39,0x73,0);
        goto LAB_0044a61e;
      }
      *(long *)(param_1 + 0x350) = local_38;
    }
    lVar4 = thunk_FUN_0041cdd0(param_2,"tlsivfixed");
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 8) != 5) {
        FUN_0051f420();
        uVar6 = 0xd8;
        goto LAB_0044a651;
      }
      iVar2 = (**(code **)(lVar1 + 0x30))
                        (param_1,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18));
      if (iVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/ciphers/cipher_chacha20_poly1305.c",0xdc,
                     "chacha20_poly1305_set_ctx_params");
        FUN_0051f8f0(0x39,0x6d,0);
        uVar3 = 0;
        goto LAB_0044a61e;
      }
    }
LAB_0044a618:
    uVar3 = 1;
  }
  else {
    if (*(int *)(lVar4 + 8) == 5) {
      lVar5 = *(long *)(lVar4 + 0x18);
      if (0xf < lVar5 - 1U) {
        FUN_0051f420();
        uVar3 = 0;
        FUN_0051f540("../providers/implementations/ciphers/cipher_chacha20_poly1305.c",0xba,
                     "chacha20_poly1305_set_ctx_params");
        FUN_0051f8f0(0x39,0x76,0);
        goto LAB_0044a61e;
      }
      if (*(long *)(lVar4 + 0x10) != 0) {
        if ((*(byte *)(param_1 + 0x3c) & 2) != 0) {
          FUN_0051f420();
          uVar3 = 0;
          FUN_0051f540("../providers/implementations/ciphers/cipher_chacha20_poly1305.c",0xbf,
                       "chacha20_poly1305_set_ctx_params");
          FUN_0051f8f0(0x39,0x78,0);
          goto LAB_0044a61e;
        }
        thunk_FUN_00713a50(param_1 + 0x2fc);
        lVar5 = *(long *)(lVar4 + 0x18);
      }
      *(long *)(param_1 + 0x338) = lVar5;
      goto LAB_0044a59c;
    }
    FUN_0051f420();
    uVar6 = 0xb6;
LAB_0044a651:
    uVar3 = 0;
    FUN_0051f540("../providers/implementations/ciphers/cipher_chacha20_poly1305.c",uVar6,
                 "chacha20_poly1305_set_ctx_params");
    FUN_0051f8f0(0x39,0x67,0);
  }
LAB_0044a61e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

