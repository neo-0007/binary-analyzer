
long test_sha_md(void)

{
  int iVar1;
  long lVar2;
  
  if (sha1_md == 0) {
    lVar2 = EVP_MD_meth_new(0x40,0x41);
    if (((((lVar2 == 0) || (iVar1 = EVP_MD_meth_set_result_size(lVar2,0x14), iVar1 == 0)) ||
         (iVar1 = EVP_MD_meth_set_input_blocksize(lVar2,0x40), iVar1 == 0)) ||
        ((iVar1 = EVP_MD_meth_set_app_datasize(lVar2,0x68), iVar1 == 0 ||
         (iVar1 = EVP_MD_meth_set_flags(lVar2,0), iVar1 == 0)))) ||
       ((iVar1 = EVP_MD_meth_set_init(lVar2,test_sha1_init), iVar1 == 0 ||
        ((iVar1 = EVP_MD_meth_set_update(lVar2,test_sha1_update), iVar1 == 0 ||
         (iVar1 = EVP_MD_meth_set_final(lVar2,test_sha1_final), iVar1 == 0)))))) {
      EVP_MD_meth_free(lVar2);
      lVar2 = 0;
    }
    sha1_md = lVar2;
    return lVar2;
  }
  return sha1_md;
}

