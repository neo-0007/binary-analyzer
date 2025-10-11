
undefined4 EVP_DigestFinalXOF(EVP_MD_CTX *param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  ENGINE *pEVar3;
  long in_FS_OFFSET;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pEVar3 = param_1->engine;
  local_90 = param_3;
  if (pEVar3 == (ENGINE *)0x0) {
    ERR_new();
    uVar2 = 0;
    ERR_set_debug("../crypto/evp/digest.c",0x1e0,"EVP_DigestFinalXOF");
    ERR_set_error(6,0xda,0);
  }
  else if (*(long *)(pEVar3 + 0x70) == 0) {
    if ((((byte)pEVar3[0x10] & 2) != 0) && (param_3 < 0x80000000)) {
      iVar1 = (**(code **)(pEVar3 + 0x50))(param_1,3,param_3,0);
      if (iVar1 != 0) {
        uVar2 = (**(code **)(param_1->engine + 0x30))(param_1,param_2);
        pEVar3 = param_1->engine;
        if (*(code **)(pEVar3 + 0x40) != (code *)0x0) {
          (**(code **)(pEVar3 + 0x40))(param_1);
          EVP_MD_CTX_set_flags(param_1,2);
          pEVar3 = param_1->engine;
        }
        OPENSSL_cleanse(param_1->pctx,(long)*(int *)(pEVar3 + 0x4c));
        goto LAB_005187b6;
      }
    }
    ERR_new();
    uVar2 = 0;
    ERR_set_debug("../crypto/evp/digest.c",0x1ff,"EVP_DigestFinalXOF");
    ERR_set_error(6,0xb2,0);
  }
  else if (*(long *)(pEVar3 + 0xa0) == 0) {
    ERR_new();
    uVar2 = 0;
    ERR_set_debug("../crypto/evp/digest.c",0x1e8,"EVP_DigestFinalXOF");
    ERR_set_error(6,0xbc,0);
  }
  else {
    OSSL_PARAM_construct_size_t(&local_c8,"xoflen",&local_90);
    uVar2 = 0;
    local_68 = local_a8;
    local_88 = local_c8;
    uStack_80 = uStack_c0;
    local_78 = local_b8;
    uStack_70 = uStack_b0;
    OSSL_PARAM_construct_end(&local_c8);
    local_60 = local_c8;
    uStack_58 = uStack_c0;
    local_40 = local_a8;
    local_50 = local_b8;
    uStack_48 = uStack_b0;
    iVar1 = EVP_MD_CTX_set_params(param_1,&local_88);
    if (0 < iVar1) {
      uVar2 = (**(code **)(param_1->engine + 0xa0))(param_1[1].engine,param_2,&local_90,local_90);
    }
  }
LAB_005187b6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

