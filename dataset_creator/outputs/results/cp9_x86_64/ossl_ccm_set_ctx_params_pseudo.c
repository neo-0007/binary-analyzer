
undefined4 ossl_ccm_set_ctx_params(byte *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  uVar10 = 1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) goto LAB_00484d33;
  lVar6 = OSSL_PARAM_locate_const(param_2,"tag");
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 8) == 5) {
      uVar7 = *(ulong *)(lVar6 + 0x18);
      if ((0xc < uVar7 - 4) || ((uVar7 & 1) != 0)) {
        ERR_new();
        uVar10 = 0;
        ERR_set_debug("../providers/implementations/ciphers/ciphercommon_ccm.c",0x54,
                      "ossl_ccm_set_ctx_params");
        ERR_set_error(0x39,0x76,0);
        goto LAB_00484d33;
      }
      if (*(void **)(lVar6 + 0x10) != (void *)0x0) {
        if ((*param_1 & 1) != 0) {
          ERR_new();
          uVar10 = 0;
          ERR_set_debug("../providers/implementations/ciphers/ciphercommon_ccm.c",0x5a,
                        "ossl_ccm_set_ctx_params");
          ERR_set_error(0x39,0x78,0);
          goto LAB_00484d33;
        }
        memcpy(param_1 + 0x40,*(void **)(lVar6 + 0x10),uVar7);
        *param_1 = *param_1 | 8;
        uVar7 = *(ulong *)(lVar6 + 0x18);
      }
      *(ulong *)(param_1 + 0x10) = uVar7;
      goto LAB_00484c7b;
    }
    ERR_new();
    uVar9 = 0x50;
LAB_00484d11:
    uVar10 = 0;
    ERR_set_debug("../providers/implementations/ciphers/ciphercommon_ccm.c",uVar9,
                  "ossl_ccm_set_ctx_params");
    ERR_set_error(0x39,0x67,0);
    goto LAB_00484d33;
  }
LAB_00484c7b:
  lVar6 = OSSL_PARAM_locate_const(param_2,"ivlen");
  if (lVar6 == 0) {
LAB_00484cc9:
    lVar6 = OSSL_PARAM_locate_const(param_2,"tlsaad");
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 8) != 5) {
        ERR_new();
        uVar9 = 0x76;
        goto LAB_00484d11;
      }
      lVar2 = *(long *)(lVar6 + 0x18);
      puVar3 = *(undefined8 **)(lVar6 + 0x10);
      iVar5 = ossl_prov_is_running();
      if ((lVar2 == 0xd) && (iVar5 != 0)) {
        *(undefined8 *)(param_1 + 0x40) = *puVar3;
        *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(puVar3 + 1);
        bVar1 = *(byte *)((long)puVar3 + 0xc);
        param_1[0x20] = 0xd;
        param_1[0x21] = 0;
        param_1[0x22] = 0;
        param_1[0x23] = 0;
        param_1[0x24] = 0;
        param_1[0x25] = 0;
        param_1[0x26] = 0;
        param_1[0x27] = 0;
        param_1[0x4c] = bVar1;
        uVar4 = *(ushort *)(param_1 + 0x4b) << 8 | *(ushort *)(param_1 + 0x4b) >> 8;
        if (uVar4 < 8) goto LAB_00484ea0;
        uVar7 = *(ulong *)(param_1 + 0x10);
        uVar8 = (ulong)uVar4 - 8;
        if ((*param_1 & 1) == 0) {
          if (uVar8 < uVar7) goto LAB_00484ea0;
          uVar8 = uVar8 - uVar7;
        }
        local_38 = (long)(int)uVar7;
        *(ushort *)(param_1 + 0x4b) = (ushort)uVar8 << 8 | (ushort)uVar8 >> 8;
        if (local_38 != 0) {
          *(long *)(param_1 + 0x28) = local_38;
          goto LAB_00484e27;
        }
      }
      else {
LAB_00484ea0:
        local_38 = 0;
      }
      ERR_new();
      uVar10 = 0;
      ERR_set_debug("../providers/implementations/ciphers/ciphercommon_ccm.c",0x7b,
                    "ossl_ccm_set_ctx_params");
      ERR_set_error(0x39,0x73,0);
      goto LAB_00484d33;
    }
LAB_00484e27:
    uVar10 = 1;
    lVar6 = OSSL_PARAM_locate_const(param_2,"tlsivfixed");
    if (lVar6 == 0) goto LAB_00484d33;
    if (*(int *)(lVar6 + 8) != 5) {
      ERR_new();
      uVar9 = 0x84;
      goto LAB_00484d11;
    }
    if (*(long *)(lVar6 + 0x18) == 4) {
      *(undefined4 *)(param_1 + 0x30) = **(undefined4 **)(lVar6 + 0x10);
      goto LAB_00484d33;
    }
    ERR_new();
    uVar9 = 0x88;
  }
  else {
    iVar5 = OSSL_PARAM_get_size_t(lVar6,&local_38);
    if (iVar5 == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/ciphers/ciphercommon_ccm.c",0x68,
                    "ossl_ccm_set_ctx_params");
      ERR_set_error(0x39,0x67,0);
      uVar10 = 0;
      goto LAB_00484d33;
    }
    if (0xdU - local_38 < 7) {
      *(long *)(param_1 + 8) = 0xf - local_38;
      goto LAB_00484cc9;
    }
    ERR_new();
    uVar9 = 0x6d;
  }
  uVar10 = 0;
  ERR_set_debug("../providers/implementations/ciphers/ciphercommon_ccm.c",uVar9,
                "ossl_ccm_set_ctx_params");
  ERR_set_error(0x39,0x6d,0);
LAB_00484d33:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

