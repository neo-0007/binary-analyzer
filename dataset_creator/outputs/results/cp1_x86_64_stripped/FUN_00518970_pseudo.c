
long FUN_00518970(long param_1,undefined4 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 )

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long in_FS_OFFSET;
  undefined1 local_108 [32];
  undefined8 local_e8;
  long local_d8;
  byte local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8;
  byte local_a0;
  int local_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    FUN_0051f420();
    lVar2 = 0;
    FUN_0051f540("../crypto/encode_decode/encoder_pkey.c",0x147,"OSSL_ENCODER_CTX_new_for_pkey");
    FUN_0051f8f0(0x3b,0xc0102,0);
    goto LAB_00518c6b;
  }
  if ((*(long *)(param_1 + 0x20) == 0) && (*(long *)(param_1 + 0x68) == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/encode_decode/encoder_pkey.c",0x14c,"OSSL_ENCODER_CTX_new_for_pkey");
    FUN_0051f8f0(0x3b,0x80106,"The passed EVP_PKEY must be assigned a key");
    lVar2 = 0;
    goto LAB_00518c6b;
  }
  lVar2 = FUN_00518420();
  if (lVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/encode_decode/encoder_pkey.c",0x152,"OSSL_ENCODER_CTX_new_for_pkey");
    FUN_0051f8f0(0x3b,0xc0100,0);
    goto LAB_00518c6b;
  }
  lVar4 = *(long *)(param_1 + 0x60);
  if (lVar4 != 0) {
    uVar3 = FUN_0053e6e0(lVar4);
    lVar4 = FUN_00420cf0(uVar3);
  }
  iVar1 = FUN_00516650(lVar2,param_3);
  if (iVar1 != 0) {
    if (param_4 != 0) {
      iVar1 = FUN_005166b0(lVar2,param_4);
      if (iVar1 == 0) goto LAB_00518c60;
    }
    iVar1 = FUN_005165b0(lVar2,param_2);
    if (iVar1 != 0) {
      if (*(long *)(param_1 + 0x60) != 0) {
        uVar3 = FUN_0053e6e0();
        uVar5 = FUN_00420cf0(uVar3);
        if (*(long *)(param_1 + 0x60) != 0) {
          plVar6 = (long *)FUN_0041aec0(0x28,"../crypto/encode_decode/encoder_pkey.c",0xf6);
          if (plVar6 == (long *)0x0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/encode_decode/encoder_pkey.c",0xf7,
                         "ossl_encoder_ctx_setup_for_pkey");
            FUN_0051f8f0(0x3b,0xc0100,0);
            goto LAB_00518c60;
          }
          local_d8 = FUN_00436410();
          if (local_d8 == 0) {
            FUN_0051f420();
            uVar3 = 0x101;
LAB_00518c29:
            FUN_0051f540("../crypto/encode_decode/encoder_pkey.c",uVar3,
                         "ossl_encoder_ctx_setup_for_pkey");
            FUN_0051f8f0(0x3b,0xc0100,0);
          }
          else {
            local_d0 = local_d0 & 0xfe;
            FUN_0053e780(*(undefined8 *)(param_1 + 0x60),FUN_00518830,&local_d8);
            if ((local_d0 & 1) == 0) {
              local_c8 = local_d8;
              local_b8 = *(undefined8 *)(lVar2 + 8);
              local_c0 = *(undefined8 *)(lVar2 + 0x10);
              local_a0 = local_a0 & 0xfe;
              local_9c = 0;
              local_b0 = uVar3;
              local_a8 = lVar2;
              FUN_00518250(uVar5,FUN_00518720);
              local_a0 = local_a0 | 1;
              FUN_00518250(uVar5,FUN_00518720,&local_c8);
              FUN_004360b0(local_d8);
              if (local_9c != 0) {
                FUN_0051f420();
                uVar3 = 0x123;
                goto LAB_00518c29;
              }
              iVar1 = FUN_00516aa0(lVar2);
              if (iVar1 == 0) {
                FUN_00516b30(lVar2,0);
                FUN_0041ad60(plVar6,"../crypto/encode_decode/encoder_pkey.c",0x138);
                goto LAB_00518b78;
              }
              iVar1 = FUN_00516ad0(lVar2,FUN_00518630);
              if (iVar1 != 0) {
                iVar1 = FUN_00516b30(lVar2,plVar6);
                if (iVar1 != 0) {
                  iVar1 = FUN_00516b90(lVar2,FUN_00518600);
                  if (iVar1 != 0) {
                    *plVar6 = param_1;
                    *(undefined4 *)(plVar6 + 1) = param_2;
                    goto LAB_00518b78;
                  }
                }
              }
            }
            else {
              FUN_004360b0(local_d8);
            }
          }
          FUN_00516b30(lVar2,0);
          FUN_0041ad60(plVar6,"../crypto/encode_decode/encoder_pkey.c",0x138);
          goto LAB_00518c60;
        }
      }
LAB_00518b78:
      iVar1 = FUN_00516a90(lVar2,lVar4,param_5);
      if (iVar1 != 0) {
        local_98 = (undefined1  [16])0x0;
        local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x48));
        local_88 = (undefined1  [16])0x0;
        local_78 = (undefined1  [16])0x0;
        local_68 = (undefined1  [16])0x0;
        local_58 = (undefined1  [16])0x0;
        FUN_0041cea0(local_108,"save-parameters",&local_c8);
        local_78._0_8_ = local_e8;
        FUN_005184a0(lVar2,local_98);
        goto LAB_00518c6b;
      }
    }
  }
LAB_00518c60:
  FUN_00518590(lVar2);
  lVar2 = 0;
LAB_00518c6b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

