
int X509V3_EXT_add_alias(int nid_to,int nid_from)

{
  void *pvVar1;
  ASN1_ITEM_EXP *pAVar2;
  X509V3_EXT_FREE pXVar3;
  X509V3_EXT_I2D pXVar4;
  X509V3_EXT_S2I pXVar5;
  X509V3_EXT_V2I pXVar6;
  X509V3_EXT_R2I pXVar7;
  int iVar8;
  X509V3_EXT_METHOD *pXVar9;
  X509V3_EXT_METHOD *ext;
  
  pXVar9 = X509V3_EXT_get_nid(nid_from);
  if (pXVar9 == (X509V3_EXT_METHOD *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_lib.c",0x5c,"X509V3_EXT_add_alias");
    ERR_set_error(0x22,0x66,0);
    return 0;
  }
  ext = (X509V3_EXT_METHOD *)CRYPTO_malloc(0x68,"../crypto/x509/v3_lib.c",0x5f);
  if (ext != (X509V3_EXT_METHOD *)0x0) {
    iVar8 = pXVar9->ext_flags;
    pAVar2 = pXVar9->it;
    ext->ext_nid = pXVar9->ext_nid;
    ext->ext_flags = iVar8;
    ext->it = pAVar2;
    pXVar3 = pXVar9->ext_free;
    ext->ext_new = pXVar9->ext_new;
    ext->ext_free = pXVar3;
    pXVar4 = pXVar9->i2d;
    ext->d2i = pXVar9->d2i;
    ext->i2d = pXVar4;
    pXVar5 = pXVar9->s2i;
    ext->i2s = pXVar9->i2s;
    ext->s2i = pXVar5;
    pXVar6 = pXVar9->v2i;
    ext->i2v = pXVar9->i2v;
    ext->v2i = pXVar6;
    pXVar7 = pXVar9->r2i;
    ext->i2r = pXVar9->i2r;
    ext->r2i = pXVar7;
    pvVar1 = pXVar9->usr_data;
    ext->ext_flags = ext->ext_flags | 1;
    ext->usr_data = pvVar1;
    ext->ext_nid = nid_to;
    iVar8 = X509V3_EXT_add(ext);
    return iVar8;
  }
  ERR_new();
  ERR_set_debug("../crypto/x509/v3_lib.c",0x60,"X509V3_EXT_add_alias");
  ERR_set_error(0x22,0xc0100,0);
  return 0;
}

