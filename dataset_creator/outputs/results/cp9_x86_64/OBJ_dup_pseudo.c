
ASN1_OBJECT * OBJ_dup(ASN1_OBJECT *o)

{
  int iVar1;
  ASN1_OBJECT *a;
  char **ppcVar2;
  char *pcVar3;
  uchar *puVar4;
  int iVar5;
  
  if (o == (ASN1_OBJECT *)0x0) {
    return (ASN1_OBJECT *)0x0;
  }
  if ((o->flags & 1) == 0) {
    return o;
  }
  a = ASN1_OBJECT_new();
  if (a == (ASN1_OBJECT *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/objects/obj_lib.c",0x1c,"OBJ_dup");
    ERR_set_error(8,0x8000d,0);
    return (ASN1_OBJECT *)0x0;
  }
  iVar5 = o->length;
  a->flags = o->flags | 0xd;
  if (0 < iVar5) {
    puVar4 = (uchar *)CRYPTO_memdup(o->data,(long)iVar5,"../crypto/objects/obj_lib.c",0x26);
    a->data = puVar4;
    if (puVar4 == (uchar *)0x0) goto LAB_0042b0d0;
    iVar5 = o->length;
  }
  iVar1 = o->nid;
  ppcVar2 = o->ln;
  a->length = iVar5;
  a->nid = iVar1;
  if (ppcVar2 != (char **)0x0) {
    ppcVar2 = (char **)CRYPTO_strdup((char *)ppcVar2,"../crypto/objects/obj_lib.c",0x2c);
    a->ln = ppcVar2;
    if (ppcVar2 == (char **)0x0) goto LAB_0042b0d0;
  }
  if (o->sn == (char *)0x0) {
    return a;
  }
  pcVar3 = CRYPTO_strdup(o->sn,"../crypto/objects/obj_lib.c",0x2f);
  a->sn = pcVar3;
  if (pcVar3 != (char *)0x0) {
    return a;
  }
LAB_0042b0d0:
  ASN1_OBJECT_free(a);
  ERR_new();
  ERR_set_debug("../crypto/objects/obj_lib.c",0x35,"OBJ_dup");
  ERR_set_error(8,0xc0100,0);
  return (ASN1_OBJECT *)0x0;
}

