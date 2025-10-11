
X509_REQ * X509_to_X509_REQ(X509 *x,EVP_PKEY *pkey,EVP_MD *md)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  X509_REQ *req;
  void *pvVar4;
  X509_NAME *name;
  EVP_PKEY *pkey_00;
  
  req = (X509_REQ *)
        X509_REQ_new_ex(*(undefined8 *)x[1].sha1_hash,*(undefined8 *)(x[1].sha1_hash + 8));
  if (req == (X509_REQ *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/x509_req.c",0x1f,__func___1);
    ERR_set_error(0xb,0xc0100,0);
  }
  else {
    puVar1 = *(undefined4 **)&req->references;
    *puVar1 = 1;
    pvVar4 = CRYPTO_malloc(1,"../crypto/x509/x509_req.c",0x26);
    *(void **)(puVar1 + 2) = pvVar4;
    puVar2 = *(undefined1 **)(*(long *)&req->references + 8);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0;
      name = X509_get_subject_name(x);
      iVar3 = X509_REQ_set_subject_name(req,name);
      if (((iVar3 != 0) && (pkey_00 = (EVP_PKEY *)X509_get0_pubkey(x), pkey_00 != (EVP_PKEY *)0x0))
         && (iVar3 = X509_REQ_set_pubkey(req,pkey_00), iVar3 != 0)) {
        if (pkey == (EVP_PKEY *)0x0) {
          return req;
        }
        iVar3 = X509_REQ_sign(req,pkey,md);
        if (iVar3 != 0) {
          return req;
        }
      }
    }
  }
  X509_REQ_free(req);
  return (X509_REQ *)0x0;
}

