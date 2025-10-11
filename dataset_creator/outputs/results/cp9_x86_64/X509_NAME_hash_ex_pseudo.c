
undefined4
X509_NAME_hash_ex(X509_NAME *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  EVP_MD *type;
  undefined4 uVar2;
  long in_FS_OFFSET;
  undefined4 local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  type = (EVP_MD *)EVP_MD_fetch(param_2);
  i2d_X509_NAME(param_1,(uchar **)0x0);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (type != (EVP_MD *)0x0) {
    iVar1 = EVP_Digest(param_1->canon_enc,(long)param_1->canon_enclen,(uchar *)local_38,(uint *)0x0,
                       type,(ENGINE *)0x0);
    if (iVar1 != 0) {
      uVar2 = local_38[0];
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 1;
      }
      goto LAB_0058bbdf;
    }
  }
  uVar2 = 0;
LAB_0058bbdf:
  EVP_MD_free(type);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

