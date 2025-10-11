
int X509_CRL_digest(X509_CRL *data,EVP_MD *type,uchar *md,uint *len)

{
  X509_CRL_INFO *pXVar1;
  void *pvVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (type == (EVP_MD *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/x_all.c",0x214,"X509_CRL_digest");
    ERR_set_error(0xb,0xc0102,0);
    return 0;
  }
  iVar3 = EVP_MD_is_a(type,&DAT_007c6514);
  if ((iVar3 != 0) && (((ulong)data[1].sig_alg & 0x10010000000000) == 0x10000000000)) {
    if (len != (uint *)0x0) {
      *len = 0x14;
    }
    uVar4 = *(undefined8 *)data[1].sha1_hash;
    *(ASN1_INTEGER **)md = data[1].base_crl_number;
    *(undefined8 *)(md + 8) = uVar4;
    *(undefined4 *)(md + 0x10) = *(undefined4 *)(data[1].sha1_hash + 8);
    return 1;
  }
  pXVar1 = data[2].crl;
  pvVar2 = data[1].meth_data;
  uVar4 = X509_CRL_it();
  iVar3 = ossl_asn1_item_digest_ex(uVar4,type,data,md,len,pvVar2,pXVar1);
  return iVar3;
}

