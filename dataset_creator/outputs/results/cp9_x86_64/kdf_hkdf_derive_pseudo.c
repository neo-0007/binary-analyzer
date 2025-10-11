
ulong kdf_hkdf_derive(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = ossl_prov_ctx_get0_libctx(*param_1);
  iVar6 = ossl_prov_is_running();
  if (iVar6 != 0) {
    iVar6 = kdf_hkdf_set_ctx_params(param_1,param_4);
    if (iVar6 != 0) {
      lVar10 = ossl_prov_digest_md(param_1 + 2);
      if (lVar10 == 0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/kdfs/hkdf.c",0xa0,"kdf_hkdf_derive");
        ERR_set_error(0x39,0x81,0);
      }
      else {
        lVar1 = param_1[7];
        if (lVar1 == 0) {
          ERR_new();
          ERR_set_debug("../providers/implementations/kdfs/hkdf.c",0xa4,"kdf_hkdf_derive");
          ERR_set_error(0x39,0x80,0);
          uVar11 = 0;
          goto LAB_00465247;
        }
        if (param_3 == 0) {
          ERR_new();
          ERR_set_debug("../providers/implementations/kdfs/hkdf.c",0xa8,"kdf_hkdf_derive");
          ERR_set_error(0x39,0x69,0);
          uVar11 = 0;
          goto LAB_00465247;
        }
        uVar2 = param_1[8];
        if (*(int *)(param_1 + 1) == 1) {
          uVar11 = HKDF_Extract(uVar9,lVar10,param_1[5],param_1[6],lVar1,uVar2,param_2,param_3);
          goto LAB_00465247;
        }
        if (*(int *)(param_1 + 1) == 2) {
          uVar11 = HKDF_Expand(lVar10,lVar1,uVar2,param_1 + 0xf,param_1[0x10f],param_2,param_3);
          goto LAB_00465247;
        }
        uVar3 = param_1[0x10f];
        uVar4 = param_1[6];
        uVar5 = param_1[5];
        iVar6 = EVP_MD_get_size(lVar10);
        if (-1 < iVar6) {
          iVar7 = HKDF_Extract(uVar9,lVar10,uVar5,uVar4,lVar1,uVar2,local_88,(long)iVar6);
          if (iVar7 != 0) {
            uVar8 = HKDF_Expand(lVar10,local_88,(long)iVar6,param_1 + 0xf,uVar3,param_2,param_3);
            OPENSSL_cleanse(local_88,0x40);
            uVar11 = (ulong)uVar8;
            goto LAB_00465247;
          }
        }
      }
    }
  }
  uVar11 = 0;
LAB_00465247:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

