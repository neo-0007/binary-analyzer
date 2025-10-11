
EVP_PKEY_CTX * EVP_PKEY_CTX_dup(EVP_PKEY_CTX *ctx)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  EVP_PKEY_CTX *ctx_00;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(ENGINE **)(ctx + 0x80) != (ENGINE *)0x0) &&
     (iVar4 = ENGINE_init(*(ENGINE **)(ctx + 0x80)), iVar4 == 0)) {
    ERR_new();
    ctx_00 = (EVP_PKEY_CTX *)0x0;
    ERR_set_debug("../crypto/evp/pmeth_lib.c",0x1df,"EVP_PKEY_CTX_dup");
    ERR_set_error(6,0x80026,0);
    goto LAB_00412211;
  }
  ctx_00 = (EVP_PKEY_CTX *)CRYPTO_zalloc(0xb0,"../crypto/evp/pmeth_lib.c",0x1e3);
  if (ctx_00 == (EVP_PKEY_CTX *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/pmeth_lib.c",0x1e5,"EVP_PKEY_CTX_dup");
    ERR_set_error(6,0xc0100,0);
    goto LAB_00412211;
  }
  lVar7 = *(long *)(ctx + 0x88);
  if (lVar7 != 0) {
    EVP_PKEY_up_ref();
    lVar7 = *(long *)(ctx + 0x88);
  }
  uVar1 = *(undefined4 *)ctx;
  *(long *)(ctx_00 + 0x88) = lVar7;
  *(undefined4 *)ctx_00 = uVar1;
  *(undefined8 *)(ctx_00 + 8) = *(undefined8 *)(ctx + 8);
  uVar2 = *(undefined8 *)(ctx + 0x18);
  *(undefined8 *)(ctx_00 + 0x10) = 0;
  pcVar5 = *(char **)(ctx + 0x10);
  *(undefined8 *)(ctx_00 + 0x18) = uVar2;
  if (pcVar5 != (char *)0x0) {
    pcVar5 = CRYPTO_strdup(pcVar5,"../crypto/evp/pmeth_lib.c",0x1f1);
    *(char **)(ctx_00 + 0x10) = pcVar5;
    if (pcVar5 != (char *)0x0) goto LAB_00412154;
    goto LAB_004121fd;
  }
LAB_00412154:
  *(undefined4 *)(ctx_00 + 0x74) = *(undefined4 *)(ctx + 0x74);
  iVar4 = *(int *)ctx;
  if (iVar4 == 0x800) {
    if (*(long *)(ctx + 0x28) != 0) {
      *(long *)(ctx_00 + 0x28) = *(long *)(ctx + 0x28);
      iVar4 = EVP_KEYEXCH_up_ref();
      if (iVar4 != 0) {
        if (*(long *)(ctx + 0x30) == 0) goto LAB_004121ab;
        if (*(long *)(ctx + 0x28) != 0) {
          lVar7 = (**(code **)(*(long *)(ctx + 0x28) + 0x58))();
          *(long *)(ctx_00 + 0x30) = lVar7;
          if (lVar7 != 0) goto LAB_00412211;
          EVP_KEYEXCH_free(*(undefined8 *)(ctx_00 + 0x28));
          *(undefined8 *)(ctx_00 + 0x28) = 0;
        }
      }
      goto LAB_004121fd;
    }
LAB_00412390:
    if (*(long *)(ctx + 0x30) == 0) {
LAB_004121ab:
      lVar7 = *(long *)(ctx + 0x90);
      *(undefined8 *)(ctx_00 + 0x78) = *(undefined8 *)(ctx + 0x78);
      *(undefined8 *)(ctx_00 + 0x80) = *(undefined8 *)(ctx + 0x80);
      if (lVar7 != 0) {
        EVP_PKEY_up_ref();
        lVar7 = *(long *)(ctx + 0x90);
      }
      lVar3 = *(long *)(ctx + 0x78);
      *(long *)(ctx_00 + 0x90) = lVar7;
      if (lVar3 == 0) {
        if (*(int *)ctx_00 == 0) {
          local_28 = *(undefined8 *)(ctx + 0x20);
          lVar7 = evp_pkey_export_to_provider
                            (*(undefined8 *)(ctx + 0x88),*(undefined8 *)(ctx + 8),&local_28,
                             *(undefined8 *)(ctx + 0x10));
          if ((lVar7 != 0) && (iVar4 = EVP_KEYMGMT_up_ref(local_28), iVar4 != 0)) {
            EVP_KEYMGMT_free(*(undefined8 *)(ctx_00 + 0x20));
            *(undefined8 *)(ctx_00 + 0x20) = local_28;
            goto LAB_00412211;
          }
        }
      }
      else {
        iVar4 = (**(code **)(lVar3 + 0x10))(ctx_00,ctx);
        if (0 < iVar4) goto LAB_00412211;
      }
    }
  }
  else {
    if (iVar4 != 0x200) {
      if (0x200 < iVar4) {
        if ((iVar4 - 0x1000U & 0xffffefff) == 0) {
          if (*(long *)(ctx + 0x28) == 0) goto LAB_00412390;
          *(long *)(ctx_00 + 0x28) = *(long *)(ctx + 0x28);
          iVar4 = EVP_KEM_up_ref();
          if (iVar4 != 0) {
            if (*(long *)(ctx + 0x30) == 0) goto LAB_004121ab;
            if (*(long *)(ctx + 0x28) != 0) {
              lVar7 = (**(code **)(*(long *)(ctx + 0x28) + 0x60))();
              *(long *)(ctx_00 + 0x30) = lVar7;
              if (lVar7 != 0) goto LAB_00412211;
              EVP_KEM_free(*(undefined8 *)(ctx_00 + 0x28));
              *(undefined8 *)(ctx_00 + 0x28) = 0;
            }
          }
          goto LAB_004121fd;
        }
        if (iVar4 != 0x400) goto LAB_004121ab;
        goto LAB_00412255;
      }
      if (iVar4 < 0x41) {
        if (1 < iVar4) {
          uVar6 = 1L << ((char)iVar4 - 2U & 0x3f);
          if ((uVar6 & 0x4000000040004000) != 0) goto LAB_004122c6;
          if ((uVar6 & 5) != 0) goto LAB_004121fd;
        }
      }
      else if ((iVar4 - 0x80U & 0xffffff7f) == 0) {
LAB_004122c6:
        if (*(long *)(ctx + 0x28) == 0) goto LAB_00412390;
        *(long *)(ctx_00 + 0x28) = *(long *)(ctx + 0x28);
        iVar4 = EVP_SIGNATURE_up_ref();
        if (iVar4 != 0) {
          if (*(long *)(ctx + 0x30) == 0) goto LAB_004121ab;
          if (*(long *)(ctx + 0x28) != 0) {
            lVar7 = (**(code **)(*(long *)(ctx + 0x28) + 0xb0))();
            *(long *)(ctx_00 + 0x30) = lVar7;
            if (lVar7 != 0) goto LAB_00412211;
            EVP_SIGNATURE_free(*(undefined8 *)(ctx_00 + 0x28));
            *(undefined8 *)(ctx_00 + 0x28) = 0;
          }
        }
        goto LAB_004121fd;
      }
      goto LAB_004121ab;
    }
LAB_00412255:
    if (*(long *)(ctx + 0x28) == 0) goto LAB_00412390;
    *(long *)(ctx_00 + 0x28) = *(long *)(ctx + 0x28);
    iVar4 = EVP_ASYM_CIPHER_up_ref();
    if (iVar4 != 0) {
      if (*(long *)(ctx + 0x30) == 0) goto LAB_004121ab;
      if (*(long *)(ctx + 0x28) != 0) {
        lVar7 = (**(code **)(*(long *)(ctx + 0x28) + 0x60))();
        *(long *)(ctx_00 + 0x30) = lVar7;
        if (lVar7 != 0) goto LAB_00412211;
        EVP_ASYM_CIPHER_free(*(undefined8 *)(ctx_00 + 0x28));
        *(undefined8 *)(ctx_00 + 0x28) = 0;
      }
    }
  }
LAB_004121fd:
  *(undefined8 *)(ctx_00 + 0x78) = 0;
  EVP_PKEY_CTX_free(ctx_00);
  ctx_00 = (EVP_PKEY_CTX *)0x0;
LAB_00412211:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return ctx_00;
}

