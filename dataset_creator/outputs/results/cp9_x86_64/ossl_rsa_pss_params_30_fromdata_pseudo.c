
ulong ossl_rsa_pss_params_30_fromdata
                (long param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = 0;
  if (param_1 == 0) goto LAB_005548ac;
  lVar4 = OSSL_PARAM_locate_const(param_3,"properties");
  lVar5 = OSSL_PARAM_locate_const(param_3,"digest");
  lVar6 = OSSL_PARAM_locate_const(param_3,&DAT_007daa60);
  lVar7 = OSSL_PARAM_locate_const(param_3,"mgf1-digest");
  lVar8 = OSSL_PARAM_locate_const(param_3,"saltlen");
  if (lVar4 == 0) {
LAB_0055472b:
    if (*param_2 != 0) goto LAB_0055473a;
LAB_00554880:
    if (((lVar5 != 0 || lVar6 != 0) || lVar7 != 0) || lVar8 != 0) {
      uVar10 = ossl_rsa_pss_params_30_set_defaults(param_1);
      if ((int)uVar10 == 0) goto LAB_005548ac;
      *param_2 = 1;
      goto LAB_0055473a;
    }
    lVar7 = 0;
    uVar3 = 1;
    lVar5 = 0;
  }
  else {
    if (*(int *)(lVar4 + 8) != 4) {
      lVar4 = 0;
      goto LAB_0055472b;
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if (*param_2 == 0) goto LAB_00554880;
LAB_0055473a:
    if (lVar6 != 0) {
      uVar1 = ossl_rsa_pss_params_30_maskgenalg(0);
      local_48 = 0;
      if (*(int *)(lVar6 + 8) == 4) {
        local_48 = *(ulong *)(lVar6 + 0x10);
LAB_00554766:
        uVar9 = ossl_rsa_mgf_nid2name(uVar1);
        iVar2 = OPENSSL_strcasecmp(*(undefined8 *)(lVar6 + 0x10),uVar9);
        if (iVar2 == 0) goto LAB_00554782;
      }
      else {
        iVar2 = OSSL_PARAM_get_utf8_ptr(lVar6,&local_48);
        if (iVar2 != 0) goto LAB_00554766;
      }
      uVar10 = 0;
      goto LAB_005548ac;
    }
LAB_00554782:
    if (lVar5 == 0) {
      lVar5 = 0;
LAB_005547df:
      if (lVar7 == 0) {
LAB_00554842:
        if (lVar8 == 0) {
          uVar3 = 1;
        }
        else {
          uVar3 = OSSL_PARAM_get_int(lVar8,&local_48);
          if (uVar3 != 0) {
            iVar2 = ossl_rsa_pss_params_30_set_saltlen(param_1,local_48 & 0xffffffff);
            uVar3 = (uint)(iVar2 != 0);
          }
        }
        goto LAB_00554896;
      }
      local_48 = 0;
      if (*(int *)(lVar7 + 8) == 4) {
        local_48 = *(ulong *)(lVar7 + 0x10);
LAB_00554803:
        lVar7 = EVP_MD_fetch(param_4,local_48,lVar4);
        if (lVar7 == 0) goto LAB_00554960;
        uVar1 = ossl_rsa_oaeppss_md2nid(lVar7);
        iVar2 = ossl_rsa_pss_params_30_set_maskgenhashalg(param_1,uVar1);
        if (iVar2 != 0) goto LAB_00554842;
      }
      else {
        iVar2 = OSSL_PARAM_get_utf8_ptr(lVar6,&local_48);
        if (iVar2 != 0) goto LAB_00554803;
LAB_00554960:
        lVar7 = 0;
      }
      uVar3 = 0;
      goto LAB_00554896;
    }
    local_48 = 0;
    if (*(int *)(lVar5 + 8) == 4) {
      local_48 = *(ulong *)(lVar5 + 0x10);
LAB_005547a7:
      lVar5 = EVP_MD_fetch(param_4,local_48,lVar4);
      if (lVar5 == 0) goto LAB_00554930;
      uVar1 = ossl_rsa_oaeppss_md2nid(lVar5);
      iVar2 = ossl_rsa_pss_params_30_set_hashalg(param_1,uVar1);
      if (iVar2 != 0) goto LAB_005547df;
    }
    else {
      iVar2 = OSSL_PARAM_get_utf8_ptr(lVar6,&local_48);
      if (iVar2 != 0) goto LAB_005547a7;
LAB_00554930:
      lVar5 = 0;
    }
    uVar3 = 0;
    lVar7 = 0;
  }
LAB_00554896:
  EVP_MD_free(lVar5);
  EVP_MD_free(lVar7);
  uVar10 = (ulong)uVar3;
LAB_005548ac:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar10;
}

