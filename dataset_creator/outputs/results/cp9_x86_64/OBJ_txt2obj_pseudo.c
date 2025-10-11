
ASN1_OBJECT * OBJ_txt2obj(char *s,int no_name)

{
  int iVar1;
  int num;
  ASN1_OBJECT *pAVar2;
  uchar *ptr;
  long in_FS_OFFSET;
  uchar *local_40;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (no_name == 0) {
    iVar1 = OBJ_sn2nid(s);
    if (iVar1 == 0) {
      iVar1 = OBJ_ln2nid(s);
      if (iVar1 == 0) {
        iVar1 = ossl_isdigit();
        if (iVar1 != 0) goto LAB_0042ab92;
        ERR_new();
        pAVar2 = (ASN1_OBJECT *)0x0;
        ERR_set_debug("../crypto/objects/obj_dat.c",0x178,__func___1);
        ERR_set_error(8,0x67,0);
        goto LAB_0042ac3b;
      }
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      pAVar2 = OBJ_nid2obj(iVar1);
      return pAVar2;
    }
  }
  else {
LAB_0042ab92:
    iVar1 = a2d_ASN1_OBJECT((uchar *)0x0,0,s,-1);
    if (0 < iVar1) {
      num = ASN1_object_size(0,iVar1,6);
      if (-1 < num) {
        ptr = (uchar *)CRYPTO_malloc(num,"../crypto/objects/obj_dat.c",0x18b);
        if (ptr != (uchar *)0x0) {
          local_40 = ptr;
          ASN1_put_object(&local_40,0,iVar1,6,0);
          a2d_ASN1_OBJECT(local_40,iVar1,s,-1);
          local_38 = ptr;
          pAVar2 = d2i_ASN1_OBJECT((ASN1_OBJECT **)0x0,&local_38,(long)num);
          CRYPTO_free(ptr);
          goto LAB_0042ac3b;
        }
        ERR_new();
        ERR_set_debug("../crypto/objects/obj_dat.c",0x18c,__func___1);
        ERR_set_error(8,0xc0100,0);
      }
    }
    pAVar2 = (ASN1_OBJECT *)0x0;
LAB_0042ac3b:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return pAVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

