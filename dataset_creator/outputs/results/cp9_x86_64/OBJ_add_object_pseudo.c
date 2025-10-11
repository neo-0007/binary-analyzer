
int OBJ_add_object(ASN1_OBJECT *obj)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  ASN1_OBJECT *a;
  void *pvVar4;
  long lVar5;
  void **ppvVar6;
  long in_FS_OFFSET;
  void *local_58 [5];
  long local_30;
  
  ppvVar6 = local_58;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58[0] = (void *)0x0;
  local_58[1] = (void *)0x0;
  local_58[2] = (void *)0x0;
  local_58[3] = (void *)0x0;
  if (added == 0) {
    added = OPENSSL_LH_new(added_obj_hash,added_obj_cmp);
    iVar3 = 0;
    if (added == 0) goto LAB_00429e8c;
    a = OBJ_dup(obj);
    if (a == (ASN1_OBJECT *)0x0) goto LAB_00429f8c;
LAB_00429db8:
    local_58[3] = CRYPTO_malloc(0x10,"../crypto/objects/obj_dat.c",0xb9);
    pvVar4 = local_58[3];
    if (local_58[3] != (void *)0x0) {
      if ((a->length != 0) && (obj->data != (uchar *)0x0)) {
        pvVar4 = CRYPTO_malloc(0x10,"../crypto/objects/obj_dat.c",0xbc);
        local_58[0] = pvVar4;
        if (pvVar4 == (void *)0x0) goto LAB_00429ee0;
      }
      if (a->sn != (char *)0x0) {
        local_58[1] = CRYPTO_malloc(0x10,"../crypto/objects/obj_dat.c",0xbf);
        pvVar4 = local_58[0];
        if (local_58[1] == (void *)0x0) goto LAB_00429ee0;
      }
      if (a->ln != (char **)0x0) {
        local_58[2] = CRYPTO_malloc(0x10,"../crypto/objects/obj_dat.c",0xc2);
        pvVar4 = local_58[0];
        if (local_58[2] == (void *)0x0) goto LAB_00429ee0;
      }
      lVar5 = 0;
      do {
        puVar1 = (undefined4 *)local_58[lVar5];
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = (int)lVar5;
          lVar2 = added;
          *(ASN1_OBJECT **)(puVar1 + 2) = a;
          pvVar4 = (void *)OPENSSL_LH_insert(lVar2);
          CRYPTO_free(pvVar4);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != 4);
      a->flags = a->flags & 0xfffffff2;
      iVar3 = a->nid;
      goto LAB_00429e8c;
    }
LAB_00429ee0:
    ERR_new();
    ERR_set_debug("../crypto/objects/obj_dat.c",0xd4,"OBJ_add_object");
    ERR_set_error(8,0xc0100,0);
  }
  else {
    a = OBJ_dup(obj);
    if (a != (ASN1_OBJECT *)0x0) goto LAB_00429db8;
LAB_00429f8c:
    pvVar4 = (void *)0x0;
  }
  while( true ) {
    ppvVar6 = ppvVar6 + 1;
    CRYPTO_free(pvVar4);
    if (local_58 + 4 == ppvVar6) break;
    pvVar4 = *ppvVar6;
  }
  ASN1_OBJECT_free(a);
  iVar3 = 0;
LAB_00429e8c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

