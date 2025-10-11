
int X509_digest(X509 *data,EVP_MD *type,uchar *md,uint *len)

{
  undefined8 uVar1;
  undefined8 uVar2;
  X509_POLICY_CACHE *pXVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = EVP_MD_is_a(type,&DAT_007c6514);
  if ((iVar4 != 0) && (((ulong)data[1].name & 0x100100) == 0x100)) {
    if (len != (uint *)0x0) {
      *len = 0x14;
    }
    pXVar3 = data[1].policy_cache;
    *(AUTHORITY_KEYID **)md = data[1].akid;
    *(X509_POLICY_CACHE **)(md + 8) = pXVar3;
    *(undefined4 *)(md + 0x10) = *(undefined4 *)&data[1].crldp;
    return 1;
  }
  uVar1 = *(undefined8 *)(data[1].sha1_hash + 8);
  uVar2 = *(undefined8 *)data[1].sha1_hash;
  uVar5 = X509_it();
  iVar4 = ossl_asn1_item_digest_ex(uVar5,type,data,md,len,uVar2,uVar1);
  return iVar4;
}

