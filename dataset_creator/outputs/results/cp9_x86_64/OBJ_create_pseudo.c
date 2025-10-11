
int OBJ_create(char *oid,char *sn,char *ln)

{
  int iVar1;
  int iVar2;
  ASN1_OBJECT *o;
  
  if (sn != (char *)0x0) {
    iVar1 = OBJ_sn2nid(sn);
    if (iVar1 != 0) goto LAB_0042add0;
  }
  if (ln != (char *)0x0) {
    iVar1 = OBJ_ln2nid(ln);
    if (iVar1 != 0) {
LAB_0042add0:
      ERR_new();
      ERR_set_debug("../crypto/objects/obj_dat.c",0x2cf,"OBJ_create");
      ERR_set_error(8,0x66,0);
      return 0;
    }
  }
  iVar2 = 0;
  o = OBJ_txt2obj(oid,1);
  iVar1 = 0;
  if (o != (ASN1_OBJECT *)0x0) {
    iVar1 = OBJ_obj2nid(o);
    if (iVar1 == 0) {
      iVar1 = OBJ_new_nid(1);
      o->sn = sn;
      o->nid = iVar1;
      o->ln = (char **)ln;
      iVar2 = OBJ_add_object(o);
      o->sn = (char *)0x0;
      o->ln = (char **)0x0;
    }
    else {
      ERR_new();
      ERR_set_debug("../crypto/objects/obj_dat.c",0x2da,"OBJ_create");
      ERR_set_error(8,0x66,0);
    }
    ASN1_OBJECT_free(o);
    iVar1 = iVar2;
  }
  return iVar1;
}

