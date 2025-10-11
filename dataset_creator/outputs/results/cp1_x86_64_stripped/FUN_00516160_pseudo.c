
undefined4
FUN_00516160(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_58;
  long local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar8 = false;
  if (param_3 != 0) {
    iVar1 = thunk_FUN_00712780(param_3,"id-ecPublicKey");
    bVar8 = true;
    if (iVar1 != 0) {
      iVar1 = thunk_FUN_00712780(param_3,"1.2.840.10045.2.1");
      bVar8 = iVar1 == 0;
    }
  }
  puVar3 = (undefined8 *)FUN_0041aec0(0x30,"../crypto/encode_decode/decoder_pkey.c",0x14c);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_0051f420();
    lVar4 = 0;
    FUN_0051f540("../crypto/encode_decode/decoder_pkey.c",0x151,"ossl_decoder_ctx_setup_for_pkey");
    FUN_0051f8f0(0x3c,0xc0100,0);
    uVar7 = 0;
    goto LAB_00516344;
  }
  if (param_5 == 0) {
LAB_00516208:
    lVar4 = FUN_00436410();
    puVar3[3] = lVar4;
    if ((lVar4 == 0) || (lVar4 = FUN_00436410(), lVar4 == 0)) goto LAB_00516300;
    puVar3[5] = param_2;
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    *puVar3 = param_4;
    *(undefined4 *)(puVar3 + 2) = uVar7;
    FUN_0053e740(param_4,FUN_00516050,puVar3[3]);
    iVar1 = FUN_00436480(puVar3[3]);
    if (0 < iVar1) {
      iVar6 = 0;
      do {
        uVar5 = FUN_004364a0(puVar3[3],iVar6);
        if ((((param_3 == 0) || (iVar2 = FUN_0053e720(uVar5,param_3), iVar2 != 0)) ||
            ((bVar8 && (iVar2 = FUN_0053e720(uVar5,&DAT_007ce680), iVar2 != 0)))) &&
           (iVar2 = FUN_0053e780(uVar5,FUN_00516030,lVar4), iVar2 == 0)) {
          FUN_0051f420();
          FUN_0051f540("../crypto/encode_decode/decoder_pkey.c",0x16d,
                       "ossl_decoder_ctx_setup_for_pkey");
          FUN_0051f8f0(0x3c,0xc0103,0);
          uVar7 = 0;
          goto LAB_00516332;
        }
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
    }
    local_48 = 0;
    local_58 = lVar4;
    local_50 = param_1;
    FUN_00515940(param_4,&LAB_00515f20,&local_58);
    FUN_004360b0(lVar4);
    if ((local_48 & 0x100000000) != 0) goto LAB_0051632c;
    lVar4 = 0;
    iVar1 = FUN_00513b40(param_1);
    uVar7 = 1;
    if (iVar1 != 0) {
      iVar1 = FUN_00513b70(param_1,FUN_00515ce0);
      if ((iVar1 != 0) && (iVar1 = FUN_00513bd0(param_1,puVar3), iVar1 != 0)) {
        iVar1 = FUN_00513c30(param_1,FUN_00516100);
        uVar7 = 1;
        if (iVar1 != 0) goto LAB_00516344;
      }
      goto LAB_0051632c;
    }
  }
  else {
    lVar4 = FUN_0041c2c0(param_5,"../crypto/encode_decode/decoder_pkey.c",0x14e);
    puVar3[1] = lVar4;
    if (lVar4 != 0) goto LAB_00516208;
LAB_00516300:
    FUN_0051f420();
    FUN_0051f540("../crypto/encode_decode/decoder_pkey.c",0x151,"ossl_decoder_ctx_setup_for_pkey");
    FUN_0051f8f0(0x3c,0xc0100,0);
LAB_0051632c:
    uVar7 = 0;
    lVar4 = 0;
  }
LAB_00516332:
  FUN_005160a0(puVar3);
LAB_00516344:
  FUN_004360b0(lVar4);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar7;
}

