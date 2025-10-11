
int EVP_PKEY_CTX_set_hkdf_mode(EVP_PKEY_CTX *param_1,int param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  int local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c = param_2;
  if ((param_1 == (EVP_PKEY_CTX *)0x0) || (*(int *)param_1 != 0x800)) {
    ERR_new();
    ERR_set_debug("../crypto/evp/pmeth_lib.c",0x438,"EVP_PKEY_CTX_set_hkdf_mode");
    ERR_set_error(6,0x93,0);
    iVar1 = -2;
  }
  else if (*(long *)(param_1 + 0x30) == 0) {
    iVar1 = EVP_PKEY_CTX_ctrl(param_1,-1,0x800,0x1007,param_2,(void *)0x0);
  }
  else if (param_2 < 0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/pmeth_lib.c",0x444,"EVP_PKEY_CTX_set_hkdf_mode");
    ERR_set_error(6,0xde,0);
    iVar1 = 0;
  }
  else {
    OSSL_PARAM_construct_int(&local_b8,"mode",&local_7c);
    local_58 = local_98;
    local_78 = local_b8;
    uStack_70 = uStack_b0;
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    OSSL_PARAM_construct_end(&local_b8);
    local_50 = local_b8;
    uStack_48 = uStack_b0;
    local_30 = local_98;
    local_40 = local_a8;
    uStack_38 = uStack_a0;
    iVar1 = EVP_PKEY_CTX_set_params(param_1,&local_78);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

