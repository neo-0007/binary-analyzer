
bool ossl_x509_algor_is_sm2(X509_ALGOR *param_1)

{
  int iVar1;
  EC_GROUP *group;
  long in_FS_OFFSET;
  bool bVar2;
  int local_34;
  ASN1_OBJECT *local_30;
  char **local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  local_30 = (ASN1_OBJECT *)0x0;
  X509_ALGOR_get0((ASN1_OBJECT **)0x0,&local_34,&local_30,param_1);
  if (local_34 == 6) {
    iVar1 = OBJ_obj2nid(local_30);
    bVar2 = iVar1 == 0x494;
  }
  else {
    bVar2 = false;
    if (local_34 == 0x10) {
      local_28 = local_30->ln;
      group = d2i_ECPKParameters((EC_GROUP **)0x0,(uchar **)&local_28,(long)*(int *)&local_30->sn);
      if (group != (EC_GROUP *)0x0) {
        iVar1 = EC_GROUP_get_curve_name(group);
        bVar2 = iVar1 == 0x494;
      }
      EC_GROUP_free(group);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

