
ASN1_OBJECT * OBJ_nid2obj(int n)

{
  long lVar1;
  ASN1_OBJECT *pAVar2;
  long in_FS_OFFSET;
  undefined4 local_58 [2];
  undefined1 *local_50;
  undefined1 local_48 [16];
  int local_38;
  long local_20;
  
  lVar1 = (long)n;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((uint)n < 0x4e0) {
    if (n == 0) {
      lVar1 = 0;
    }
    else if (*(int *)(&DAT_008d53b0 + lVar1 * 0x28) == 0) {
      ERR_new();
      ERR_set_debug("../crypto/objects/obj_dat.c",0xe3,__func___4);
      ERR_set_error(8,0x65,0);
      pAVar2 = (ASN1_OBJECT *)0x0;
      goto LAB_00429fe9;
    }
    pAVar2 = (ASN1_OBJECT *)(&nid_objs + lVar1 * 5);
  }
  else {
    OPENSSL_init_crypto(0x40,0);
    pAVar2 = added;
    if (added != (ASN1_OBJECT *)0x0) {
      local_50 = local_48;
      local_58[0] = 3;
      local_38 = n;
      lVar1 = OPENSSL_LH_retrieve(added,local_58);
      if (lVar1 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/objects/obj_dat.c",0xf6,__func___4);
        ERR_set_error(8,0x65,0);
        pAVar2 = (ASN1_OBJECT *)0x0;
      }
      else {
        pAVar2 = *(ASN1_OBJECT **)(lVar1 + 8);
      }
    }
  }
LAB_00429fe9:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

