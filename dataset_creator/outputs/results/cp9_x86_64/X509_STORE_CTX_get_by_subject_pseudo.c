
undefined8 X509_STORE_CTX_get_by_subject(long *param_1,int param_2,X509_NAME *param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int extraout_EAX;
  X509_OBJECT *pXVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  X509_OBJECT *local_60;
  X509_OBJECT local_58;
  long local_40;
  
  lVar1 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 != 0) {
    local_58.type = 0;
    local_58.data.ptr = (char *)0x0;
    iVar2 = X509_STORE_lock(lVar1);
    if (iVar2 != 0) {
      pXVar4 = X509_OBJECT_retrieve_by_subject
                         (*(stack_st_X509_OBJECT **)(lVar1 + 8),param_2,param_3);
      X509_STORE_unlock(lVar1);
      if ((pXVar4 == (X509_OBJECT *)0x0) || (local_60 = pXVar4, param_2 == 2)) {
        local_60 = &local_58;
        for (iVar2 = 0; iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x10)), iVar2 < iVar3;
            iVar2 = iVar2 + 1) {
          uVar5 = OPENSSL_sk_value(*(undefined8 *)(lVar1 + 0x10),iVar2);
          iVar3 = X509_LOOKUP_by_subject_ex
                            (uVar5,param_2,param_3,local_60,param_1[0x20],param_1[0x21]);
          if (iVar3 != 0) goto LAB_0058d0e4;
        }
        local_60 = pXVar4;
        if (pXVar4 == (X509_OBJECT *)0x0) goto LAB_0058d033;
      }
LAB_0058d0e4:
      X509_OBJECT_up_ref_count(local_60);
      if (extraout_EAX != 0) {
        *param_4 = local_60->type;
        *(_union_381 *)(param_4 + 2) = local_60->data;
        uVar5 = 1;
        goto LAB_0058d035;
      }
    }
  }
LAB_0058d033:
  uVar5 = 0;
LAB_0058d035:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar5;
}

