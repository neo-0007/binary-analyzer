
ASN1_OBJECT * ossl_c2i_ASN1_OBJECT(long *param_1,long *param_2,long param_3)

{
  void *__src;
  int n;
  ASN1_OBJECT *a;
  long lVar1;
  uchar *puVar2;
  int num;
  undefined8 uVar3;
  long in_FS_OFFSET;
  ASN1_OBJECT local_68;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_2 == (long *)0x0) || (0x7ffffffe < param_3 - 1U)) ||
      (puVar2 = (uchar *)*param_2, puVar2 == (uchar *)0x0)) || ((char)puVar2[param_3 + -1] < '\0'))
  {
    ERR_new();
    uVar3 = 0x103;
LAB_0049e1e1:
    a = (ASN1_OBJECT *)0x0;
    ERR_set_debug("../crypto/asn1/a_object.c",uVar3,"ossl_c2i_ASN1_OBJECT");
    ERR_set_error(0xd,0xd8,0);
    goto LAB_0049e1a5;
  }
  num = (int)param_3;
  local_68.nid = 0;
  local_68.flags = 0;
  local_68.length = num;
  local_68.data = puVar2;
  n = OBJ_obj2nid(&local_68);
  if (n != 0) {
    a = OBJ_nid2obj(n);
    if (param_1 != (long *)0x0) {
      ASN1_OBJECT_free((ASN1_OBJECT *)*param_1);
      *param_1 = (long)a;
    }
    *param_2 = *param_2 + param_3;
    goto LAB_0049e1a5;
  }
  lVar1 = 0;
  do {
    if ((puVar2[lVar1] == 0x80) && ((lVar1 == 0 || (-1 < (char)puVar2[lVar1 + -1])))) {
      ERR_new();
      uVar3 = 0x121;
      goto LAB_0049e1e1;
    }
    lVar1 = lVar1 + 1;
  } while ((int)lVar1 < num);
  if ((((param_1 == (long *)0x0) || (a = (ASN1_OBJECT *)*param_1, a == (ASN1_OBJECT *)0x0)) ||
      ((a->flags & 1) == 0)) && (a = ASN1_OBJECT_new(), a == (ASN1_OBJECT *)0x0)) {
LAB_0049e3a5:
    a = (ASN1_OBJECT *)0x0;
  }
  else {
    puVar2 = a->data;
    __src = (void *)*param_2;
    a->data = (uchar *)0x0;
    if ((puVar2 == (uchar *)0x0) || (a->length < num)) {
      a->length = 0;
      CRYPTO_free(puVar2);
      puVar2 = (uchar *)CRYPTO_malloc(num,"../crypto/asn1/a_object.c",0x136);
      if (puVar2 == (uchar *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/asn1/a_object.c",0x151,"ossl_c2i_ASN1_OBJECT");
        ERR_set_error(0xd,0xc0100,0);
        if ((param_1 == (long *)0x0) || ((ASN1_OBJECT *)*param_1 != a)) {
          ASN1_OBJECT_free(a);
        }
        goto LAB_0049e3a5;
      }
      a->flags = a->flags | 8;
    }
    puVar2 = (uchar *)memcpy(puVar2,__src,(long)num);
    if ((a->flags & 4) != 0) {
      CRYPTO_free(a->sn);
      CRYPTO_free(a->ln);
      a->flags = a->flags & 0xfffffffb;
    }
    a->data = puVar2;
    a->length = num;
    a->sn = (char *)0x0;
    a->ln = (char **)0x0;
    if (param_1 != (long *)0x0) {
      *param_1 = (long)a;
    }
    *param_2 = (long)__src + (long)num;
  }
LAB_0049e1a5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return a;
}

