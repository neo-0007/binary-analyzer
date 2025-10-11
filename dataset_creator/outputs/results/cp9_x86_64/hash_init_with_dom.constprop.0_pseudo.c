
undefined8
hash_init_with_dom_constprop_0
          (undefined8 param_1,EVP_MD_CTX *param_2,char param_3,void *param_4,ulong param_5,
          undefined8 param_6)

{
  int iVar1;
  EVP_MD *type;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined8 local_39;
  undefined1 local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_31 = 0;
  local_39 = 0x3834346445676953;
  if (param_5 < 0x100) {
    local_3b = param_3 != '\0';
    local_3a = (char)param_5;
    type = (EVP_MD *)EVP_MD_fetch(param_1,"SHAKE256",param_6);
    if (type != (EVP_MD *)0x0) {
      iVar1 = EVP_DigestInit_ex(param_2,type,(ENGINE *)0x0);
      if (iVar1 != 0) {
        iVar1 = EVP_DigestUpdate(param_2,&local_39,8);
        if (iVar1 != 0) {
          iVar1 = EVP_DigestUpdate(param_2,&local_3b,2);
          if (iVar1 != 0) {
            iVar1 = EVP_DigestUpdate(param_2,param_4,param_5);
            if (iVar1 != 0) {
              EVP_MD_free(type);
              uVar2 = 0xffffffff;
              goto LAB_004d1ce3;
            }
          }
        }
      }
      EVP_MD_free(type);
    }
  }
  uVar2 = 0;
LAB_004d1ce3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

