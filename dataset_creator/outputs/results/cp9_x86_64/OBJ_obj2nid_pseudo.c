
int OBJ_obj2nid(ASN1_OBJECT *o)

{
  long lVar1;
  uint *puVar2;
  int iVar3;
  long in_FS_OFFSET;
  ASN1_OBJECT *local_30;
  undefined4 local_28 [2];
  ASN1_OBJECT *local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = o;
  if (o != (ASN1_OBJECT *)0x0) {
    iVar3 = o->nid;
    if (iVar3 != 0) goto LAB_0042a3b5;
    if (o->length != 0) {
      OPENSSL_init_crypto(0x40,0,0);
      if (added != 0) {
        local_28[0] = 0;
        local_20 = local_30;
        lVar1 = OPENSSL_LH_retrieve(added,local_28);
        if (lVar1 != 0) {
          iVar3 = *(int *)(*(long *)(lVar1 + 8) + 0x10);
          goto LAB_0042a3b5;
        }
      }
      puVar2 = (uint *)OBJ_bsearch_(&local_30,obj_objs,0x456,4,obj_cmp_BSEARCH_CMP_FN);
      if (puVar2 != (uint *)0x0) {
        iVar3 = *(int *)(&DAT_008d53b0 + (ulong)*puVar2 * 0x28);
        goto LAB_0042a3b5;
      }
    }
  }
  iVar3 = 0;
LAB_0042a3b5:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

