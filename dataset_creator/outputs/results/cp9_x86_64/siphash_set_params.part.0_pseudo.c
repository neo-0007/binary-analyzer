
bool siphash_set_params_part_0(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = OSSL_PARAM_locate_const(param_2,"size");
  if (lVar3 == 0) {
LAB_00476121:
    lVar3 = OSSL_PARAM_locate_const(param_2,"c-rounds");
    if (lVar3 != 0) {
      iVar2 = OSSL_PARAM_get_uint(lVar3,param_1 + 0x48);
      if (iVar2 == 0) goto LAB_004760ef;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"d-rounds");
    if (lVar3 != 0) {
      iVar2 = OSSL_PARAM_get_uint(lVar3,param_1 + 0x4c);
      if (iVar2 == 0) goto LAB_004760ef;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"key");
    if (lVar3 == 0) {
      bVar4 = true;
      goto LAB_004760f1;
    }
    if ((*(int *)(lVar3 + 8) == 5) && (*(long *)(lVar3 + 0x18) == 0x10)) {
      iVar2 = *(int *)(param_1 + 0x4c);
      if (*(int *)(param_1 + 0x4c) == 0) {
        iVar2 = 4;
      }
      iVar1 = *(int *)(param_1 + 0x48);
      if (*(int *)(param_1 + 0x48) == 0) {
        iVar1 = 2;
      }
      iVar2 = SipHash_Init(param_1 + 8,*(undefined8 *)(lVar3 + 0x10),iVar1,iVar2);
      bVar4 = iVar2 != 0;
      goto LAB_004760f1;
    }
  }
  else {
    iVar2 = OSSL_PARAM_get_size_t(lVar3,&local_28);
    if (iVar2 != 0) {
      iVar2 = SipHash_set_hash_size(param_1 + 8,local_28);
      if (iVar2 != 0) goto LAB_00476121;
    }
  }
LAB_004760ef:
  bVar4 = false;
LAB_004760f1:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

